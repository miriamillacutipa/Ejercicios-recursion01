#include <iostream>
using namespace std;

int potencia (int x, int n);

int main() {
	int e, b;
	cout << "Programa que calcula la potencia de un numero" << endl << endl;
	cout << "Ingrese el numero: ";
	cin >> b; 
	cout << "Ingrese el exponente (numero natural): "; 
	cin >> e;
	cout << "Resultado: " << b << " elevado a " << e << " es " << potencia (b, e);
	return 0;
}

int potencia (int x, int n) {
	if ( n==0 )  {
		return 1; 
	}
	else {
		return (x * potencia (x, n-1)) ;
	}			
}
