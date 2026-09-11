#include <iostream>
using namespace std;

int suma(int v[], int n); 

int main() {
	int v[100], n;
	cout << "Suma de elementos de un arreglo unidimensional" << endl << endl;
	cout << "Ingrese la cantidad de elementos: ";
	cin >> n;
	
	for (int i=0; i<n; i++) {
		cout << "Ingrese el elemento " << i+1 << " : ";
		cin >> v[i];
	}
	cout << "\nResultado: la suma de los elementos del arreglo unidimensional es ";
	cout << suma(v, n);
	return 0;
}

int suma (int v[], int n) {
	if (n==0) {
		return 0;
	}
	else {
		return v[n-1] + suma(v, n-1);
	}
}
