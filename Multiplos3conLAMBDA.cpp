/////////////////////////////////////////////////////////////////////////////////////////
//                                                                                     //
//  Universidad de las Fuerzas Armadas ESPE                                            //
// DESCRIPCION DEL PROBLEMA: Uso de Lambda para multiplicacion 0 multiplos de 3        //
// AUTOR: Pablo Antoio Campoverde Jimenez                                              //
// FECHA DE CREACION: 16/05/2024                                                       //
//                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////



#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Multiplo{

public:

	//Constructor
	explicit Multiplo(int multiplo) : _multiplo(multiplo) {}

	//Imprime el producto de cada elemento en un vector
	//y el valor de la escala a la consola
	void AplicaMultiplo(const vector<int>& v)const {

		for_each(v.begin(), v.end(), [=](int n) { cout << n * _multiplo << endl; });

	}

private:
	int _multiplo;
};

int main() {

	vector<int> valores;
	valores.push_back(1);
	valores.push_back(2);
	valores.push_back(3);
	valores.push_back(4);
	valores.push_back(5);
	valores.push_back(6);
	valores.push_back(7);
	valores.push_back(8);
	valores.push_back(9);
	valores.push_back(10);
	
	//Crea un objeto Multiplo que multiplica por 3 a los elemntos y 
	//los aplica al vector por lo que el vector no puede ser modificado
	Multiplo m(3);
	m.AplicaMultiplo(valores);
}