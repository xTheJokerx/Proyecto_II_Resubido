#pragma once
#include"NodoCurso.h"

class ContenedorLCurso {
private:
	NodoCurso* ppioCurso;

public:
	ContenedorLCurso();
	~ContenedorLCurso();
	NodoCurso* getPpioCurso();
	void setPpioCurso(NodoCurso*);

	void IngresaCurso(Curso*);
	void IngresaCursoConDatos(string, string);
	string toString();
	string muestraUnCursoPorCodigo(string);
	void EliminaCursoPorCodigo(string);

	void saveAll(ofstream&);
	void readAll(ifstream&);
};