#pragma once
#include "Ruta.h"
#include "Tiempo.h"
#include "Contenedor-Bus.h"

class Carrera {
private:
	Tiempo* ptrTiempo;
	ContenedorBus* ptrContBus;
	Ruta* ptrRuta;

public:
	Carrera(ContenedorBus&);
	Carrera(Tiempo&, Ruta&, ContenedorBus&);
	~Carrera();
	Tiempo* getTiempo();
	ContenedorBus* getContBus();
	Ruta* getRuta();
	void setTiempo(Tiempo&);
	void setRuta(Ruta&);

	string toString();
	void asignarRuta();
	void crearViaje(int, int, string, string,float);
};
