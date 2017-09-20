#include "Asiento.h"
#include "Contenedor-Asiento.h"
#include "Contenedor-Bus.h"
#include "Carrera.h"

int main() {
	
//Esto es el codigo para inicializar el contenedor de buses
//--------------------------------------------------------------------
	/*string ide, pla;
	ContenedorBus *conBus = new ContenedorBus;

	for (int i = 0; i < 8; i++) {
		cout << "digite el identificador: ";
		cin >> ide;
		cout << "placa: ";
		cin >> pla;
		conBus->llenarConte(ide, pla);
	}

	cout << conBus->toString();

	delete conBus;*/
//--------------------------------------------------------------------	
	
	string ide, pla, ori, desti;
	float monto;
	int ru;
	int i = 0,actu;
	ContenedorBus *conBus = new ContenedorBus;
	Carrera *carre = new Carrera(*conBus);

	//for (int i = 0; i < 8; i++) 
	do {
		cout << "Datos del nuevo bus:" << endl;
		cout << "digite el identificador: ";
		cin >> ide;
		cout << "placa: ";
		cin >> pla;
		cout << endl;
		cout << "tiene una ruta?" << endl << "1- si" << endl << "2- no ";
		cin >> ru;
		if (ru == 1) {
			cout << "digite el origen de la ruta: ";
			cin >> ori;
			cout << "digite el destino de la ruta: ";
			cin >> desti;
			cout << "monto: ";
			cin >> monto;
			conBus->llenarConte(ide, pla, ori, desti, monto);//aqui me llegara la ruta tambien 
		}
		else
			if (ru == 2)
				conBus->llenaConte2(ide, pla);
		i++;
	} while (i < 8);


	//------------------------------------------------------------------------------
	//Metodo que actualiza tanto el estado como la disponibilidad de una unidad x.
	conBus->actualizaEstadoDisponibilidad("M", false, 5);
	cout<<conBus->toString();

	//------------------------------------------------------------------------------

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	//------------------------------------------------------------------------------
	//Metodo que asigna un estado de una unidad x.
	//conBus->actualizaEstadoDisponibilidad("M", 5);
	//cout << conBus->toString();

	//------------------------------------------------------------------------------

	
	//cout << carre->toString();

	//ocupo asociar una ruta 

	carre->~Carrera();





//Bus* b = new Bus("123456","ABC123");
//cout << b->toString();

//cont->llenarContenedor();


/*ContenedorAsiento *con = new ContenedorAsiento();
con->llenarContenedor();
cout << endl;
cout << con->toString() << endl;
cout << "hay disponible: " << con->hayDisponible() << endl;
cout << "cuales son los disponibles: " << endl;
//cout << con->buscarPosDisponible() << endl;
con->~ContenedorAsiento();*/

system("pause");
return 0;
}