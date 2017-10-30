#include "Persona.h"

Persona::Persona() {
	nombre = "";
	cedula = "";
	telefono = "";
}

Persona::Persona(string nombre, string cedula, string telefono) {
	this->nombre = nombre;
	this->cedula = cedula;
	this->telefono = telefono;
}
Persona::~Persona() {}

string Persona::getNombre() { return nombre; }

string Persona::getCedula() { return cedula; }

string Persona::getTelefono() { return telefono; }

void Persona::setNombre(string nombre) { this->nombre = nombre; }

void Persona::setCedula(string cedula) { this->cedula = cedula; }

void Persona::setTelefono(string telefono) { this->telefono = telefono; }


