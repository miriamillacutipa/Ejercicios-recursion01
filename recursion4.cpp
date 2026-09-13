#include <iostream>
using namespace std; 

int maximo(int v[], int n);

int main() {
	int v[100], n;
	cout << "Maximo elemento de un arreglo unidimensional" << endl << endl;
	cout << "Ingrese la cantidad de elementos: "; 
	cin >> n;
	
	for (int i=0; i<n; i++) {
		cout << "Ingrese el elemento " << i+1 << " : ";
		cin >> v[i];
	}
	
	cout << "El maximo elemento del arreglo es: " << maximo(v, n);
	return 0;
}

int maximo(int v[], int n) {
	if ( n==0 ) {
		return v[0];
    }
	int m = maximo(v,n-1);
	if ( v[n-1] > m) {
		m= v[n-1];
	}	
	return m;
	}
