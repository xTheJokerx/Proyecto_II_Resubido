#include"Matricula.h"

Matricula::Matricula() {
	estudiante = NULL;
	horario = NULL;
	grupo = NULL;
}

Matricula::Matricula(Estudiante* estudiante,Horario* horario,Grupo* grupo) {
	this->estudiante = estudiante;
	this->horario = horario;
	this->grupo = grupo;
}

Matricula::~Matricula() {
	delete estudiante;
	delete horario;
	delete grupo;
}

Estudiante* Matricula::getEstudiante() { return estudiante; }

Horario* Matricula::getHorario() { return horario; }

Grupo* Matricula::getGrupo() { return grupo; }

void Matricula::setEstudiante(Estudiante* estudiante) { this->estudiante = estudiante; }

void Matricula::setHorario(Horario* horario) { this->horario = horario; }

void Matricula::setGrupo(Grupo* grupo) { this->grupo = grupo; }

string Matricula::toString() {
	stringstream s;
	if (estudiante != NULL)
		s << getEstudiante()->toString() << endl;
	else
		s << "Persona no matriculada " << endl;
	
	if (horario != NULL)
		s << getHorario()->toString() << endl;
	else
		s << "Horario no establecido" << endl;
	
	if (grupo != NULL)
		s << grupo->toString() << endl;
	else
		s << "Grupo aun no matriculado" << endl;
	return s.str();
}

void Matricula::save(ofstream& archivo) {//duda aqui 
	archivo << getEstudiante()->getNombre() << endl
		<< getEstudiante()->getCedula() << endl
		<< getEstudiante()->getTelefono() << endl
		<< getHorario()->getFecha()->getDia() << endl
		<< getHorario()->getTiempo()->getHora() << endl
		<< getHorario()->getTiempo()->getMinuto() << endl
		<< getGrupo()->getNRC() << endl
		<< getGrupo()->getCupo() << endl
		<< getGrupo()->getAula() << endl
		<< getGrupo()->getProfesor()->getNombre() << endl
		<< getGrupo()->getProfesor()->getCedula() << endl
		<< getGrupo()->getProfesor()->getTelefono() << endl
		<< getGrupo()->getHorario()->getFecha()->getDia() << endl
		<< getGrupo()->getHorario()->getTiempo()->getHora() << endl
		<< getGrupo()->getHorario()->getTiempo()->getMinuto() << endl;
}

void Matricula::read(ifstream& archivo) { //duda aqui igual 
	archivo >> getEstudiante()->getNombre()
		>> getEstudiante()->getCedula()
		>> getEstudiante()->getTelefono() 
		>> getHorario()->getFecha()->getDia()
		//>> getHorario()->getTiempo()->getHora()
		//>> getHorario()->getTiempo()->getMinuto()
		>> getGrupo()->getNRC()
		//>> getGrupo()->getCupo()
		>> getGrupo()->getAula()
		>> getGrupo()->getProfesor()->getNombre()
		>> getGrupo()->getProfesor()->getCedula()
		>> getGrupo()->getProfesor()->getTelefono()
		>> getGrupo()->getHorario()->getFecha()->getDia()
		//>> getGrupo()->getHorario()->getTiempo()->getHora()
		//>> getGrupo()->getHorario()->getTiempo()->getMinuto()
		;
}