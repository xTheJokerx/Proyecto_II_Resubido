#include"ContenedorLProfe.h"

ContenedorLProfe::ContenedorLProfe() {
	ppioProfe = NULL;
}

ContenedorLProfe::~ContenedorLProfe() {
	NodoProfe *temp, *anterior;
	temp = ppioProfe;
	while (temp != NULL)
	{
		anterior = temp;
		temp = temp->getSiguienteProfe();
		delete anterior;
	}
}

NodoProfe* ContenedorLProfe::getPpioProfe() { return ppioProfe; }

void ContenedorLProfe::setPpioProfe(NodoProfe* nod) { ppioProfe = nod; }


void ContenedorLProfe::IngresaProfesor(Profesor* pro) {
	if (ppioProfe == NULL)
		ppioProfe = new NodoProfe(pro, ppioProfe);

	else {
		NodoProfe* pex;
		pex = ppioProfe;
		while (pex->getSiguienteProfe() != NULL)
			pex = pex->getSiguienteProfe();
		NodoProfe* nuevo = new NodoProfe(pro, NULL);
		pex->setSiguienteProfe(nuevo);
	}

}

string ContenedorLProfe::toString() {
	stringstream p;
	NodoProfe* pEx = ppioProfe;
	p << "------ LISTA DE PROFESORES -------" << endl;
	while (pEx != NULL) {
		p << pEx->getProfesor()->toString() << endl;
		pEx = pEx->getSiguienteProfe();
	}
	return p.str();
}

void ContenedorLProfe::EliminaProfesor(Profesor* pro) {
	NodoProfe* pex = ppioProfe;
	while (pex != NULL) {
		if (pex->getProfesor() == pro) {
			NodoProfe* borrador = pex->getSiguienteProfe();
			pex->setSiguienteProfe(borrador->getSiguienteProfe());
			delete borrador;
		}
		else
			pex = pex->getSiguienteProfe();
	}
}

void ContenedorLProfe::IngresaNUEVOProfe(string no, string ce, string te) {
	if (ppioProfe == NULL) {
		Profesor* profe = new Profesor(no, ce, te);
		ppioProfe = new NodoProfe(profe, ppioProfe);
	}

	else {
		NodoProfe* pex = ppioProfe;
		NodoProfe* aux = NULL;
		while (pex != NULL) {
			aux = pex;
			pex = pex->getSiguienteProfe();
		}
		Profesor* profe = new Profesor(no, ce, te);
		NodoProfe* nuevo = new NodoProfe(profe, NULL);
		aux->setSiguienteProfe(nuevo);
	}
}

void ContenedorLProfe::EliminaProfePorCedula(string cedu) {
	//Preguntar si ppioProfe esta viendo algo diferente de NULL
	if (ppioProfe != NULL) {
		NodoProfe* aux_borrar = ppioProfe;
		NodoProfe* anterior = NULL;

		//Ahora se necesita recorrer la lista...
		while ((aux_borrar != NULL) && (aux_borrar->getProfesor()->getCedula() != cedu)) {
			anterior = aux_borrar;
			aux_borrar = aux_borrar->getSiguienteProfe();
		}

		//Caso I: No se encontró un profesor con dicha cédula...
		if (aux_borrar == NULL)
			cout << "Profesor no encontrado" << endl;

		//Caso II: El primer profesor de la lista tiene dicha cédula...
		else if (anterior == NULL) {
			ppioProfe = ppioProfe->getSiguienteProfe();
			delete aux_borrar;
		}

		//Caso III: El profesor se encuentra en alguna otra posicion de la lista...
		else {
			anterior->setSiguienteProfe(aux_borrar->getSiguienteProfe());
			delete aux_borrar;
		}
	}
}

string ContenedorLProfe::muestraUnProfePorCedula(string ce) {
	stringstream s;
	NodoProfe* pex = ppioProfe;
	while (pex != NULL) {
		if (pex->getProfesor()->getCedula() != ce) {
			pex = pex->getSiguienteProfe();
		}
		else {
			s << pex->getProfesor()->toString();
			return s.str();
		}
	}
	s << "El profesor no esta registrado" << endl;
	return s.str();
}


void ContenedorLProfe::saveAll(ofstream& file) {
	NodoProfe* pex = ppioProfe;
	while (pex != NULL) {
		pex->getProfesor()->save(file);
		pex = pex->getSiguienteProfe();
	}
}

void ContenedorLProfe::readAll(ifstream& file) {
	//Objeto fantasma y puntero...
	Profesor prof;
	Profesor* ptrProf;

	//Limpiando la lista...
	NodoProfe *temp, *anterior;
	temp = ppioProfe;
	while (temp != NULL) {
		anterior = temp;
		temp = temp->getSiguienteProfe();
		delete anterior;
	}

	prof.read(file);			// Lectura previa... importante
	while (!file.eof()) {
		ptrProf = new Profesor(prof.getNombre(), prof.getCedula(), prof.getTelefono());
		IngresaProfesor(ptrProf);
		prof.read(file);
	}

}

