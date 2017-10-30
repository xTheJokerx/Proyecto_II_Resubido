#include"ContenedorLMatricula.h"

ContenedorLMatricula::ContenedorLMatricula() {
	ppioMatri = NULL;
}

ContenedorLMatricula::~ContenedorLMatricula() {
	NodoMatricula* pex = ppioMatri;
	while (pex != NULL) {

	}
}

NodoMatricula*ContenedorLMatricula::getPpioMatri() { return ppioMatri; }
void ContenedorLMatricula::setPpioMatri(NodoMatricula* nod) { ppioMatri = nod; }

string ContenedorLMatricula::toString() { return "a"; }