#include "Bus.h"


Bus::Bus(string identi, string plac) {
	identificador = identi;
	placa = plac;
	disponibilidad = true;
	estado = "C";
	ptrConteAsi = new ContenedorAsiento;
	ptrRuta = NULL;
}

Bus::Bus(string identi, string plac, Ruta& ruti) {
	identificador = identi;
	placa = plac;
	disponibilidad = true;
	estado = "C";
	ptrConteAsi = new ContenedorAsiento;
	ptrRuta = (Ruta*)&ruti;
}

Bus::~Bus() {
	delete ptrConteAsi;
}

string Bus::getIdentificador() { return identificador; }
string Bus::getPlaca() { return placa; }
bool Bus::getDisponibilidad() { return disponibilidad; }
string Bus::getEstado() { return estado; }

void Bus::setEstado(string es) { estado = es; }
void Bus::setDisponibilidad(bool n) { disponibilidad = n; }
bool Bus::consultaUnidadesEnTerminal() { return true; }


// void Bus::cambiarMiEstado();
// La unidad cambia de estado a estado en terminal(A o B)


string Bus::toString() {
	stringstream p;
	p << "---------------- DATOS DEL BUS ----------------" << endl;
	p << "-----------------------------------------------" << endl;
	p << "Identificador: " << getIdentificador() << endl;
	p << "Numero de placa: " << getPlaca() << endl;
	if (getDisponibilidad())
		p << "Disponibilidad: " << "No en uso" << endl;
	else
		p << "Disponibilidad: " << "En uso" << endl;
	p << "Estado: " << getEstado() << endl;
	p << ptrConteAsi->toString();
	return p.str();
}