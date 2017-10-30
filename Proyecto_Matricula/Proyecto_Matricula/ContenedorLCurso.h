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
	string toString();
	void EliminaCurso(Curso*);

	void IngresaNUEVOCurso(string, string);
	string muestraUnCursoPorCodigo(string);
	void EliminaCursoPorCodigo(string);

	void saveAll(ofstream&);
	void readAll(ifstream&);
};