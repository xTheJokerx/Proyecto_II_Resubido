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

void ContenedorLGrupo::IngresaGrupo(string nrc, int cupo, string aula, Profesor* pro) {
	Horario* horari = new Horario;
	if (ppioGrupo == NULL) {
		Grupo* gru = new Grupo(nrc, cupo, aula, pro, horari);
		ppioGrupo = new NodoGrupo(gru, ppioGrupo);
	}

	else {
		NodoGrupo* pex = ppioGrupo;
		NodoGrupo* aux = NULL;
		while (pex != NULL) {
			aux = pex;
			pex = pex->getSiguienteGrupo();
		}
		Grupo* gru = new Grupo(nrc, cupo, aula, pro, horari);
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

void ContenedorLGrupo::EliminaGrupo(Grupo* pro) {
	NodoGrupo* pex = ppioGrupo;
	while (pex != NULL) {
		if (pex->getGrupo() == pro) {
			NodoGrupo* borrador = pex->getSiguienteGrupo();
			pex->setSiguienteGrupo(borrador->getSiguienteGrupo());
			delete borrador;
		}
		else
			pex = pex->getSiguienteGrupo();
	}

}

void ContenedorLGrupo::EliminaGrupo(string nrc) { //modificar los eliminadores 

	NodoGrupo* pex = ppioGrupo;
	while (pex != NULL) {
		if (pex->getGrupo()->getNRC() == nrc) {
			NodoGrupo* borrador = pex->getSiguienteGrupo();
			pex->setSiguienteGrupo(borrador->getSiguienteGrupo());
			borrador->~NodoGrupo();
		}
		else
			pex = pex->getSiguienteGrupo();
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
		ptrGrupo = new Grupo(gr.getNRC(), gr.getCupo(), gr.getAula(), gr.getProfesor(), gr.getHorario());
		IngresaGrupo(ptrGrupo);
		gr.read(file);
	}

}
