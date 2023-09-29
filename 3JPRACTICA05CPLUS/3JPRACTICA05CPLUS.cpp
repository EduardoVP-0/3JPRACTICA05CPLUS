//PRACTICA05
//EDUARDO VELAZQUEZ 

#include<iostream>
#include<vector>
#include<conio.h>


using namespace std;
int main() {
	//DECLARA UN VECTOR DE CADENAS
	vector<string>aves = { "Loro Gris","Paloma de diamante","Coctel" };
	cout << "Los valores del vector antes de insertar:\n";
	
	//ITERA SOBRE EL VECTOR PARA IMPRIMIR LOS VALORES
	for (int i = 0; i < aves.size(); i++) {
		cout << aves[i] << " ";
	}
	cout << "\n";

	//AGREGA TRES VALORES AL FINAL DEL VECTOR UTILIZANDO PUSH_BACK()
	aves.push_back("Mayna");
	aves.push_back("Periquitos");
	aves.push_back("Cacatua");
	cout << "\nLos valores del vector despues de insertar:\n";

	//ITERA SOBRE EL VECTOR PARA IMPRIMIR LOS VALORES 

	for (int i = 0; i < aves.size(); i++) {
		cout << aves[i] << " ";
	}
	cout << "\n";

	system("PAUSE");
	return 0;
	}