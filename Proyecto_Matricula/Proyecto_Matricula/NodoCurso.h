#pragma once
#include"Curso.h"

class NodoCurso {
private:
	Curso* ptrCurso;
	NodoCurso* ptrNodoCurso;
public:
	NodoCurso();
	NodoCurso(Curso*, NodoCurso*);
	~NodoCurso();

	Curso* getCurso();
	NodoCurso* getSiguienteCurso();

	void setCurso(Curso*);
	void setSiguienteCurso(NodoCurso*);
};