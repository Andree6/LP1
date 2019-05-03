/*Miss, este problema no le entendi bien pero lo hice suponiendo que el usuario me ingresa el numero de milimetros que tendra el lienzo y cuantos milimetros pintara, 
	ademas de los colores y en que posicion del lienzo comenzara a pintar. 
	Pero no sabia si el pincel pintaba tres milimetros y luego al siguiente milimetro del que pinto lo hacia de nuevo hasta la cantidad de colores o 
	tenia que pintar tres milimetros y luego pintar en el siguiente milimetro en el que sus costados esten en blanco, osea cada 3 milimetros para que no pinte el color del anterior milimetro
	
	Ademas en el txt que nos paso, no estaba como habia supuesto, asi que solo le envio los 2 codigos que pense. Este ultimo problema no lo capte bien.
	
	Este es del primer caso, de que pinta al siguiente milimetro del que pinto, pintando sobre el otro color del costado.*/
	
#include<iostream>
using namespace std;

int main(){
	int cont=1, tamanio_lienzo, color_ingresado, posicion, suma=0;
	int milimetros, j=1, posicion_permitida=1, resta=0;	
	int colores[100];
	cout << "¿De cuantos milimetros sera el lienzo 1D? \n";
	cin>>tamanio_lienzo;
	int lienzo[tamanio_lienzo];
	cout << "¿Cuántos milimetros se pintaran?: \n";
	cin>>milimetros;
	if (tamanio_lienzo<3) {		
		cout << "\nEl Lienzo debe medir de mas de 2 milimetros \n";
	}
	else if ((milimetros*3)>tamanio_lienzo){
		cout << "No se puede realizar la pintura \n";
	}
	else if (milimetros==0){
		cout << "\nDebes pintar al menos un milimetro \n";
	}
	else {
		cout << "¿En qué posición iniciará el pincel? \n";
		cin>>posicion;
		cout << '\n' << "Mili: " << milimetros << '\n'; 
		resta=tamanio_lienzo-(milimetros*3);
		posicion_permitida=2 + resta;
		if ((posicion>posicion_permitida) or (posicion < 2)){
		cout << "\nNo se puede realizar la pintura \n";
		}
		else{
			for (int i=0; i<milimetros; i++){
			cout << "\nColor Numero: " <<cont++ <<"\n";
			cin>>color_ingresado;
			colores[i]=color_ingresado;
			//cont++;
			}
			cout << "\nSi se puede realizar la pintura \n";
			cout << "\n";
			for (int j=0; j<milimetros; j++){
			cout << colores[j];
		}
		}
}
}
