#include"Interfaz.h"


int Interfaz::MenuPrincipal() {
	int opcion;
	cout << "---------- BIENVENIDO AL MENU PRINCIPAL ----------" << endl;
	cout << "--------------------------------------------------" << endl;
	cout << "1) Menu de estudiantes.  " << endl;
	cout << "2) Menu de profesores.   " << endl;
	cout << "3) Menu de de cursos.    " << endl;
	cout << "4) Menu de grupos.       " << endl;
	cout << "5) Menu de matricula.    " << endl;
	cout << "6) Menu de de listas.    " << endl;
	cout << "7) Salir del programa.   " << endl;
	cout << "Digite el numero de la opcion que necesita: ";
	cin >> opcion;
	return opcion;
}

int Interfaz::MenuEstudiantes() {
	int opcion;
	cout << "-------- BIENVENIDO AL MENU DE ESTUDIANTES --------" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "1) Ingresar un estudiante. " << endl;
	cout << "2) Mostrar un estudiante.  " << endl;
	cout << "3) Eliminar un estudiante.  " << endl;
	cout << "Digite el numero de la opcion que necesita: ";
	cin >> opcion;
	return opcion;
}

void Interfaz::IngresaEstudiante() {
	cout << "Ha ingresado la opcion de ingresar estudiante." << endl;
}

void Interfaz::MuestraEstudiantes() {
	cout << "Ha ingresado la opcion de mostrar estudiante." << endl;
}

void Interfaz::EliminaEstudiante() {
	cout << "Ha ingresado la opcion de eliminar estudiante." << endl;
}

int Interfaz::MenuProfesores() {
	int opcion;
	cout << "-------- BIENVENIDO AL MENU DE PROFESORES --------" << endl;
	cout << "--------------------------------------------------" << endl;
	cout << "1) Ingresar un profesor. " << endl;
	cout << "2) Mostrar un profesor.  " << endl;
	cout << "3) Eliminar un profesor.  " << endl;
	cout << "Digite el numero de la opcion que necesita: ";
	cin >> opcion;
	return opcion;
}

void Interfaz::IngresaProfesor() {
	cout << "Ha ingresado la opcion de ingresar profesor." << endl;
}

void Interfaz::MuestraProfesores() {
	cout << "Ha ingresado la opcion de mostrar profesor." << endl;
}

void Interfaz::EliminaProfesor() {
	cout << "Ha ingresado la opcion de eliminar profesor." << endl;
}

int Interfaz::MenuCursos() {
	int opcion;
	cout << "-------- BIENVENIDO AL MENU DE CURSOS --------" << endl;
	cout << "----------------------------------------------" << endl;
	cout << "1) Ingresar un curso. " << endl;
	cout << "2) Mostrar un curso.  " << endl;
	cout << "3) Eliminar un curso.  " << endl;
	cout << "Digite el numero de la opcion que necesita: ";
	cin >> opcion;
	return opcion;
}

void Interfaz::IngresaCurso() {
	cout << "Ha ingresado la opcion de ingresar curso." << endl;
}

void Interfaz::MuestraCursos() {
	cout << "Ha ingresado la opcion de mostrar curso." << endl;
}

void Interfaz::EliminaCurso() {
	cout << "Ha ingresado la opcion de eliminar curso." << endl;
}

int Interfaz::MenuGrupos() {
	int opcion;
	cout << "-------- BIENVENIDO AL MENU DE GRUPOS --------" << endl;
	cout << "----------------------------------------------" << endl;
	cout << "1) Ingresar un grupo. " << endl;
	cout << "2) Mostrar un grupo.  " << endl;
	cout << "3) Eliminar un grupo.  " << endl;
	cout << "Digite el numero de la opcion que necesita: ";
	cin >> opcion;
	return opcion;
}

void Interfaz::IngresaGrupo() {
	cout << "Ha ingresado la opcion de ingresar grupo." << endl;
}

void Interfaz::MuestraGrupos() {
	cout << "Ha ingresado la opcion de mostrar grupo." << endl;
}

void Interfaz::EliminaGrupo() {
	cout << "Ha ingresado la opcion de eliminar grupo." << endl;
}

int Interfaz::MenuMatricula() {
	int opcion;
	cout << "-------- BIENVENIDO AL MENU DE MATRICULA --------" << endl;
	cout << "-------------------------------------------------" << endl;
	cout << "1) Matricular un estudiante en un grupo.         " << endl;
	cout << "2) Retirar un curso matriculado.                 " << endl;
	cout << "3) Realizar cambios en un curso matriculado.     " << endl;
	cout << "Digite el numero de la opcion que necesita: ";
	cin >> opcion;
	return opcion;
}

void Interfaz::MatricularEstudianteEnGrupo() {
	cout << "Ha ingresado la opcion de matricular un estudiante en un grupo." << endl;
}

void Interfaz::RetirarCursoMatriculado() {
	cout << "Ha ingresado la opcion de retirar un curso matriculado." << endl;
}

void Interfaz::CambiosCursoMatriculado() {
	cout << "Ha ingresado la opcion de realizar cambios en un curso matriculado." << endl;
}

int Interfaz::MenuListas() {
	int opcion;
	cout << "-------- BIENVENIDO AL MENU DE LISTAS --------" << endl;
	cout << "----------------------------------------------" << endl;
	cout << "1) Mostrar el listado de estudiantes dentro del sistema.       " << endl;
	cout << "2) Mostrar el listado de cursos matriculados por estudiante.   " << endl;
	cout << "3) Mostrar el listado de estudiantes matriculados en un grupo. " << endl;
	cout << "4) Mostrar el listado de grupos abiertos por curso.            " << endl;
	cout << "5) Mostrar el listado de cursos asignados a un profesor.       " << endl;
	cout << "Digite el numero de la opcion que necesita: ";
	cin >> opcion;
	return opcion;
}

void Interfaz::ListadoEstudiantesEnSistema() {
	cout << "Ha ingresado la opcion de mostrar el listado de estudiantes dentro del sistema." << endl;
}

void Interfaz::ListadoCursosMatriculadosPorEstudiante() {
	cout << "Ha ingresado la opcion de mostrar el listado de cursos matriculados por estudiante." << endl;
}

void Interfaz::ListadoEstudiantesMatriculadosPorGrupo() {
	cout << "Ha ingresado la opcion de mostrar el listado de estudiantes matriculados en un grupo." << endl;
}

void Interfaz::ListadoGruposAbiertosPorCurso() {
	cout << "Ha ingresado la opcion de mostrar el listado de grupos abiertos por curso." << endl;
}

void Interfaz::ListadoCursosAsignadosPorProfesor() {
	cout << "Ha ingresado la opcion de mostrar el listado de cursos asignados a un profesor." << endl;
}

void Interfaz::VentanaDespedida() {
	cout << "---------- MUCHAS GRACIAS ----------" << endl;
}

void Interfaz::VentanaDefaultPrincipal() {
	cout << "Por favor, digite un numero del 1 al 7." << endl;
}
void Interfaz::VentanaDefaultSecundaria1() {
	cout << "Por favor, digite un numero del 1 al 3." << endl;
}

void Interfaz::VentanaDefaultSecundaria2() {
	cout << "Por favor, digite un numero del 1 al 5." << endl;
}
