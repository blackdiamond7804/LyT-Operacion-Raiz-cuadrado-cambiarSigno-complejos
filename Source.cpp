#include<iostream>
#include<vector>
#include<algorithm>
#include <cmath>
#include<complex>

using namespace std;

//Funcion para imprimir un numero complejo
void imprimirComplejo(complex<double>& n) {
	if (imag(n) == 0) {
		cout << real(n) << endl;
	}
	else {
		cout << n << endl;
	}
}

//Funcion plantilla que toma un vector y cambia el signo a cada elemento de la funcion
//La lambda solo cambia el signo al numero
template<typename T>
void negativo(vector<T>& v) {
	for_each(v.begin(), v.end(), [](T& n) { n = -n; });
}

//Elevo al cuadrado los numeros
template<typename T>
void alCuadrado(vector<T>& v) {
	for_each(v.begin(), v.end(), [](T& n) {n = n * n; });
}

//Hago raiz cuadrada a los numeros
template<typename T>
void raiz(vector<complex<T>>& v) {
	for_each(v.begin(), v.end(), [](complex<T>& n) {n = sqrt(n); });
}


//Toma al vector y lo imprime en la consola
template<typename T>
void imprimir(const vector<complex<T>>& v) {
	for_each(v.begin(), v.end(), [](const complex<T>& n) { cout << n << endl; });//cout << n << endl; });
}

int main() {

	vector<complex<double>> v;
	v.push_back(complex<double>(50, 0));
	v.push_back(complex<double>(-42, 0));
	v.push_back(complex<double>(90, 0));
	v.push_back(complex<double>(-67, 0));

	cout << "Los numeros originales son: " << endl;
	imprimir(v);

	vector<complex<double>> vRaiz = v;
	cout << "Raiz cuadrada de los numeros en el vector" << endl;
	raiz(vRaiz);
	imprimir(vRaiz);

	negativo(v);
	cout << "Despues de cambiar los signos de los numeros en el vector: " << endl;
	imprimir(v);

	alCuadrado(v);
	cout << "Elevado al cuadrado es: " << endl;
	imprimir(v);

	return 0;
}