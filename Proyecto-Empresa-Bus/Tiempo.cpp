#include "Tiempo.h"

Tiempo::Tiempo() {
	hora = 0;
	minuto = 0;
}

Tiempo::Tiempo(int h, int m) {
	hora = h;
	minuto = m;
}

Tiempo::~Tiempo() { cout << "Hora borrada" << endl; }

int Tiempo::getHora() { return hora; }

int Tiempo::getMinuto() { return minuto; }

void Tiempo::setHora(int h) { hora = h; }

void Tiempo::setMinuto(int m) { minuto = m; }

string Tiempo::toString() {
	stringstream p;
	p << "Hora: " << getHora() << endl;
	p << "Hora: " << getMinuto() << endl << endl;
	return p.str();
}