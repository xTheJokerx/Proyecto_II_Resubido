#include"NodoGrupo.h"

NodoGrupo::NodoGrupo() {
	ptrGrupo = NULL;
	ptrNodoGrupo = NULL;
}

NodoGrupo::NodoGrupo(Grupo* gru, NodoGrupo* nod) {
	ptrGrupo = gru;
	ptrNodoGrupo = nod;
}

NodoGrupo::~NodoGrupo() {}


void NodoGrupo::setGrupo(Grupo* gru) { ptrGrupo = gru; }

void NodoGrupo::setSiguienteGrupo(NodoGrupo* nod) { ptrNodoGrupo = nod; }


Grupo* NodoGrupo::getGrupo() { return ptrGrupo; }

NodoGrupo* NodoGrupo::getSiguienteGrupo() { return ptrNodoGrupo; }
