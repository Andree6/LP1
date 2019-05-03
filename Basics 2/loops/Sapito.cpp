#include<conio.h>
#include<iostream>
using namespace std;

int main(){
	int cont=1;
	int saltos[100], n, j=1, patron=9, metros=0, r, distancia=1, parar_saltos=0, cantidad=0;
	cout << "¿Cuantos metros desea calcular? \n";
	cin>>metros;
	//El parar saltos es para saber si se alcanzo el numero de saltos, y da un valor true o 1 para saber que el for debe terminar, en la clase estaba con el nombre otro1, lo cambie Miss.
	for (int conteo=distancia; parar_saltos<1; conteo++){
			if (cantidad < metros){	
			distancia = distancia + patron;
			cantidad = cantidad+distancia;
			cont++;
			}
			else if(cantidad >= metros){
			cout << "\n\nLa cantidad de saltos que el sapo debe dar son: " << cont;
			cont++;
			parar_saltos=1;
			}
			}
		cout << "\n";
		getch();
		//cout << "\n" << cantidad;
		//cout << "\n" << patron;		
}	
