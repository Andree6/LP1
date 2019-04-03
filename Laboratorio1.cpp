#include<iostream>

using namespace std;
int main()
{
	const float yenes_dolares=0.0090;
	const float euros_dolares=1.12;
	const float libras_dolares=1.30;
	float cantidad;
	float tipo_de_cambio;
	cout<<"¿Qué tipo de cambio desea realizar?: \n";
	cout<<"Yenes a Dolares [0]: \n";
	cout<<"Euros a Dolares [1]: \n";
	cout<<"Libras a Dolares [2]: \n";
	cin>>tipo_de_cambio;
	while (tipo_de_cambio != 0 && tipo_de_cambio != 1 && tipo_de_cambio != 2)
	{	
			cout<<"Por favor escoga una de las tres opciones \n";
		   	cout<<"¿Qué tipo de cambio desea realizar?: \n";
			cin>>tipo_de_cambio;		
	}
	cout<<"Introduzca la cantidad a convertir: \n";
	cin>>cantidad;
	 while (cantidad<0)
	{
		cout<<"Por favor escriba una cantidad monetaria \n";
		cout<<"Introduzca la cantidad a convertir: \n";
		cin>>cantidad;
	}
	if (tipo_de_cambio==0)
	{
	cout<<"La cantidad de dolares es: "<<cantidad*yenes_dolares;
    }
    else if (tipo_de_cambio==1)
	{
		cout<<"La cantidad de dolares es: "<<cantidad*euros_dolares;	
    }
    else if (tipo_de_cambio==2)
    {
    	cout<<"La cantidad de dolares es: "<<cantidad*libras_dolares;
	}
	else
	{
		cout<<"Por favor escoga una de las tres opciones \n";
	}
}
	
