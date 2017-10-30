#pragma once
#include "Matricula.h"

class NodoMatricula {
private:
	Matricula* ptrMatricula;
	NodoMatricula* ptrNodoMatricula;
public:
	NodoMatricula();
	NodoMatricula(Matricula*, NodoMatricula*);
	~NodoMatricula();

	Matricula* getMatricula();
	NodoMatricula* getSiguienteMatricula();

	void setMatricula(Matricula*);
	void setSiguienteMatricula(NodoMatricula*);
};
