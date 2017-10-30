#include"NodoProfe.h"

NodoProfe::NodoProfe() {
	ptrpro = NULL;
	ptrNodoProfe = NULL;
}

NodoProfe::NodoProfe(Profesor* profe, NodoProfe* nod) {
	ptrpro = profe;
	ptrNodoProfe = nod;
}

NodoProfe::~NodoProfe() {}

Persona* NodoProfe::getProfesor() { return ptrpro; }

NodoProfe* NodoProfe::getSiguienteProfe() { return ptrNodoProfe; }

void NodoProfe::setProfesor(Profesor* profe) { ptrpro = profe; }

void NodoProfe::setSiguienteProfe(NodoProfe* nod) { ptrNodoProfe = nod; }


