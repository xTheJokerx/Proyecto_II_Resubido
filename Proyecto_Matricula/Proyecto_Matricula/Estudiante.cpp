#include "Estudiante.h"

Estudiante::Estudiante() {
	nombre = "Nombre_de_prueba";
	cedula = "Cedula_de_prueba";
	telefono = "Telefono_de_prueba";

}
Estudiante::Estudiante(string nombre, string cedula, string telefono) {
	this->nombre = nombre;
	this->cedula = cedula;
	this->telefono = telefono;
}

Estudiante::~Estudiante() {}

void Estudiante::save(ofstream& archivo) {
	archivo << getNombre() << endl << getCedula() << endl << getTelefono() << endl;
}

void Estudiante::read(ifstream& archivo) {
	archivo >> getNombre() >> getCedula() >> getTelefono();
}

string Estudiante::toString() {
	stringstream p;
	p << "Nombre: " << getNombre() << endl;
	p << "Cedula: " << getCedula() << endl;
	p << "Telefono: " << getTelefono() << endl;
	return p.str();
}