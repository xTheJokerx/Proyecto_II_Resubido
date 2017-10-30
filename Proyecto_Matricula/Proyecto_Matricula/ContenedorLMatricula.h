#pragma once
#include"NodoMatricula.h"

class ContenedorLMatricula {
private:
	NodoMatricula* ppioMatri;
public:
	ContenedorLMatricula();
	~ContenedorLMatricula();
	NodoMatricula* getPpioMatricula();
	void setPpioMatricula(NodoMatricula*);

	void IngresaMatricula(Matricula*);
	void IngresaMatriculaConDatos(Estudiante*,Horario*,Grupo*);
	string toString();
	string muestraMatriculaConCedula(string);
	void eliminaMatriculaConCedula(string);

	void saveAll(ofstream&);
	void readAll(ifstream&);
};