#include"NodoEstudiante.h"

NodoEstudiante::NodoEstudiante() {
	ptrEstu = NULL;
	ptrNodoEstu = NULL;
}

NodoEstudiante::NodoEstudiante(Estudiante* es, NodoEstudiante*nodEs) {
	ptrEstu = es;
	ptrNodoEstu = nodEs;
}

NodoEstudiante::~NodoEstudiante() {
	delete ptrEstu; //Duda...
}

Estudiante* NodoEstudiante::getEstudiante() { return ptrEstu; }

NodoEstudiante* NodoEstudiante::getSiguienteEstudiante() { return ptrNodoEstu; }

void NodoEstudiante::setEstudiante(Estudiante* es) { ptrEstu = es; }

void NodoEstudiante::setSiguienteEstudiante(NodoEstudiante* no) { ptrNodoEstu = no; }