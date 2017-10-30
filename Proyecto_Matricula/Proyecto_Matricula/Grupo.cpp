#include "Grupo.h"

Grupo::Grupo() {
	NRC = "";
	cupo = 0;
	aula = "";
	profesor = NULL;
	horario = NULL;
}

Grupo::Grupo(string NRC, int cupo, string aula) {
	this->NRC = NRC;
	this->cupo = cupo;
	this->aula = aula;
}

Grupo::Grupo(string NRC, int cupo, string aula, Profesor* prof, Horario* horar) {
	this->NRC = NRC;
	this->cupo = cupo;
	this->aula = aula;
	profesor = prof;
	horario = horar;
}

Grupo::~Grupo() {
	delete profesor;
	delete horario;
}

string Grupo::getNRC() { return NRC; }

int Grupo::getCupo() { return cupo; }

string Grupo::getAula() { return aula; }

Profesor* Grupo::getProfesor() { return profesor; }

Horario* Grupo::getHorario() { return horario; }

Curso* Grupo::getCurso() { return curso; }


void Grupo::setNRC(string NRC) { this->NRC = NRC; }

void Grupo::setCupo(int cupo) { this->cupo = cupo; }

void Grupo::setAula(string aula) { this->aula = aula; }

void Grupo::setProfesor(Profesor& prof) { profesor = (Profesor*)&prof; }

void Grupo::setHorario(Horario& horar) { horario = (Horario*)&horar; }

void Grupo::setCurso(Curso& cur) { curso = (Curso*)&cur; }

void Grupo::save(ofstream& archivo) {//duda aqui 
	archivo << getNRC() << endl
		<< getCupo() << endl
		<< getAula() << endl
		<< getProfesor()->getNombre() << endl
		<< getProfesor()->getCedula() << endl
		<< getProfesor()->getTelefono() << endl
		<< getHorario()->getFecha()->getDia() << endl
		<< getHorario()->getTiempo()->toString() << endl;
}

void Grupo::read(ifstream& archivo) { //duda aqui igual 
	archivo >> NRC
		>> cupo
		>> aula
		>> getProfesor()->getNombre()
		>> getProfesor()->getCedula()
		>> getProfesor()->getTelefono()
		>> getHorario()->toString();
}

string Grupo::toString() {
	stringstream s;
	s << "---DATOS DEL CURSO---" << endl;
	s << "NRC: " << getNRC() << endl;
	s << "Cupo: " << getCupo() << endl;
	s << "Aula: " << getAula() << endl;
	if (profesor != NULL)
		s << "Profesor: " << getProfesor()->toString() << endl;
	else
		s << "Profesor por anunciar" << endl;
	if (horario != NULL)
		s << "Horario: " << getHorario()->toString() << endl;
	else
		s << "Horario aun no definido" << endl;
	return s.str();
}