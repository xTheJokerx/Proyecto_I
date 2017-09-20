#pragma once
#include "Tiempo.h"


class Asiento {
private:
	string letra;
	int numero;
	bool disponible;
public:

	Asiento();
	Asiento(string, int);
	~Asiento();
	string getLetra();
	int getNumero();
	bool getDisponible();
	void setLetra(string);
	void setNumero(int);
	void setDisponible(bool);
	string toString();


};