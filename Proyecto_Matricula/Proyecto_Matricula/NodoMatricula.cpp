#include"NodoMatricula.h"


NodoMatricula::NodoMatricula() {
	ptrMatricula = NULL;
	ptrNodoMatricula = NULL;
}

NodoMatricula::NodoMatricula(Matricula* ma, NodoMatricula* nod) {
	ptrMatricula = ma;
	ptrNodoMatricula = nod;
}

NodoMatricula::~NodoMatricula() {}

Matricula* NodoMatricula::getMatricula() { return ptrMatricula; }

NodoMatricula* NodoMatricula::getSiguienteMatricula() { return ptrNodoMatricula; }

void NodoMatricula::setMatricula(Matricula* ma) { ptrMatricula = ma; }

void NodoMatricula::setSiguienteMatricula(NodoMatricula* nod) { ptrNodoMatricula = nod; }