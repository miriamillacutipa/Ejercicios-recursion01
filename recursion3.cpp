#include <iostream>
using namespace std;

int busquedaValor(int v[], int n, int x);

int main() {
	int v[100], n, x;
	cout << "Busqueda de un valor en un arreglo unidimensional" << endl << endl;
	cout << "Ingrese la cantidad de elementos: ";
	cin >> n;
	
	for (int i=0; i<n; i++) {
		cout << "Ingrese el elemento " << i+1 << " : ";
		cin >> v[i];
	}
	
	cout << "Ingrese el elemento a buscar: ";
	cin >> x;
	
	if (busquedaValor(v, n, x)){
		cout << "\nEl elemento se encuentra en el arreglo";
	} 
	else  {
		cout << "\nEl elemento no se encuentra en el arreglo";
	}
	return 0;
}

int busquedaValor(int v[], int n, int x) {
	if (n==0) {
		return false;
	} 
	else if (v[n-1] == x) {
		return true;
	}
	else {
		return busquedaValor(v, n-1, x);
	}
}
