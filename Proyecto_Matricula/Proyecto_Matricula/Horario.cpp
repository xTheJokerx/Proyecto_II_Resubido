#include "Horario.h"

Horario::Horario() {
	ptrFecha = new Fecha;
	ptrTiempo = new Tiempo;
}

Horario::Horario(Fecha* fe, Tiempo* ti) {
	ptrFecha = fe;
	ptrTiempo = ti;
}

Horario::~Horario() {}

Fecha* Horario::getFecha() { return ptrFecha; }
Tiempo* Horario::getTiempo() { return ptrTiempo; }

void Horario::setFecha(Fecha* f) { ptrFecha = f; }
void Horario::setTiempo(Tiempo* t) { ptrTiempo = t; }

string Horario::toString() {
	stringstream s;
	s << "El Horario es: " << endl;
	s << ptrFecha->toString() << endl;
	s << ptrTiempo->toString() << endl;
	return s.str();
}