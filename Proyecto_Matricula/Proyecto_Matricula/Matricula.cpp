#include"Matricula.h"

Matricula::Matricula() {
	fecha = new Fecha;
	hora = new Tiempo;
	estu = NULL;
}

Matricula::Matricula(Estudiante* es) {
	fecha = new Fecha;
	hora = new Tiempo;
	estu = (Estudiante*)&es;
}

Matricula::~Matricula() {}


Fecha* Matricula::getFecha() { return fecha; }
Tiempo* Matricula::getTiempo() { return hora; }
Estudiante* Matricula::getEstudiante() { return estu; }

void Matricula::setFecha(Fecha* fe) { fecha = fe; }
void Matricula::setTiempo(Tiempo* ti) { hora = ti; }
void Matricula::setEstudiante(Estudiante* es) { estu = es; }

string Matricula::toString() {
	stringstream s;
	if (estu != NULL) {//no se si tengo que llamar a los tostrings del tiempo y fecha
		s << "Persona matriculada: " << getEstudiante() << endl;
		s << "Hora de la matricula: " << getTiempo() << endl;
		s << "Fecha de la matricula: " << getFecha() << endl;
	}
	else
		s << "Persona no matriculada " << endl;
	return s.str();
}