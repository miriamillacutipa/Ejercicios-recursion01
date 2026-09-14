#include <iostream>
using namespace std;

int enesimo (int n);

int main() {
	int n; 
	cout << "Hallar el termino enesimo de la serie: 4, 6, 10, 16, 26, 42, ..." << endl << endl;
	cout << "Ingrese n: ";
	cin >> n; 
	cout << "El termino enesimo es ";
	cout << enesimo(n);
}

int enesimo(int n) {
	if (n==1) {
		return 4;
	} else if (n==2) {
		return 6;
	} else {
		return enesimo(n-1) + enesimo(n-2);
	}
}
