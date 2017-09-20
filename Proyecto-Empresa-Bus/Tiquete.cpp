#include "Tiquete.h"

Tiquete::Tiquete(){
	numTiquete = "";
	ptrAsiento = new Asiento;
	ptrCarrera = new Carrera;
}

Tiquete::Tiquete(string nTiq,Carrera& car,Asiento& asi){
	numTiquete = nTiq;
	ptrCarrera = (Carrera*)& car;
	ptrAsiento = (Asiento*)& asi;
}

Tiquete::~Tiquete(){}

string Tiquete::getNumTiquete() { return numTiquete; }

Carrera* Tiquete::getCarrera() { return ptrCarrera; }

Asiento* Tiquete::getAsiento() { return ptrAsiento; }

void Tiquete::setNumTiquete(string numTiq) { numTiquete = numTiq; }

void Tiquete::setCarrera(Carrera& carrera) { (Carrera*)& carrera; }

void Tiquete::setAsiento(Asiento& asiento){ (Asiento*)& asiento; }

string Tiquete::toString(){
	stringstream p;
	p << "----- DATOS DEL TIQUETE -----" << endl;
	p << "-----------------------------" << endl;
	p << "Numero de tiquete: " << getNumTiquete() << endl;
	p << "Numero de Asiento: " << getAsiento()->toString() << endl;
	p<<"Numero de unidad: "<<getCarrera()->

}
