#pragma once
#include "Carrera.h"
#include "Asiento.h"
#include "Bus.h"

class Tiquete {
private:
	string numTiquete;
	Carrera* ptrCarrera;
	Asiento* ptrAsiento;

public:
	Tiquete();
	Tiquete(string,Carrera&,Asiento&);
	~Tiquete();
	string getNumTiquete();
	Carrera* getCarrera();
	Asiento* getAsiento();
	
	void setNumTiquete(string);
	void setCarrera(Carrera&);
	void setAsiento(Asiento&);
	string toString();


};
