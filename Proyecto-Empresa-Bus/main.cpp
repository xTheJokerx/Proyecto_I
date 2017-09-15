#include "Asiento.h"
#include "Contenedor-Asiento.h"

int main() {
	cout << "hello world\n";
	Asiento * a = new Asiento('Z','4');
	ContenedorAsiento * b = new ContenedorAsiento;
	
	//cout << a->toString();
	b->imprimeContenedor();
	b->~ContenedorAsiento();

	system("pause");
	return 0;
}