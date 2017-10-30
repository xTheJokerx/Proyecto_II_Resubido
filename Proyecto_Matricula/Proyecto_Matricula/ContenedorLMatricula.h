#pragma once
#include"NodoMatricula.h"

class ContenedorLMatricula {
private:
	NodoMatricula* ppioMatri;
public:
	ContenedorLMatricula();
	~ContenedorLMatricula();

	NodoMatricula* getPpioMatri();
	void setPpioMatri(NodoMatricula*);

	string toString();
};