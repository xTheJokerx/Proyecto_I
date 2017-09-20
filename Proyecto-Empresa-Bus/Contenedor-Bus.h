#pragma once
#include "Bus.h"
#define tamano 8

class ContenedorBus {
private:
	Bus *conteneBus[tamano];
	int cantidad;
public:

	ContenedorBus();
	~ContenedorBus();
	bool hayCampo();
	void llenarConte(string, string,string,string,float);
	void llenaConte2(string, string);
	string toString();
	Bus* dameDisponible();

	void actualizaEstadoDisponibilidad(string,bool, int);
	void asignaEstado(string, int);

};