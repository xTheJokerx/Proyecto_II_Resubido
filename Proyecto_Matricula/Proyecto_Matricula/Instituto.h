#pragma once
#include "ContenedorLEstudiante.h"
#include "ContenedorLProfe.h"
#include "ContenedorLGrupo.h"
#include "ContenedorLCurso.h"
#include "ContenedorLMatricula.h"

class Instituto {
private:
	ContenedorLEstudiante* contEstudiantes;
	ContenedorLProfe* contProfes;
	ContenedorLGrupo* contGrupos;
	ContenedorLCurso* contCursos;
	ContenedorLMatricula* contMatriculas;

public:
	Instituto();
	~Instituto();
	ContenedorLEstudiante* getContEstudiantes();
	ContenedorLProfe* getContProfes();
	ContenedorLGrupo* getContGrupos();
	ContenedorLCurso* getContCursos();
	ContenedorLMatricula* getContMatriculas();
	void setContEstudiantes(ContenedorLEstudiante*);
	void setContProfes(ContenedorLProfe*);
	void setContGrupos(ContenedorLGrupo*);
	void setContCursos(ContenedorLCurso*);
	void setContMatriculas(ContenedorLMatricula*);

};