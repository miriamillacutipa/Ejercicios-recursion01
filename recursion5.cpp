#include <iostream>
using namespace std;

int convertir (int n);

int main() {
	int n;
	cout << "Conversion de decimal a binario" << endl<< endl;
	cout << "Ingrese el numero en base 10: ";
	cin >> n;
	cout << "El equivalente de " << n << " en base 2 es ";
	cout << convertir (n);
	return 0;
}

int convertir (int n){
	if (n==0) {
		return n;
	} else {
		return convertir(n/2) * 10 + n%2;
	}
}
