#pragma once
#include"Profesor.h"

class NodoProfe {
private:
	Profesor* ptrpro;
	NodoProfe* ptrNodoProfe;
public:
	NodoProfe();
	NodoProfe(Profesor*, NodoProfe*);
	~NodoProfe();

	Persona* getProfesor();
	NodoProfe* getSiguienteProfe();

	void setProfesor(Profesor*);
	void setSiguienteProfe(NodoProfe*);
};