#pragma once
#include"NodoProfe.h"

class ContenedorLProfe {
private:
	NodoProfe* ppioProfe;
public:
	ContenedorLProfe();
	~ContenedorLProfe();
	NodoProfe* getPpioProfe();
	void setPpioProfe(NodoProfe*);

	void IngresaProfesor(Profesor*);
	void IngresaProfesorConDatos(string no, string ce, string te);
	string toString();
	string muestraUnProfePorCedula(string ce);
	void EliminaProfePorCedula(string cedu);

	void saveAll(ofstream&);
	void readAll(ifstream&);

};