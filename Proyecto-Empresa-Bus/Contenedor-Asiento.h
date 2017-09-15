#pragma once
#include "Asiento.h"
#include "Tiempo.h"

class ContenedorAsiento {
private:
	Asiento **mat;
	const int fila = 4;
	const int colu = 24;
public:
	ContenedorAsiento();
	~ContenedorAsiento();
	void imprimeContenedor();


};