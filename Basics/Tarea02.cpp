#include<iostream>

using namespace std;
int main()
{
	const float yenes_dolares=0.0090;
	const float euros_dolares=1.12;
	const float libras_dolares=1.30;
	const float yuan_dolares=0.15;
	const float shekels_dolares=0.28;
	float cantidad;
	char tipo_de_cambio;
	cout<<"Ingrese la cantidad a convertir \n";
	cin>>cantidad;
	cout<<"�Qu� tipo de cambio desea realizar?: \n";
	cout<<"Yenes a Dolares y: \n";
	cout<<"Euros a Dolares e: \n";
	cout<<"Libras a Dolares l: \n";
	cout<<"Yuan a Dolares u: \n";
	cout<<"Shekels a Dolares s: \n";
	cout<<"Dolares d: \n";
	cin>>tipo_de_cambio;
	//cout<<"Ingrese la moneda de cambio";
	switch (tipo_de_cambio){
		case 'y':
			cout<<"La cantidad de dolares a Yenes es: \n"<<cantidad*yenes_dolares;
			break;
		case 'e':
			cout<<"La cantidad de dolares a Euros es: \n"<<cantidad*euros_dolares;
			break;
		case 'l':
			cout<<"La cantidad de dolares a Libras es: \n"<<cantidad*libras_dolares;
			break;
		case 'u':
			cout<<"La cantidad de dolares a Yuanes es: \n"<<cantidad*yuan_dolares;
			break;
		case 's':
			cout<<"La cantidad de dolares a Shekels es: \n"<<cantidad*shekels_dolares;
			break;
		case 'd' :
			cout << "�A que moneda desa convertir? \n";
			cin>>tipo_de_cambio;
			switch (tipo_de_cambio){
	     		case 'y':
					cout<<"La cantidad de dolares a Yenes es: \n"<<cantidad*yenes_dolares;
					break;
				case 'e':
					cout<<"La cantidad de dolares a Euros es: \n"<<cantidad*euros_dolares;
					break;
				case 'l':
					cout<<"La cantidad de dolares a Libras es: \n"<<cantidad*libras_dolares;
					break;
				case 'u':
					cout<<"La cantidad de dolares a Yuanes es: \n"<<cantidad*yuan_dolares;
					break;
				case 's':
					cout<<"La cantidad de dolares a Shekels es: \n"<<cantidad*shekels_dolares;
					break;
				default :
					cout<<"No se reconoce esta unidad \n";
					break;
			}
			break;
	default :
	cout<<"No se reconoce unidad";
	break;
}
}
	
	/*
	while (tipo_de_cambio != 0 && tipo_de_cambio != 1 && tipo_de_cambio != 2)
	{	
			cout<<"Por favor escoga una de las tres opciones \n";
		   	cout<<"�Qu� tipo de cambio desea realizar?: \n";
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
	*/









