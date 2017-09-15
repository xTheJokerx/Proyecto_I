#pragma once
#include "Tiempo.h"

class Ruta {
private:
	string origen;
	string destino;
	float monto;
public:
	Ruta();
	~Ruta();
	string getOrigen();
	string getDestino();
	float getMonto();
	void setOrigen(string);
	void setDestino(string);
	void setMonto(float);
	string toString();
};
