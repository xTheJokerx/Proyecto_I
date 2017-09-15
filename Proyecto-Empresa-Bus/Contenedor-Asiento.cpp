#include "Contenedor-Asiento.h"

ContenedorAsiento::ContenedorAsiento() {
	
	//proceso para crear una matriz dinamica
	mat = new Asiento*[fila];//aqui definimos el primer puntero como que tendra las filas
	for (int j = 0; j<fila; j++)//ahora hacemos que el doble puntero se asocie con las culumnas
	{
	mat[j] = new Asiento[colu];//aqui definimos el segundo puntero , las filas de la matriz
	}

	for (int i = 0; i < fila; i++) {
		for (int j = 0; j < colu; j++)
			mat[i][j] = Asiento('Z','0');
	}
	
}

ContenedorAsiento::~ContenedorAsiento() {
	//al igual que con el constructor en el que definimos el primer apuntador 
	//para que se defina con las columnas aqui ahcemos lo mismo...
	for (int j = 0; j < fila; j++) {
		delete mat[j]; //primero se destruyen el numero de columnas 
		delete mat;//una ves destruidor el  numero de columnas se destruye el vector que a quedado ( el primer puntero)
	}
}

void ContenedorAsiento::imprimeContenedor(){
	// se muestran los datos de la matriz
	cout << "Los datos de la matriz son" << endl;
	for (int i = 0; i<fila; i++){
		for (int j = 0; j<colu; j++){
			cout << mat[i][j].toString() << " ";}
		cout << endl;	//este cout es para se imprima en forma de matriz
	}
}

