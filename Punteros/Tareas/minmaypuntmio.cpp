#include<iostream>
#include<string>

using namespace std;

void mayusc(char* s);

int main(){
	char frase[]="hola d";
  	mayusc(frase);
  	cout << "La frase es: " << frase << endl;
}

void mayusc(char *letra){
  while(*letra != '\0'){ //		\0, es el fin de la cadena. 
    if(islower(*letra))
      *letra = toupper(*letra);
    letra++;
  }
}


