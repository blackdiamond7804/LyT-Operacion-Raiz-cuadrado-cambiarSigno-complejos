#include <functional>
#include <iostream>

int main()
{
	using namespace std;

	int i = 3;
	int j = 5;

	//El siguiente expresion Lambda captura i por valor y 
	// j por referencia

	function<int(void)> f = [i, &j] { return i + j; };

	//Cambia el valor de i por j
	i = 22;
	j = 44;

	//Llama f e imprime su resultado
	cout << f() << endl;
}

// CODE EXPLICATION:
// Declaración de Lambda: Se declara una expresión lambda que captura la variable i por valor y la variable j por referencia. La lambda se asigna a la variable f del tipo function<int(void)>.
//Captura por Valor y Referencia : Al capturar i por valor, se utiliza el valor de i en el momento de la creación de la lambda(3).Al capturar j por referencia, se utilizará el valor actual de j cada vez que se llame a la lambda.
//Cambio de Valores : Las variables i y j cambian sus valores a 22 y 44 respectivamente.Sin embargo, el cambio en i no afecta a la lambda porque i fue capturada por valor.
//Resultado de la Llamada : Al llamar a f(), se imprime el resultado de la suma de i(3) y j(44), que es 47.
//