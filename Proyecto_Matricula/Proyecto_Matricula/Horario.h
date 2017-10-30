#pragma once
#include"Tiempo.h"
#include"Fecha.h"

class Horario {
private:
	Fecha* ptrFecha;
	Tiempo* ptrTiempo;
public:
	Horario();
	Horario(Fecha*, Tiempo*);
	~Horario();
	Fecha* getFecha();
	Tiempo* getTiempo();
	void setFecha(Fecha*);
	void setTiempo(Tiempo*);

	string toString();
};