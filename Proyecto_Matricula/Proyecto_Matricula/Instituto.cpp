#include "Instituto.h"

Instituto::Instituto(){
	contEstudiantes = new ContenedorLEstudiante;
	contProfes = new ContenedorLProfe;
	contGrupos = new ContenedorLGrupo;
	contCursos = new ContenedorLCurso;
	contMatriculas = new ContenedorLMatricula;

}

Instituto::~Instituto(){
	delete contEstudiantes;
	delete contProfes;
	delete contGrupos;
	delete contCursos;
	delete contMatriculas;
}

ContenedorLEstudiante* Instituto::getContEstudiantes() { return contEstudiantes; }

ContenedorLProfe* Instituto::getContProfes() { return contProfes; }

ContenedorLGrupo* Instituto::getContGrupos() { return contGrupos; }

ContenedorLCurso* Instituto::getContCursos() { return contCursos; }

ContenedorLMatricula* Instituto::getContMatriculas() { return contMatriculas; }

void Instituto::setContEstudiantes(ContenedorLEstudiante* contEstudiantes) { this->contEstudiantes = contEstudiantes; }

void Instituto::setContProfes(ContenedorLProfe* contProfes) { this->contProfes = contProfes; }

void Instituto::setContGrupos(ContenedorLGrupo* contGrupos) { this->contGrupos = contGrupos; }

void Instituto::setContCursos(ContenedorLCurso* contCursos) { this->contCursos = contCursos; }

void Instituto::setContMatriculas(ContenedorLMatricula* contMatriculas) { this->contMatriculas = contMatriculas; }