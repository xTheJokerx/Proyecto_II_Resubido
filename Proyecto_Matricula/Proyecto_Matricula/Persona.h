#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
using namespace std;

class Persona {
protected:
	string nombre;
	string cedula;
	string telefono;

public:
	Persona();
	Persona(string, string, string);
	~Persona();
	string getNombre();
	string getCedula();
	string getTelefono();
	void setNombre(string);
	void setCedula(string);
	void setTelefono(string);
	virtual string toString() = 0;
	virtual void save(ofstream&) = 0;
	virtual void read(ifstream&) = 0;
};
