#include "Controladora.h"
#include "Instituto.h"

int main() {
	/* -------Esto se descomenta hasta el puro final ------------
	Controladora* control = new Controladora;
	control->Control1();
	delete control;*/
	
	int opcion;
	string no, ce, te;

	Instituto* instituto = new Instituto;

	do {
		system("cls");
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
		switch (opcion) {
		case 1:
			system("cls");
			cout << "-------- BIENVENIDO AL MENU DE ESTUDIANTES --------" << endl;
			cout << "---------------------------------------------------" << endl;
			cout << "1) Ingresar un estudiante. " << endl;
			cout << "2) Mostrar un estudiante.  " << endl;
			cout << "3) Eliminar un estudiante.  " << endl;
			cout << "4) Mostrar a todos los estudiantes. " << endl;
			cout << "Digite el numero de la opcion que necesita: ";
			cin >> opcion;
			switch (opcion) {
			case 1:
				cout << "Nombre: " << endl;
				cin >> no;
				cout << "Cedula :" << endl;
				cin >> ce;
				cout << "Telefono: " << endl;
				cin >> te;
				instituto->getContEstudiantes()->IngresaNUEVOEstudiante(no, ce, te);
				system("pause");
				break;
			case 2:
				cout << "Ingrese el numero de cedula del estudiante: " << endl;
				cin >> ce;
				cout << instituto->getContEstudiantes()->muestraUnEstudiantePorCedula(ce);
				cout << "Accion completada con exito" << endl;
				system("pause");
				break;
			case 3:
				cout << "Ingrese el numero de cedula del estudiante" << endl;
				cin >> ce;
				instituto->getContEstudiantes()->EliminaEstudiantePorCedula(ce);
				cout << "Accion completada con exito" << endl;
				system("pause");
				break;
			case 4:
				cout << instituto->getContEstudiantes()->toString() << endl;
				system("pause");
				break;
			default:
				cout << "Por favor, digite un numero del 1 al 4." << endl;
				system("pause");
				break;
			}
			break;
		case 2:
			system("cls");
			cout << "-------- BIENVENIDO AL MENU DE PROFESORES --------" << endl;
			cout << "--------------------------------------------------" << endl;
			cout << "1) Ingresar un profesor. " << endl;
			cout << "2) Mostrar un profesor.  " << endl;
			cout << "3) Eliminar un profesor.  " << endl;
			cout << "4) Mostrar a todos los profesores. " << endl;
			cout << "Digite el numero de la opcion que necesita: ";
			cin >> opcion;
			switch (opcion) {
			case 1:
				cout << "Nombre: " << endl;
				cin >> no;
				cout << "Cedula :" << endl;
				cin >> ce;
				cout << "Telefono: " << endl;
				cin >> te;
				instituto->getContProfes()->IngresaNUEVOProfe(no, ce, te);
				system("pause");
				break;
			case 2:
				cout << "Ingrese el numero de cedula del estudiante: " << endl;
				cin >> ce;
				cout << instituto->getContProfes()->muestraUnProfePorCedula(ce);
				cout << "Accion completada con exito" << endl;
				system("pause");
				break;
			case 3:
				cout << "Ingrese el numero de cedula del estudiante" << endl;
				cin >> ce;
				instituto->getContProfes()->EliminaProfePorCedula(ce);
				cout << "Accion completada con exito" << endl;
				system("pause");
				break;
			case 4:
				cout << instituto->getContProfes()->toString()<< endl;
				system("pause");
				break;
			default:
				cout << "Por favor, digite un numero del 1 al 3." << endl;
				system("pause");
				break;
			}
			break;
		case 3:
			system("cls");
			cout << "-------- BIENVENIDO AL MENU DE CURSOS --------" << endl;
			cout << "----------------------------------------------" << endl;
			cout << "1) Ingresar un curso. " << endl;
			cout << "2) Mostrar un curso.  " << endl;
			cout << "3) Eliminar un curso.  " << endl;
			cout << "Digite el numero de la opcion que necesita: ";
			cin >> opcion;
			switch (opcion) {
			case 1:
				cout << "Ha ingresado la opcion de ingresar curso." << endl;
				system("pause");
				break;
			case 2:
				cout << "Ha ingresado la opcion de mostrar curso." << endl;
				system("pause");
				break;
			case 3:
				cout << "Ha ingresado la opcion de eliminar curso." << endl;
				system("pause");
				break;
			default:
				cout << "Por favor, digite un numero del 1 al 3." << endl;
				system("pause");
				break;
			}
			break;
		case 4:
			system("cls");
			cout << "-------- BIENVENIDO AL MENU DE GRUPOS --------" << endl;
			cout << "----------------------------------------------" << endl;
			cout << "1) Ingresar un grupo. " << endl;
			cout << "2) Mostrar un grupo.  " << endl;
			cout << "3) Eliminar un grupo.  " << endl;
			cout << "Digite el numero de la opcion que necesita: ";
			cin >> opcion;
			switch (opcion) {
			case 1:
				cout << "Ha ingresado la opcion de ingresar grupo." << endl;
				system("pause");
				break;
			case 2:
				cout << "Ha ingresado la opcion de mostrar grupo." << endl;
				system("pause");
				break;
			case 3:
				cout << "Ha ingresado la opcion de eliminar grupo." << endl;
				system("pause");
				break;
			default:
				cout << "Por favor, digite un numero del 1 al 3." << endl;
				system("pause");
				break;
			}
			break;
		case 5:
			system("cls");
			cout << "-------- BIENVENIDO AL MENU DE MATRICULA --------" << endl;
			cout << "-------------------------------------------------" << endl;
			cout << "1) Matricular un estudiante en un grupo.         " << endl;
			cout << "2) Retirar un curso matriculado.                 " << endl;
			cout << "3) Realizar cambios en un curso matriculado.     " << endl;
			cout << "Digite el numero de la opcion que necesita: ";
			cin >> opcion;
			switch (opcion) {
			case 1:
				cout << "Ha ingresado la opcion de matricular un estudiante en un grupo." << endl;
				system("pause");
				break;
			case 2:
				cout << "Ha ingresado la opcion de retirar un curso matriculado." << endl;
				system("pause");
				break;
			case 3:
				cout << "Ha ingresado la opcion de realizar cambios en un curso matriculado." << endl;
				system("pause");
				break;
			default:
				cout << "Por favor, digite un numero del 1 al 3." << endl;
				system("pause");
				break;
			}
			break;
		case 6:
			system("cls");
			cout << "-------- BIENVENIDO AL MENU DE LISTAS --------" << endl;
			cout << "----------------------------------------------" << endl;
			cout << "1) Mostrar el listado de estudiantes dentro del sistema.       " << endl;
			cout << "2) Mostrar el listado de cursos matriculados por estudiante.   " << endl;
			cout << "3) Mostrar el listado de estudiantes matriculados en un grupo. " << endl;
			cout << "4) Mostrar el listado de grupos abiertos por curso.            " << endl;
			cout << "5) Mostrar el listado de cursos asignados a un profesor.       " << endl;
			cout << "Digite el numero de la opcion que necesita: ";
			cin >> opcion;
			switch (opcion) {
			case 1:
				cout << "Ha ingresado la opcion de ostrar el listado de estudiantes dentro del sistema." << endl;
				system("pause");
				break;
			case 2:
				cout << "Ha ingresado la opcion de mostrar el listado de cursos matriculados por estudiante." << endl;
				system("pause");
				break;
			case 3:
				cout << "Ha ingresado la opcion de mostrar el listado de estudiantes matriculados en un grupo." << endl;
				system("pause");
				break;
			case 4:
				cout << "Ha ingresado la opcion de mostrar el listado de grupos abiertos por curso." << endl;
				system("pause");
				break;
			case 5:
				cout << "Ha ingresado la opcion de mostrar el listado de cursos asignados a un profesor." << endl;
				system("pause");
				break;
			default:
				cout << "Por favor, digite un numero del 1 al 5." << endl;
				system("pause");
				break;
			}
			break;
		case 7:
			cout << "---------- MUCHAS GRACIAS ----------" << endl;
			break;
		default:
			cout << "Por favor, digite un numero del 1 al 7." << endl;
			break;
		}

	} while (opcion != 7);


	delete instituto;
	
	system("pause");
	return 0;
}