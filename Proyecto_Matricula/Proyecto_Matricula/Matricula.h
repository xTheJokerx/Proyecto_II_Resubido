#pragma once
#include"Estudiante.h"
#include"Fecha.h"
#include"Tiempo.h"

class Matricula {
private:
	Fecha* fecha;
	Tiempo* hora;
	Estudiante* estu;
public:
	Matricula();
	Matricula(Estudiante*);
	~Matricula();

	Fecha* getFecha();
	Tiempo* getTiempo();
	Estudiante* getEstudiante();

	void setFecha(Fecha*);
	void setTiempo(Tiempo*);
	void setEstudiante(Estudiante*);

	string toString();

};