#pragma once
#include"NodoEstudiante.h"

class ContenedorLEstudiante {
private:
	NodoEstudiante* ppioEstu;
public:
	ContenedorLEstudiante();
	~ContenedorLEstudiante();
	NodoEstudiante* getPpioEstudiante();
	void setPpioEstudiante(NodoEstudiante*);

	void IngresaEstudiante(Estudiante*);
	string toString();
	void EliminaEstudiante(Estudiante*);
	
	void IngresaNUEVOEstudiante(string no, string ce, string te);
	string muestraUnEstudiantePorCedula(string ce);
	void EliminaEstudiantePorCedula(string cedu);

	void saveAll(ofstream&);
	void readAll(ifstream&);

};