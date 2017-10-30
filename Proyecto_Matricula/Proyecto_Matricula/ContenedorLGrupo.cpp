#include"ContenedorLGrupo.h"

ContenedorLGrupo::ContenedorLGrupo() {
	ppioGrupo = NULL;
}

ContenedorLGrupo::~ContenedorLGrupo() {
	NodoGrupo *temp, *anterior;
	temp = ppioGrupo;
	while (temp != NULL)
	{
		anterior = temp;
		temp = temp->getSiguienteGrupo();
		delete anterior;
	}
}

NodoGrupo* ContenedorLGrupo::getPpioGrupo() { return ppioGrupo; }

void ContenedorLGrupo::setPpioGrupo(NodoGrupo* nod) { ppioGrupo = nod; }


void ContenedorLGrupo::IngresaGrupo(Grupo* gru) {

	if (ppioGrupo == NULL)
		ppioGrupo = new NodoGrupo(gru, NULL);

	else {
		NodoGrupo* pex;
		pex = ppioGrupo;
		while (pex->getSiguienteGrupo() != NULL)
			pex = pex->getSiguienteGrupo();
		NodoGrupo* nuevo = new NodoGrupo(gru, NULL);
		pex->setSiguienteGrupo(nuevo);
	}

}

void ContenedorLGrupo::IngresaGrupoConDatos(string nrc, int cupo, string aula, Profesor* pro,Horario* horario,Curso* curso) {
	if (ppioGrupo == NULL) {
		Grupo* gru = new Grupo(nrc, cupo, aula, pro, horario,curso);
		ppioGrupo = new NodoGrupo(gru, ppioGrupo);
	}

	else {
		NodoGrupo* pex = ppioGrupo;
		NodoGrupo* aux = NULL;
		while (pex != NULL) {
			aux = pex;
			pex = pex->getSiguienteGrupo();
		}
		Grupo* gru = new Grupo(nrc, cupo, aula, pro, horario,curso);
		NodoGrupo* nuevo = new NodoGrupo(gru, NULL);
		aux->setSiguienteGrupo(nuevo);
	}
}


string ContenedorLGrupo::toString() {
	stringstream p;
	NodoGrupo* pEx = ppioGrupo;
	p << "------ LISTA DE GRUPOS -------" << endl;
	while (pEx != NULL) {
		p << pEx->getGrupo()->toString() << endl;
		pEx = pEx->getSiguienteGrupo();
	}
	return p.str();
}

string ContenedorLGrupo::muestraGrupoConNRC(string nrc) {
	stringstream s;
	NodoGrupo* pex = ppioGrupo;
	while (pex != NULL) {
		if (pex->getGrupo()->getNRC() != nrc) {
			pex = pex->getSiguienteGrupo();
		}
		else {
			s << pex->getGrupo()->toString();
		}
	}
	s << "El estudiante no esta registrado" << endl;
	return s.str();
}

void ContenedorLGrupo::eliminaGrupoConNRC(string nrc) {
	//Preguntar si ppioGrupo esta viendo algo diferente de NULL
	if (ppioGrupo != NULL) {
		NodoGrupo* aux_borrar = ppioGrupo;
		NodoGrupo* anterior = NULL;

		//Ahora se necesita recorrer la lista...
		while ((aux_borrar != NULL) && (aux_borrar->getGrupo()->getNRC() != nrc)) {
			anterior = aux_borrar;
			aux_borrar = aux_borrar->getSiguienteGrupo();
		}

		//Caso I: No se encontró un estudiante con dicha cédula...
		if (aux_borrar == NULL)
			cout << "Curso no encontrado" << endl;

		//Caso II: El primer estudiante de la lista tiene dicha cédula...
		else if (anterior == NULL) {
			ppioGrupo = ppioGrupo->getSiguienteGrupo();
			delete aux_borrar;
		}

		//Caso III: El estudiante se encuentra en alguna otra posicion de la lista...
		else {
			anterior->setSiguienteGrupo(aux_borrar->getSiguienteGrupo());
			delete aux_borrar;
		}
	}

}

void ContenedorLGrupo::saveAll(ofstream& file) {
	NodoGrupo* pex = ppioGrupo;
	while (pex != NULL) {
		pex->getGrupo()->save(file);
		pex = pex->getSiguienteGrupo();
	}
}

void ContenedorLGrupo::readAll(ifstream& file) {
	//Se crea un objeto fantasma y puntero...
	Grupo gr;
	Grupo* ptrGrupo;

	//Se limpia la lista...
	NodoGrupo *temp, *anterior;
	temp = ppioGrupo;
	while (temp != NULL) {
		anterior = temp;
		temp = temp->getSiguienteGrupo();
		delete anterior;
	}

	gr.read(file);			// Lectura previa... importante
	while (!file.eof()) {
		ptrGrupo = new Grupo(gr.getNRC(), gr.getCupo(), gr.getAula(), gr.getProfesor(), gr.getHorario(),gr.getCurso());
		IngresaGrupo(ptrGrupo);
		gr.read(file);
	}

}
