#include<iostream>
using namespace std;

int main(){
	int cont=0;
	int numeros[100], n;	
	cout << "Numero de personas que van a jugar \n";
	cin>>n;
	for (int i=0; i<n; i++){
		cout << "Digite el mensaje: \n";
		cin>>numeros[i];
		if (i==1){
			if (numeros[i] != numeros[0])
			cont=cont+2;
		}
		if (i==2){
			if ((numeros[i-1] != numeros[i]) and (numeros[i-1] == numeros[0])){
			cont=cont+2;
			}
			if ((numeros[i] != numeros[i-1]) and (numeros[i-1] != numeros[0])){
				cont=cont+1;
			}
			}
		if (i>2){
			if ((numeros[i-1] != numeros[i]) and (numeros[i-1] == numeros[0])){
			cont=cont+2;
			}
			if ((numeros[i] != numeros[i-1]) and (numeros[i-1] != numeros[0])){
				cont=cont+2;
			}
		}
}
for (int j=0; j<n; j++){
		cout << "\n" << numeros[j];
	}
	cout << "\n\nLa cantidad de sospechosos son: " << cont;
}
