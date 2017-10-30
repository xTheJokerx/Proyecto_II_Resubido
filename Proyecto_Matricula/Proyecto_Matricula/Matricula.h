#pragma once
#include"Estudiante.h"
#include "Horario.h"
#include "Grupo.h"

class Matricula {
private:
	Estudiante* estudiante;
	Horario* horario;
	Grupo* grupo;

public:
	Matricula();
	Matricula(Estudiante*,Horario*,Grupo*);
	~Matricula();

	Estudiante* getEstudiante();
	Horario* getHorario();
	Grupo* getGrupo();
	void setEstudiante(Estudiante*);
	void setHorario(Horario*);
	void setGrupo(Grupo*);

	string toString();

	void save(ofstream&);
	void read(ifstream&);

};