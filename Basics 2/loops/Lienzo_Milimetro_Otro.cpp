/* Este es sehgundo caso, pinta cada tres milimetros para no pintar sobre el color del anterior milimetro..*/

#include<iostream>
using namespace std;

int main(){
	int cont=1, tamanio_lienzo, color_ingresado, posicion, suma=0;
	int milimetros, j=1;	
	int colores[100];
	cout << "¿De cuantos milimetros sera el lienzo 1D? \n";
	cin>>tamanio_lienzo;
	int lienzo[tamanio_lienzo];
	cout << "¿Cuántos milimetros se pintaran?: \n";
	cin>>milimetros;
	if (tamanio_lienzo<3) {		
		cout << "\nEl Lienzo debe medir de mas de 2 milimetros \n";
	}
	else if (milimetros>=(tamanio_lienzo-1)){
		cout << "No se puede realizar la pintura \n";
	}
	else if (milimetros==0){
		cout << "Debes pintar al menos un milimetro \n";
	}
	else {
		cout << "¿En qué posición iniciará el pincel? \n";
		cin>>posicion;
		suma=posicion+milimetros;
		if ((posicion<2) or (suma>tamanio_lienzo)){
		cout << "\nNo se puede realizar la pintura \n";
		}
		else{
			for (int i=0; i<milimetros; i++){
			cout << "\nColor Numero: " <<cont++ <<"\n";
			cin>>color_ingresado;
			colores[i]=color_ingresado;
			}
			cout << "\nSi se puede realizar la pintura \n";
			cout << "\n";
			for (int j=0; j<milimetros; j++){
			cout << colores[j];
		}
		}
}
}
