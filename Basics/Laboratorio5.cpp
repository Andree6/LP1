#include<iostream>
using namespace std;

//Convertir pulgadas a centimetros y viceversa, sufijos 'i' o 'c' indican la unidad, cualquier otro es error
int main ()
{	const double cm_per_inch = 2.54;
	int length=1;
	char unit; //Miss, no reconocia el espacio o el caracter que usted puso aqui, asi que lo borre. unit = " "
	cout << "Por favor ingrese una longitud seguida de su unidad (c o i): \n";
	cin >> length >> unit;
	
	if (unit =='i')
		cout << length << "in == " << cm_per_inch*length << "cm\n";
	else if(unit =='c')
		cout << length << "cm == " << length/cm_per_inch << "in\n";
	else
		cout << "Lo siento, no reconozco una unidad llamada'" << unit << " '\n";
}
