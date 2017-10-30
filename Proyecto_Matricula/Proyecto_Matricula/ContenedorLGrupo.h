#pragma once
#include"NodoGrupo.h"

class ContenedorLGrupo {
private:
	NodoGrupo* ppioGrupo;

public:
	ContenedorLGrupo();
	~ContenedorLGrupo();
	NodoGrupo* getPpioGrupo();
	void setPpioGrupo(NodoGrupo*);


	void IngresaGrupo(Grupo*);
	string toString();
	void EliminaGrupo(Grupo*);
	void IngresaGrupo(string, int, string, Profesor*);
	void EliminaGrupo(string nrc);

	void saveAll(ofstream&);
	void readAll(ifstream&);
};