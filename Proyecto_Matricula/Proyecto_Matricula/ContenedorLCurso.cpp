#include "ContenedorLCurso.h"

ContenedorLCurso::ContenedorLCurso(){
	ppioCurso = NULL;
}

ContenedorLCurso::~ContenedorLCurso(){
	NodoCurso *temp, *anterior;
	temp = ppioCurso;
	while (temp != NULL)
	{
		anterior = temp;
		temp = temp->getSiguienteCurso();
		delete anterior;
	}
}

NodoCurso* ContenedorLCurso::getPpioCurso() { return ppioCurso; }

void ContenedorLCurso::setPpioCurso(NodoCurso* ppioCurso) { this->ppioCurso = ppioCurso; }

void ContenedorLCurso::IngresaCurso(Curso* curso){
	if (ppioCurso == NULL)
		ppioCurso = new NodoCurso(curso, ppioCurso);

	else {
		NodoCurso* pex;
		pex = ppioCurso;
		while (pex->getSiguienteCurso() != NULL)
			pex = pex->getSiguienteCurso();
		NodoCurso* nuevo = new NodoCurso(curso, NULL);
		pex->setSiguienteCurso(nuevo);
	}
}

void ContenedorLCurso::IngresaCursoConDatos(string name, string code) {
	if (ppioCurso == NULL) {
		Curso* curso = new Curso(name, code);
		ppioCurso = new NodoCurso(curso, ppioCurso);
	}

	else {
		NodoCurso* pex = ppioCurso;
		NodoCurso* aux = NULL;
		while (pex != NULL) {
			aux = pex;
			pex = pex->getSiguienteCurso();
		}
		Curso* curso = new Curso(name, code);
		NodoCurso* nuevo = new NodoCurso(curso, NULL);
		aux->setSiguienteCurso(nuevo);
	}

}

string ContenedorLCurso::toString(){
	stringstream p;
	NodoCurso* pEx = ppioCurso;
	p << "------ LISTA DE CURSOS -------" << endl;
	while (pEx != NULL) {
		p << pEx->getCurso()->toString() << endl;
		pEx = pEx->getSiguienteCurso();
	}
	return p.str();
}

string ContenedorLCurso::muestraUnCursoPorCodigo(string code){
	stringstream s;
	NodoCurso* pex = ppioCurso;
	while (pex != NULL) {
		if (pex->getCurso()->getCodigo() != code) {
			pex = pex->getSiguienteCurso();
		}
		else {
			s << pex->getCurso()->toString();
		}
	}
	s << "El estudiante no esta registrado" << endl;
	return s.str();
}

void ContenedorLCurso::EliminaCursoPorCodigo(string code){
	//Preguntar si ppioEstu esta viendo algo diferente de NULL
	if (ppioCurso != NULL) {
		NodoCurso* aux_borrar = ppioCurso;
		NodoCurso* anterior = NULL;

		//Ahora se necesita recorrer la lista...
		while ((aux_borrar != NULL) && (aux_borrar->getCurso()->getCodigo() != code)) {
			anterior = aux_borrar;
			aux_borrar = aux_borrar->getSiguienteCurso();
		}

		//Caso I: No se encontró un estudiante con dicha cédula...
		if (aux_borrar == NULL)
			cout << "Curso no encontrado" << endl;

		//Caso II: El primer estudiante de la lista tiene dicha cédula...
		else if (anterior == NULL) {
			ppioCurso = ppioCurso->getSiguienteCurso();
			delete aux_borrar;
		}

		//Caso III: El estudiante se encuentra en alguna otra posicion de la lista...
		else {
			anterior->setSiguienteCurso(aux_borrar->getSiguienteCurso());
			delete aux_borrar;
		}
	}

}

void ContenedorLCurso::saveAll(ofstream& archivo){
	NodoCurso* pex = ppioCurso;
	while (pex != NULL) {
		pex->getCurso()->save(archivo);
		pex = pex->getSiguienteCurso();
	}
}

void ContenedorLCurso::readAll(ifstream& archivo){
	//Se crea un objeto fantasma y puntero...
	Curso curso;
	Curso* ptrCurso;

	//Se limpia la lista...
	NodoCurso *temp, *anterior;
	temp = ppioCurso;
	while (temp != NULL) {
		anterior = temp;
		temp = temp->getSiguienteCurso();
		delete anterior;
	}

	curso.read(archivo);			// Lectura previa... importante
	while (!archivo.eof()) {
		ptrCurso = new Curso(curso.getNombreCurso(), curso.getCodigo());
		IngresaCurso(ptrCurso);
		curso.read(archivo);
	}
}