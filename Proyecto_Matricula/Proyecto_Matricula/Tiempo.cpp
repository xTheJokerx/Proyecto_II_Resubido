#include"Tiempo.h"

Tiempo::Tiempo() {
	hora = 0;
	minuto = 0;
}

Tiempo::Tiempo(int ho, int mi) {
	hora = ho;
	minuto = mi;
}

Tiempo::~Tiempo() {}

int Tiempo::getHora() { return hora; }

int Tiempo::getMinuto() { return minuto; }

void Tiempo::setHora(int ho) { hora = ho; }

void Tiempo::setMinuto(int mi) { minuto = mi; }

string Tiempo::toString() {
	stringstream s;
	s << getHora() << ":" << getMinuto() << endl;
	return s.str();
}