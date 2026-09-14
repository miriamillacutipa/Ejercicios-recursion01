#include <iostream>
using namespace std;

int imagenEspecular(int n, int e);

int main() {
	int n, e; 
	cout << "Calcular la imagen especular de un numero" << endl << endl;
	cout << "Ingrese un numero: ";
	cin >> n;
	cout << "La imagen especular es: ";
	cout << imagenEspecular(n, e);
	return 0;
}

int imagenEspecular(int n, int e) {
	if (n==0) {
		return e;
	} else {
		return imagenEspecular(n/10, e * 10 + n%10);
	}
}
