#include "Contenedor-Bus.h"

ContenedorBus::ContenedorBus() {
	for (int i = 0; i < tamano; i++)
		conteneBus[i] = NULL;
	cantidad = 0;
}

bool ContenedorBus::hayCampo() {
	if (cantidad < tamano)
		return true;
}

/*void ContenedorBus::llenarConte(string ide, string pla) {
	if (hayCampo()) {
		conteneBus[cantidad] = new Bus(ide, pla);
		cantidad++;
	}
}*/
ContenedorBus::~ContenedorBus() {
	for (int i = 0; i < tamano; i++)
		delete conteneBus[i];
}

string ContenedorBus::toString() {
	stringstream s;
	for (int i = 0; i < tamano; i++)
		s << conteneBus[i]->toString();
	return s.str();
}
					  //nuevo aqui EXPERIMENTO
void ContenedorBus::llenarConte(string ide, string pla, string ori, string desti, float mon) {
	Ruta* rutilla = NULL;
	if (hayCampo()) {
		rutilla = new Ruta(ori, desti, mon);
		conteneBus[cantidad] = new Bus(ide, pla, *rutilla);
		cantidad++;
	}
}

void ContenedorBus::llenaConte2(string ide, string pla) {
	if (hayCampo()) {
		conteneBus[cantidad] = new Bus(ide, pla);
		cantidad++;
	}
}

Bus* ContenedorBus::dameDisponible() { //este es nuevo 
	for (int i = 0; i < tamano; i++) {
		if (conteneBus[i]->getDisponibilidad())
			return conteneBus[i];
	}

}

void ContenedorBus::actualizaEstadoDisponibilidad(string est,bool disp,int nBus) {
	conteneBus[nBus]->setDisponibilidad(disp);
	conteneBus[nBus]->setEstado(est);
}

void ContenedorBus::asignaEstado(string est, int nBus) {
	conteneBus[nBus]->setEstado(est);
}
