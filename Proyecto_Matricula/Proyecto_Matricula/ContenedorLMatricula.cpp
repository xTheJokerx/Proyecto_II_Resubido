#include"ContenedorLMatricula.h"

ContenedorLMatricula::ContenedorLMatricula() {
	ppioMatri = NULL;
}

ContenedorLMatricula::~ContenedorLMatricula() {
	NodoMatricula *temp, *anterior;
	temp = ppioMatri;
	while (temp != NULL)
	{
		anterior = temp;
		temp = temp->getSiguienteMatricula();
		delete anterior;
	}
}

NodoMatricula* ContenedorLMatricula::getPpioMatricula(){ return ppioMatri; }

void ContenedorLMatricula::setPpioMatricula(NodoMatricula* nod) { ppioMatri = nod; }

void ContenedorLMatricula::IngresaMatricula(Matricula* matri){
	if (ppioMatri == NULL)
		ppioMatri = new NodoMatricula(matri, NULL);

	else {
		NodoMatricula* pex;
		pex = ppioMatri;
		while (pex->getSiguienteMatricula() != NULL)
			pex = pex->getSiguienteMatricula();
		NodoMatricula* nuevo = new NodoMatricula(matri, NULL);
		pex->setSiguienteMatricula(nuevo);
	}
}

void ContenedorLMatricula::IngresaMatriculaConDatos(Estudiante* estudiante,Horario* horario,Grupo* grupo){
	if (ppioMatri == NULL) {
		Matricula* matri = new Matricula(estudiante, horario, grupo);
		ppioMatri = new NodoMatricula(matri, ppioMatri);
	}

	else {
		NodoMatricula* pex = ppioMatri;
		NodoMatricula* aux = NULL;
		while (pex != NULL) {
			aux = pex;
			pex = pex->getSiguienteMatricula();
		}
		Matricula* matri = new Matricula(estudiante, horario, grupo);
		NodoMatricula* nuevo = new NodoMatricula(matri, NULL);
		aux->setSiguienteMatricula(nuevo);
	}
}

string ContenedorLMatricula::toString(){
	stringstream p;
	NodoMatricula* pEx = ppioMatri;
	p << "------ LISTA DE MATRICULAS -------" << endl;
	while (pEx != NULL) {
		p << pEx->getMatricula()->toString() << endl;
		pEx = pEx->getSiguienteMatricula();
	}
	return p.str();
}

string ContenedorLMatricula::muestraMatriculaConCedula(string ced){
	stringstream s;
	NodoMatricula* pex = ppioMatri;
	while (pex != NULL) {
		if (pex->getMatricula()->getEstudiante()->getCedula() != ced) {
			pex = pex->getSiguienteMatricula();
		}
		else {
			s << pex->getMatricula()->toString();
		}
	}
	return s.str();
}

void ContenedorLMatricula::eliminaMatriculaConCedula(string ced){
	//Preguntar si ppioGrupo esta viendo algo diferente de NULL
	if (ppioMatri != NULL) {
		NodoMatricula* aux_borrar = ppioMatri;
		NodoMatricula* anterior = NULL;

		//Ahora se necesita recorrer la lista...
		while ((aux_borrar != NULL) && (aux_borrar->getMatricula()->getEstudiante()->getCedula() != ced)) {
			anterior = aux_borrar;
			aux_borrar = aux_borrar->getSiguienteMatricula();
		}

		//Caso I: No se encontró un estudiante con dicha cédula...
		if (aux_borrar == NULL)
			cout << "Curso no encontrado" << endl;

		//Caso II: El primer estudiante de la lista tiene dicha cédula...
		else if (anterior == NULL) {
			ppioMatri = ppioMatri->getSiguienteMatricula();
			delete aux_borrar;
		}

		//Caso III: El estudiante se encuentra en alguna otra posicion de la lista...
		else {
			anterior->setSiguienteMatricula(aux_borrar->getSiguienteMatricula());
			delete aux_borrar;
		}
	}
}

void ContenedorLMatricula::saveAll(ofstream& file) {
	NodoMatricula* pex = ppioMatri;
	while (pex != NULL) {
		pex->getMatricula()->save(file);
		pex = pex->getSiguienteMatricula();
	}
}

void ContenedorLMatricula::readAll(ifstream& file) {
	//Se crea un objeto fantasma y puntero...
	Matricula matri;
	Matricula* ptrMatri;

	//Se limpia la lista...
	NodoMatricula *temp, *anterior;
	temp = ppioMatri;
	while (temp != NULL) {
		anterior = temp;
		temp = temp->getSiguienteMatricula();
		delete anterior;
	}

	matri.read(file);			// Lectura previa... importante
	while (!file.eof()) {
		ptrMatri = new Matricula(matri.getEstudiante(), matri.getHorario(), matri.getGrupo());
		IngresaMatricula(ptrMatri);
		matri.read(file);
	}

}