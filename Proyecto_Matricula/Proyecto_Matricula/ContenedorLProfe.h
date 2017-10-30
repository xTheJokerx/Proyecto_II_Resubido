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
	//void MuestraProfesores();
	void EliminaProfesor(Profesor*);
	void IngresaNUEVOProfe(string no, string ce, string te);
	void EliminaProfePorCedula(string cedu);
	string muestraUnProfePorCedula(string ce);

	string toString();


	void saveAll(ofstream&);
	void readAll(ifstream&);

};