#include "Contenedor-Asiento.h"

ContenedorAsiento::ContenedorAsiento() {
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++)
			matAsiento[i][j] = new Asiento(cambiaNumeroALetra(i), j + 1);
	}
}

ContenedorAsiento::~ContenedorAsiento() {
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++)
			delete matAsiento[i][j];
	}
	cout << "contenedor destruido" << endl;
}

string ContenedorAsiento::cambiaNumeroALetra(int num) {
	switch (num) {
	case 0: return "A"; break;
	case 1: return "B"; break;
	case 2: return "C"; break;
	case 3: return "D"; break;
	case 4: return "E"; break;
	case 5: return "F"; break;
	case 6: return "G"; break;
	case 7: return "H"; break;
	case 8: return "I"; break;
	case 9: return "J"; break;
	case 10: return "K"; break;
	case 11: return "L"; break;
	case 12: return "M"; break;
	case 13: return "N"; break;
	case 14: return "O"; break;
	case 15: return "P"; break;
	case 16: return "Q"; break;
	case 17: return "R"; break;
	case 18: return "S"; break;
	case 19: return "T"; break;
	case 20: return "U"; break;		
	case 21: return "V"; break;
	case 22: return "W"; break;
	case 23: return "X"; break;
	}
}

void ContenedorAsiento::imprimeContenedor() {
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++)
			cout << matAsiento[i][j]->toString() << " ";
		cout << endl;
	}
}

string ContenedorAsiento::toString() {
	stringstream p;
	p << "--------- Informacion de los asientos ---------" << endl;
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++)
			p << matAsiento[i][j]->toString() << " ";
		p << endl;
	}
	return p.str();

}


bool ContenedorAsiento::hayDisponible() {
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			if (matAsiento[i][j]->getDisponible() != false)
				return true;
		}
	}

}

/*string ContenedorAsiento::buscarPosDisponible() {
stringstream s;
for (int i = 0; i <filas; i++) {
for (int j = 0; j <columnas; j++)
//if (matAsiento[i][j]->getDisponible() == true)
{
s << "La posicion " << matAsiento[i][j]->getNumero()
<< "-" << matAsiento[i][j]->getLetra() << " esta disponible " << endl;
}
}
return s.str();
}*/
