#pragma once
#include "Contenedor-Asiento.h"
#include "Ruta.h"
#define filas 24
#define columnas 4

class Bus {
private:
	string identificador;
	string placa;
	bool disponibilidad;
	string estado;
	Ruta* ptrRuta;
	Asiento* ContenedorAsiento[filas][columnas];


public:
	Bus(string, string);
	Bus(string, string,Ruta&);
	~Bus();

	string getIdentificador();
	string getPlaca();
	bool getDisponibilidad();
	string getEstado();

	void setEstado(string);
	void setDisponibilidad(bool);
	bool consultaUnidadesEnTerminal();
	// void cambiarMiEstado();
	// La unidad cambia de estado a estado en terminal(A o B)

	Bus* dameDisponible();

	string toString();

	//-----------------------------------------------------
	// Metodos del contenedor de asientos
	ContenedorAsiento();
	~ContenedorAsiento();
	string cambiaNumeroALetra(int);
	string toString();
	void imprimeContenedor();
	bool hayDisponible();




};
