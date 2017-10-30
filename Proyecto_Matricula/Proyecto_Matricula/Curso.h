#pragma once
#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

class Curso {
private:
	string nombreCurso;
	string codigo;

public:
	Curso();
	Curso(string, string);
	~Curso();

	string getNombreCurso();
	string getCodigo();

	void setNombreCurso(string);
	void setCodigo(string);

	void save(ofstream&);
	void read(ifstream&);

	string toString();
};