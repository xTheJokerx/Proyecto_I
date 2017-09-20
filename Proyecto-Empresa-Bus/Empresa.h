#pragma once
#include "Tiempo.h"
//#include "ContenedorTiquete.h"
//#include "ContenedorCarrera.h"
//#include "ContenedorBus.h"

class Empresa {
private:
	string nombreEmpresa;
	string numeroEmpresa;
	
	//ContenedorTiquete* contTiquete;	--> Falta hacerlo 
	//ContenedorCarrera* contCarrera;	--> Falta hacerlo
	//ContenedorBus* contBus;			-->Falta hacerlo

public:
	Empresa(string, string);
	~Empresa();
	string getNombreEmpresa();
	string getNumeroEmpresa();
	void setNumeroEmpresa(string); //Segun el enunciado del problema, no debe haber set para nombreEmpresa
	string toString();

};
