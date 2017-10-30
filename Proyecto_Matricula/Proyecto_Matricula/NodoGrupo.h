#pragma once
#include"Grupo.h"

class NodoGrupo {
private:
	Grupo* ptrGrupo;
	NodoGrupo* ptrNodoGrupo;
public:
	NodoGrupo();
	NodoGrupo(Grupo*, NodoGrupo*);
	~NodoGrupo();

	Grupo* getGrupo();
	NodoGrupo* getSiguienteGrupo();

	void setGrupo(Grupo*);
	void setSiguienteGrupo(NodoGrupo*);
};