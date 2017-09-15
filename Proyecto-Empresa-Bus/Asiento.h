#pragma once
#include "Tiempo.h"
#define MAX = 80;
class Asiento {
private:
	char letra;
	char numero;

public:
	Asiento();
	Asiento(char, char);
	~Asiento();
	char getLetra();
	int getNumero();
	void setLetra(char);
	void setNumero(char);
	string toString();

};
