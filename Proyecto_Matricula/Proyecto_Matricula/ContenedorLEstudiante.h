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
	void IngresaEstudianteConDatos(string no, string ce, string te);
	string toString();
	string muestraUnEstudiantePorCedula(string ce);
	void EliminaEstudiantePorCedula(string cedu);

	void saveAll(ofstream&);
	void readAll(ifstream&);

};