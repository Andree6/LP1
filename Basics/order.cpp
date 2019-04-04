#include<iostream>
using namespace std;

int main ()
{	int x;
	int y;
	int z;
	cout << "El primer numero es: \n";
	cin >> x;
	cout << "El segundo numero es: \n";
	cin >> y;
	cout << "El tercer numero es: \n";
	cin >> z;
	
	if (x>y){
	cout << "El mayor es: \n" << z << "\n";
	cout << "El menor es: \n" << y << "\n";
	cout << "El del medio es: \n" << x << "\n";
	}
	else if (x>z) {
	cout << "El mayor es: \n" << x << "\n";
	cout << "El menor es: \n" << z << "\n";
	cout << "El del medio es: \n" << y << "\n";
	}
	else if (y>z) {
	cout << "El mayor es: \n" << y << "\n";
	cout << "El menor es: \n" << x << "\n";
	cout << "El del medio es: \n" << z << "\n";
	}
}
