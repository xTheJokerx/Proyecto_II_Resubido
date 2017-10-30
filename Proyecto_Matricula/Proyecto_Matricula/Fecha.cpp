#include"Fecha.h"

Fecha::Fecha() { dia = ""; }

Fecha::Fecha(string d) { dia = d; }

Fecha::~Fecha() {}

void Fecha::setDia(string d) { dia = d; }

string Fecha::getDia() { return dia; }

string Fecha::toString() {
	stringstream s;
	s << getDia() << endl;
	return s.str();
}