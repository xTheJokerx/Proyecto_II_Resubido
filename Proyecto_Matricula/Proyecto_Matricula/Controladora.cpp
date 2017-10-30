#include "Controladora.h"

Controladora::Controladora() {
	est = new Estudiante;
	prof = new Profesor;
}

Controladora::~Controladora() {
	delete est;
	delete prof;
}

void Controladora::Control1() {
	int opcion;
	do {
		opcion = Interfaz::MenuPrincipal();
		Controladora::Control2(opcion);
		system("pause");
		system("cls");
	} while (opcion != 7);

}

void Controladora::Control2(int opcion) {
	switch (opcion) {
	case 1:
		system("cls"); Controladora::Control3();
		break;
	case 2:
		system("cls"); Controladora::Control4();
		break;
	case 3:
		system("cls"); Controladora::Control5();
		break;
	case 4:
		system("cls"); Controladora::Control6();
		break;
	case 5:
		system("cls"); Controladora::Control7();
		break;
	case 6:
		system("cls"); Controladora::Control8();
		break;
	case 7:
		Interfaz::VentanaDespedida();
		break;
	default:
		Interfaz::VentanaDefaultPrincipal();
		break;
	}
}

void Controladora::Control3() {
	int op;
	op = Interfaz::MenuEstudiantes();
	Controladora::Control_3_A(op);
}

void Controladora::Control_3_A(int valor) {
	switch (valor) {
	case 1:
		Interfaz::IngresaEstudiante();
		break;
	case 2:
		Interfaz::MuestraEstudiantes();
		break;
	case 3:
		Interfaz::EliminaEstudiante();
		break;
	default:
		Interfaz::VentanaDefaultSecundaria1();
		break;
	}
}

void Controladora::Control4() {
	int op;
	op = Interfaz::MenuProfesores();
	Controladora::Control_4_A(op);
}

void Controladora::Control_4_A(int valor) {
	switch (valor) {
	case 1:
		Interfaz::IngresaProfesor();
		break;
	case 2:
		Interfaz::MuestraProfesores();
		break;
	case 3:
		Interfaz::EliminaProfesor();
		break;
	default:
		Interfaz::VentanaDefaultSecundaria1();
		break;
	}
}

void Controladora::Control5() {
	int op;
	op = Interfaz::MenuCursos();
	Controladora::Control_5_A(op);
}

void Controladora::Control_5_A(int valor) {
	switch (valor) {
	case 1:
		Interfaz::IngresaCurso();
		break;
	case 2:
		Interfaz::MuestraCursos();
		break;
	case 3:
		Interfaz::EliminaCurso();
		break;
	default:
		Interfaz::VentanaDefaultSecundaria1();
		break;
	}
}

void Controladora::Control6() {
	int op;
	op = Interfaz::MenuGrupos();
	Controladora::Control_6_A(op);
}

void Controladora::Control_6_A(int valor) {
	switch (valor) {
	case 1:
		Interfaz::IngresaGrupo();
		break;
	case 2:
		Interfaz::MuestraGrupos();
		break;
	case 3:
		Interfaz::EliminaGrupo();
		break;
	default:
		Interfaz::VentanaDefaultSecundaria1();
		break;
	}
}

void Controladora::Control7() {
	int op;
	op = Interfaz::MenuMatricula();
	Controladora::Control_7_A(op);
}

void Controladora::Control_7_A(int valor) {
	switch (valor) {
	case 1:
		Interfaz::MatricularEstudianteEnGrupo();
		break;
	case 2:
		Interfaz::RetirarCursoMatriculado();
		break;
	case 3:
		Interfaz::CambiosCursoMatriculado();
		break;
	default:
		Interfaz::VentanaDefaultSecundaria1();
		break;
	}
}

void Controladora::Control8() {
	int op;
	op = Interfaz::MenuListas();
	Controladora::Control_8_A(op);
}

void Controladora::Control_8_A(int valor) {
	switch (valor) {
	case 1:
		Interfaz::ListadoEstudiantesEnSistema();
		break;
	case 2:
		Interfaz::ListadoCursosMatriculadosPorEstudiante();
		break;
	case 3:
		Interfaz::ListadoEstudiantesMatriculadosPorGrupo();
		break;
	case 4:
		Interfaz::ListadoGruposAbiertosPorCurso();
		break;
	case 5:
		Interfaz::ListadoCursosAsignadosPorProfesor();
		break;
	default:
		Interfaz::VentanaDefaultSecundaria2();
		break;
	}
}