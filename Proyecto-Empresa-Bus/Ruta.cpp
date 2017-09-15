#include "Ruta.h"

Ruta::Ruta() {
	origen = "";
	destino = "";
}

Ruta::~Ruta() {}

string Ruta::getOrigen() { return origen; }
string Ruta::getDestino() { return destino; }
float Ruta::getMonto() { return monto; }
void Ruta::setOrigen(string ori) { origen = ori; }
void Ruta::setDestino(string des) { destino = des; }
void Ruta::setMonto(float mon) { monto = mon; }
string Ruta::toString() {
	stringstream s;

	s << "Origen: " << origen << endl;
	s << "Destino: " << destino << endl;
	s << "Monto: " << monto << endl;
	return s.str();

}