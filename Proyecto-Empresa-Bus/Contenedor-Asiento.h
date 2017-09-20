#pragma once
#include "Asiento.h"
#define filas 24
#define columnas 4

class ContenedorAsiento {
private:
	Asiento* matAsiento[filas][columnas];

public:
	ContenedorAsiento();
	~ContenedorAsiento();
	string cambiaNumeroALetra(int);
	string toString();
	void imprimeContenedor();
	bool hayDisponible();
	//string buscarPosDisponible();
};