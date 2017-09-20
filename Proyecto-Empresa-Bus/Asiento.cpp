#include "Asiento.h"

Asiento::Asiento() {
	letra = "Z";
	numero = 0;
	disponible = true;
}

Asiento::Asiento(string le, int num) {
	letra = le;
	numero = num;
	disponible = true;
}


Asiento::~Asiento() { cout << "me mori" << endl; }

string Asiento::getLetra() { return letra; }

int Asiento::getNumero() { return numero; }

bool Asiento::getDisponible() { return disponible; }

void Asiento::setLetra(string l) { letra = l; }

void Asiento::setNumero(int n) { numero = n; }

void Asiento::setDisponible(bool no) { disponible = no; }

string Asiento::toString() {
	stringstream s;
	if (getDisponible())
		s << getLetra() << getNumero() << ": (L)";
	else
		s << getLetra() << getNumero() << ": (O)";
	return s.str();

}