#include "Profesor.h"

Profesor::Profesor() {
	nombre = "";
	cedula = "";
	telefono = "";
}

Profesor::Profesor(string nombre, string cedula, string telefono) {
	this->nombre = nombre;
	this->cedula = cedula;
	this->telefono = telefono;
}

Profesor::~Profesor() {}

void Profesor::save(ofstream& archivo) {
	archivo << getNombre() << endl << getCedula() << endl << getTelefono() << endl;
}

void Profesor::read(ifstream& archivo) {
	archivo >> getNombre() >> getCedula() >> getTelefono();
}

string Profesor::toString() {
	stringstream p;
	p << "Nombre: " << getNombre() << endl;
	p << "Cedula: " << getCedula() << endl;
	p << "Telefono: " << getTelefono() << endl;
	return p.str();
}