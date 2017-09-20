#include "Empresa.h"

Empresa::Empresa(string nom, string num){
	nombreEmpresa = nom;
	numeroEmpresa = num;
	//contTiquete= new ContenedorTiquete;
	//contCarrera= new ContenedorCarrera;	
	//contBus = new ContenedorBus;			
}

Empresa::~Empresa(){
	/*for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++)
			delete conTiquete[i][j];
	}
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++)
			delete contCarrera[i][j];
	}
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++)
			delete contBus[i][j];
	}*/
	
	cout << "Borrando datos de la empresa..." << endl;

}	
string Empresa::getNombreEmpresa() { return nombreEmpresa; }

string Empresa::getNumeroEmpresa() { return numeroEmpresa; }

void Empresa::setNumeroEmpresa(string num) { numeroEmpresa = num; }

string Empresa::toString(){
	stringstream p;
	p << "----------------- DATOS DE LA EMPRESA -----------------" << endl;
	p << "-------------------------------------------------------" << endl;
	p << "Nombre de la empresa: " << getNombreEmpresa() << endl;
	p << "Numero de la empresa: " << getNumeroEmpresa() << endl << endl;
	/*p << "------------------ DATOS DE LOS BUSES -----------------" << endl;
	p << "-------------------------------------------------------" << endl;
	p << contBus->toString() << endl << endl;
	p << "---------------- DATOS DE LOS TIQUETES ----------------" << endl;
	p << "-------------------------------------------------------" << endl;
	p << contTiquete->toString() << endl << endl;
	p << "---------------- DATOS DE LAS CARRERAS ----------------" << endl;
	p << "-------------------------------------------------------" << endl;
	p << contCarrera->toString() << endl << endl;*/
	return p.str();
}