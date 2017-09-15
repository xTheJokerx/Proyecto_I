#include "Asiento.h"

Asiento::Asiento(){
	letra = ' ';
	numero = '0';
}

Asiento::Asiento(char a, char n){
	letra = a;
	numero = n;
}

Asiento::~Asiento(){
	cout << "Asiento borrado" << endl;
}

char Asiento::getLetra(){
	return letra;
}

int Asiento::getNumero(){
	return (numero-48); //Se le resta el 48 porque el numero lo retorna como el valor
}						// del caracter ASCII

void Asiento::setLetra(char a){
	letra = a;
}

void Asiento::setNumero(char n){
	numero = n;
}

string Asiento::toString(){
	stringstream p;
	p << getLetra() << getNumero();
	return p.str();
}
