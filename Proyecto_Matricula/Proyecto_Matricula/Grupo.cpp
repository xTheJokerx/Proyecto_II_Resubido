#include "Grupo.h"

Grupo::Grupo() {
	NRC = "";
	cupo = 0;
	aula = "";
	profesor = NULL;
	horario = NULL;
	curso = NULL;
}

Grupo::Grupo(string NRC, int cupo, string aula) {
	this->NRC = NRC;
	this->cupo = cupo;
	this->aula = aula;
}

Grupo::Grupo(string NRC, int cupo, string aula, Profesor* profesor, Horario* horario, Curso* curso) {
	this->NRC = NRC;
	this->cupo = cupo;
	this->aula = aula;
	this->profesor = profesor;
	this->horario = horario;
	this->curso = curso;
}

Grupo::~Grupo() {
	delete profesor;
	delete horario;
	delete curso;
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
		<< getHorario()->getTiempo()->getHora() << endl
		<< getHorario()->getTiempo()->getMinuto() << endl;
}

void Grupo::read(ifstream& archivo) { //duda aqui igual 
	archivo >> NRC
		>> cupo
		>> aula
		>> getProfesor()->getNombre()
		>> getProfesor()->getCedula()
		>> getProfesor()->getTelefono()
		>> getHorario()->getFecha()->getDia()
		//>> getHorario()->getTiempo()->getHora()
		//>> getHorario()->getTiempo()->getMinuto()
		>> getCurso()->getNombreCurso()
		>> getCurso()->getCodigo();
}

string Grupo::toString() {
	stringstream s;
	s << "---DATOS DEL CURSO---" << endl;
	s << "NRC: " << getNRC() << endl;
	s << "Cupo: " << getCupo() << endl;
	s << "Aula: " << getAula() << endl;
	if (profesor != NULL)
		s << getProfesor()->toString() << endl;

	if (horario != NULL)
		s << getHorario()->toString() << endl;

	if (curso != NULL)
		s << getCurso()->toString() << endl;
	
	return s.str();
}