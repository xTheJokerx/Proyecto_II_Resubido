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
	void IngresaGrupoConDatos(string, int, string, Profesor*,Horario*,Curso*);
	string toString();
	string muestraGrupoConNRC(string);
	void eliminaGrupoConNRC(string);

	void saveAll(ofstream&);
	void readAll(ifstream&);
};