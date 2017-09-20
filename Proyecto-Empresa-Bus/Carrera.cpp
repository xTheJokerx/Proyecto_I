#include "Carrera.h"

Carrera::Carrera(ContenedorBus&conte) {
	ptrTiempo = NULL;
	ptrRuta = NULL;
	ptrContBus = (ContenedorBus*)&conte;
}

Carrera::Carrera(Tiempo &tiem, Ruta &rut, ContenedorBus&conte) {
	ptrTiempo = (Tiempo*)&tiem;
	ptrRuta = (Ruta*)&rut;
	ptrContBus = (ContenedorBus*)&conte;
}

Carrera::~Carrera() {
	delete ptrTiempo;
	delete ptrRuta;
}

Tiempo* Carrera::getTiempo() { return ptrTiempo; }
Ruta* Carrera::getRuta() { return ptrRuta; }
ContenedorBus* Carrera::getContBus() { return ptrContBus; }

void Carrera::setRuta(Ruta& ru) { ptrRuta =(Ruta*)& ru; }

void Carrera::setTiempo(Tiempo& tiemp) { ptrTiempo =(Tiempo*)& tiemp; }

void Carrera::asignarRuta() {//NUEVO AQUI
	bool n = false;
	if (ptrContBus->dameDisponible()) {
		ptrRuta = (Ruta*)ptrContBus->dameDisponible();
		ptrContBus->dameDisponible()->setDisponibilidad(n);
	}
}

string Carrera::toString() {
	stringstream s;
	s << "VAMOS A VER LA BONITA CARRERA PUES:" << endl;
	if (ptrRuta != NULL)
		s << getRuta() << endl << ptrContBus->toString();
	else
		s << ptrContBus->toString();
	return s.str();
}

void Carrera::crearViaje(int h, int min, string ori, string des,float mon) {
	ptrTiempo->setHora(h);
	ptrTiempo->setMinuto(min);
	ptrRuta->setOrigen(ori);
	ptrRuta->setDestino(des);
	ptrRuta->setMonto(mon);

}