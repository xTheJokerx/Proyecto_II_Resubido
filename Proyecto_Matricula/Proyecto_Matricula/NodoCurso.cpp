#include "NodoCurso.h"

NodoCurso::NodoCurso(){
	ptrCurso = NULL;
	ptrNodoCurso = NULL;
}

NodoCurso::NodoCurso(Curso* ptrCurso, NodoCurso*ptrNodoCurso){
	this->ptrCurso = ptrCurso;
	this->ptrNodoCurso = ptrNodoCurso;
}

NodoCurso::~NodoCurso(){}

Curso* NodoCurso::getCurso() { return ptrCurso; }

NodoCurso* NodoCurso::getSiguienteCurso() { return ptrNodoCurso; }

void NodoCurso::setCurso(Curso*ptrCurso) { this->ptrCurso = ptrCurso; }

void NodoCurso::setSiguienteCurso(NodoCurso*ptrNodoCurso) { this->ptrNodoCurso = ptrNodoCurso; }