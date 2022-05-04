#include <iostream>
#include "Estudiante.h"
using namespace std;

int main(){
	string carnet, nombres, apellidos, direccion, email, fecha_n;
	int idEstud=0, telefono=0, genero=0,op=0;
	char con;
	Estudiante est = Estudiante(idEstud, carnet, nombres, apellidos, direccion, telefono, genero, email, fecha_n);

	do {
		system("cls");
		cout << "Ingrese el numero de la accion que desea realiza: \n";
		cout << "1. Insertar datos\n2. Ver los datos\n3. Actualizar datos\n4. Eliminar datos\n";
		cin >> op;
		switch (op) {
		case 1: {
			cin.ignore();
			cout << "Ingrese el carnet: ";
			getline(cin, carnet);
			cout << "Ingrese los nombres: ";
			getline(cin, nombres);
			cout << "Ingrese los apellidos: ";
			getline(cin, apellidos);
			cout << "Ingrese la direccion: ";
			getline(cin, direccion);
			cout << "Ingrese el telefono: ";
			cin >> telefono;
			cout << "Ingrese el genero: ";
			cin >> genero;
			cout << "Ingrese el correo electronico / email: ";
			cin >> email;
			cout << "Ingrese la fecha de nacimiento: ";
			cin >> fecha_n;
			Estudiante e = Estudiante(idEstud, carnet, nombres, apellidos, direccion, telefono, genero, email, fecha_n);
			e.insertar();
			break;
		}
		case 2: {
			est.mostrar(); break;
		}
		case 3: {
			est.mostrar();
			cout << "\nIngrese el id del estudiante que desea actualizar: ";
			cin >> idEstud;
			cin.ignore();
			cout << "Ingrese el carnet: ";
			getline(cin, carnet);
			cout << "Ingrese los nombres: ";
			getline(cin, nombres);
			cout << "Ingrese los apellidos: ";
			getline(cin, apellidos);
			cout << "Ingrese la direccion: ";
			getline(cin, direccion);
			cout << "Ingrese el telefono: ";
			cin >> telefono;
			cout << "Ingrese el genero: ";
			cin >> genero;
			cout << "Ingrese el correo electronico / email: ";
			cin >> email;
			cout << "Ingrese la fecha de nacimiento: ";
			cin >> fecha_n;
			Estudiante e = Estudiante(idEstud, carnet, nombres, apellidos, direccion, telefono, genero, email, fecha_n);
			e.actualizar();
			break;
		}
		case 4: {
			est.mostrar();
			cout << "\nIngrese el id del estudiante que desea eliminar: ";
			cin >> idEstud;
			Estudiante e = Estudiante(idEstud, carnet, nombres, apellidos, direccion, telefono, genero, email, fecha_n);
			e.eliminar();
			break;
		}
		}
		cout << "\n\nDesea realizar otra consulta? (s/n)\n";
		cin >> con;
	} while (con == 's' || con == 'S');

	
	system("pause");
}

