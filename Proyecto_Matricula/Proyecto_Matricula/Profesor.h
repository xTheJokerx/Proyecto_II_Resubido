#pragma once
#include "Persona.h"

class Profesor : public Persona {
public:
	Profesor();
	Profesor(string, string, string);
	~Profesor();
	void save(ofstream&);
	void read(ifstream&);
	string toString();
};
