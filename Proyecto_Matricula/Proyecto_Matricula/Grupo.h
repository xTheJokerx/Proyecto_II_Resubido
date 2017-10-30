#pragma once
#include "Profesor.h"
#include"Horario.h"
#include"Curso.h"
using namespace std;

class Grupo {
private:
	string NRC;
	int cupo;
	string aula;
	Profesor* profesor;
	Horario* horario;
	Curso* curso;

public:
	Grupo();
	Grupo(string, int, string);
	Grupo(string, int, string, Profesor*, Horario*);
	~Grupo();

	string getNRC();
	int getCupo();
	string getAula();
	Profesor* getProfesor();
	Horario* getHorario();
	Curso* getCurso();

	void setNRC(string);
	void setCupo(int);
	void setAula(string);
	void setProfesor(Profesor&);
	void setHorario(Horario&);
	void setCurso(Curso&);

	void save(ofstream&);
	void read(ifstream&);

	string toString();
};