#include "Curso.h"

Curso::Curso() {
	nombreCurso = "";
	codigo = "";
}

Curso::Curso(string nombreCurso, string codigo) {
	this->nombreCurso = nombreCurso;
	this->codigo = codigo;
}

Curso::~Curso() {}

string Curso::getNombreCurso() { return nombreCurso; }

string Curso::getCodigo() { return codigo; }

void Curso::setNombreCurso(string nombreCurso) { this->nombreCurso = nombreCurso; }

void Curso::setCodigo(string codigo) { this->codigo = codigo; }


void Curso::save(ofstream& archivo) {
	archivo << getNombreCurso() << endl << getCodigo() << endl;
}

void Curso::read(ifstream& archivo) {
	archivo >> nombreCurso >> getCodigo();
}

string Curso::toString() {
	stringstream p;
	p << "Nombre del curso: " << getNombreCurso() << endl;
	p << "Codigo del curso: " << getCodigo() << endl;
	return p.str();
}