#include <iostream> 
#include<vector>
#include<string.h>
#include <time.h>
//#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main (){
	vector<int> numeros_a_adivinar, numeros_del_usuario;
	int vacas=0, toros=0, intentos, verificacion=1, cont=0;
	srand(time (NULL));
	numeros_a_adivinar.push_back(rand() % 9 + 1); 
	numeros_a_adivinar.push_back(rand() % 9 + 1);
	numeros_a_adivinar.push_back(rand() % 9 + 1);
	numeros_a_adivinar.push_back(rand() % 9 + 1);
	
	while (cont<12){
	for (int i=0; i<4; ++i){
		for (int j=0; j<4; ++j){
			if (i!=j){
				if (numeros_a_adivinar[j] != numeros_a_adivinar[i])
				{
				cont++;
				}
			}
		}	
	}
	if (cont!=12){
	numeros_a_adivinar.erase(numeros_a_adivinar.begin(), numeros_a_adivinar.begin()+4);
	srand(time (NULL));
	numeros_a_adivinar.push_back(rand() % 9 + 1); 
	numeros_a_adivinar.push_back(rand() % 9 + 1);
	numeros_a_adivinar.push_back(rand() % 9 + 1);
	numeros_a_adivinar.push_back(rand() % 9 + 1);
	cont = 0;
	}
}
	
	while(verificacion>0){
	//Leendo Elementos de numeros_a_adivinar
	 cout << "Numeros a adivinar: " << "\n";
	 for (int i=0; i<numeros_a_adivinar.size(); ++i){
			cout << numeros_a_adivinar[i] << " ";
	 }
	 cout << "\n\n";
	 
	 //Leendo intentos
	 for (int i=0; i<numeros_a_adivinar.size(); ++i){
			cout << "Ingrese el numero: ";
			cin >> intentos;
			numeros_del_usuario.push_back(intentos);
	 }
	 cout << "\n\n";
	 
	 //Leendo Elementos de numeros_del_usuario
	 cout << "Numeros a del usuario: " << "\n";
	 for (int i=0; i<numeros_del_usuario.size(); ++i){
			cout << numeros_del_usuario[i] << " ";
	 }
	 
	 //Verifica los resultados
	 for (int i=0; i<numeros_a_adivinar.size(); ++i){
	 		for (int j=0; j<numeros_a_adivinar.size(); ++j){
	 			if (i==j){
	 				if (numeros_del_usuario[j]==numeros_a_adivinar[i])
					toros++;
				 }
				 else{
				 	if (numeros_del_usuario[j]==numeros_a_adivinar[i])
					vacas++;
				 } 
		 	}
	 }
	 cout << "\n";
	 cout << "Vacas: " << vacas << "\n";
	 cout << "Toros: " << toros << "\n\n";
	 if (toros==4){
	 	verificacion=0;
	 	cout << "¿Desea seguir jugando?: Si=1, No=0" << "\n";
	 	cin >> verificacion;
	 	if (verificacion==1){
	 		numeros_a_adivinar.erase(numeros_a_adivinar.begin(), numeros_a_adivinar.begin()+4);
	 		srand(time (NULL));
			numeros_a_adivinar.push_back(rand() % 9 + 1); 
			numeros_a_adivinar.push_back(rand() % 9 + 1);
			numeros_a_adivinar.push_back(rand() % 9 + 1);
			numeros_a_adivinar.push_back(rand() % 9 + 1);
	 		while (cont<12){
				for (int i=0; i<4; ++i){
					for (int j=0; j<4; ++j){
						if (i!=j){
							if (numeros_a_adivinar[j] != numeros_a_adivinar[i])
							{
							cont++;
							}
						}
					}	
				}
				if (cont!=12){
				numeros_a_adivinar.erase(numeros_a_adivinar.begin(), numeros_a_adivinar.begin()+4);
				srand(time (NULL));
				numeros_a_adivinar.push_back(rand() % 9 + 1); 
				numeros_a_adivinar.push_back(rand() % 9 + 1);
				numeros_a_adivinar.push_back(rand() % 9 + 1);
				numeros_a_adivinar.push_back(rand() % 9 + 1);
				cont = 0;
				}
			}
		}
	 }
}
}
