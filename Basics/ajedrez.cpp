#include<iostream>
using namespace std;

int main()
{
	char f; //fila
	char c; // columna
	char r; // rango
	cout << "Ingrese la posicion del Rey: \n";
	cout << "Fila: \n";
	cin>>f;
	cout << "Columna: \n";
	cin>>c;
	cout << "Rango (entre 1 y 8): \n";
	cin>>r;
	switch (r){
		//Rango 1
		case '1':	
			if (((f==8) and (c==8)) or ((f==1) and (c ==1)) or 
			((f==1) and (c==8)) or ((f==8) and (c==1)))
			cout<<"El numero de pasos que el Rey puede dar es 4 \n";
			else if ((((f<=7) and (f>=2)) and (c==1)) or (((f<=7) and (f>=2)) and (c==8)) or 
			(((c<=7) and (c>=2)) and (f==1)) or (((c<=7) and (c>=2)) and (f==8)))
			cout<<"El numero de pasos que el Rey puede dar es 6 \n";
			else 
			cout<<"El numero de pasos que el Rey puede dar es 9 \n";
			break;
		//Rango 2
		case '2':	
			if (((f==8) and (c==8)) or ((f==1) and (c==1)) or 
			((f==1) and (c==8)) or ((f==8) and (c==1)))
			cout<<"El numero de pasos que el Rey puede dar es 9 \n";	
			else if ((((f==1) or (f==8)) and ((c==2) or (c==7))) or 
			(((c==1) or (c==8)) and ((f==2) or (f==7))))
			cout<<"El numero de pasos que el Rey puede dar es 12 \n";
			else if ((((f<=6) and (f>=3)) and ((c==1) or (c==8))) or 
			(((c<=6) and (c>=3)) and ((f==1) or (f==8))))
			cout<<"El numero de pasos que el Rey puede dar es 15 \n";
			else if (((f==2) or (f==7)) and ((c==2) or (c==7))) 
			cout<<"El numero de pasos que el Rey puede dar es 16 \n";
			else if (((f>=3) and (f<=6)) and ((c==2) or (c==7)) or 
			((f==2) or (f==7)) and ((c>=3) and (c<=6)))
			cout<<"El numero de pasos que el Rey puede dar es 20 \n";
			else
			cout<<"El numero de pasos que el Rey puede dar es 25 \n";
			break;
		//Rango 3
		case '3':
			if (((f==8) and (c==8)) or ((f==1) and (c==1)) or 
			((f==1) and (c==8)) or ((f==8) and (c==1)))
			cout<<"El numero de pasos que el Rey puede dar es 16 \n";	
			else if ((((f==1) or (f==8)) and ((c==2) or (c==7))) or 
			(((c==1) or (c==8)) and ((f==2) or (f==7))))
			cout<<"El numero de pasos que el Rey puede dar es 20 \n";
			else if ((((f==1) or (f==8)) and ((c==3) or (c==6))) or 
			(((c==1) or (c==8)) and ((f==3) or (f==6))))
			cout<<"El numero de pasos que el Rey puede dar es 24 \n";
			else if (((f==2) or (f==7)) and ((c==2) or (c==7)))
			cout<<"El numero de pasos que el Rey puede dar es 25 \n";
			else if ((((f==1) or (f==8)) and ((c==4) or (c==5))) or 
			(((c==1) or (c==8)) and ((f==4) or (f==5))))
			cout<<"El numero de pasos que el Rey puede dar es 28 \n";
			else if ((((f==2) or (f==7)) and ((c==3) or (c==6))) or 
			(((c==2) or (c==7)) and ((f==3) or (f==6))))
			cout<<"El numero de pasos que el Rey puede dar es 30 \n";
			else if ((((f==2) or (f==7)) and ((c==4) or (c==5))) or 
			(((c==2) or (c==7)) and ((f==4) or (f==5))))
			cout<<"El numero de pasos que el Rey puede dar es 35 \n";
			else if ((((f==3) or (f==6)) and ((c==3) or (c==6))))
			cout<<"El numero de pasos que el Rey puede dar es 36 \n";
			else if ((((f==3) or (f==6)) and ((c==4) or (c==5))) or
			(((f==4) or (f==5)) and ((c==3) or (c==6))))
			cout<<"El numero de pasos que el Rey puede dar es 42 \n";
			else
			cout<<"El numero de pasos que el Rey puede dar es 49 \n";
			break;
		//Rango 4
		case '4':
			if (((f==8) and (c==8)) or ((f==1) and (c==1)) or 
			((f==1) and (c==8)) or ((f==8) and (c==1)))
			cout<<"El numero de pasos que el Rey puede dar es 25 \n";	
			else if ((((f==1) or (f==8)) and ((c==2) or (c==7))) or 
			(((c==1) or (c==8)) and ((f==2) or (f==7))))
			cout<<"El numero de pasos que el Rey puede dar es 30 \n";
			else if ((((f==1) or (f==8)) and ((c==3) or (c==6))) or 
			(((c==1) or (c==8)) and ((f==3) or (f==6))))
			cout<<"El numero de pasos que el Rey puede dar es 35 \n";
			else if (((f==2) or (f==7)) and ((c==2) or (c==7)))
			cout<<"El numero de pasos que el Rey puede dar es 36 \n";
			else if ((((f==1) or (f==8)) and ((c==4) or (c==5))) or 
			(((c==1) or (c==8)) and ((f==4) or (f==5))))
			cout<<"El numero de pasos que el Rey puede dar es 40 \n";
			else if ((((f==2) or (f==7)) and ((c==3) or (c==6))) or 
			(((c==2) or (c==7)) and ((f==3) or (f==6))))
			cout<<"El numero de pasos que el Rey puede dar es 42 \n";
			else if ((((f==2) or (f==7)) and ((c==4) or (c==5))) or 
			(((c==2) or (c==7)) and ((f==4) or (f==5))))
			cout<<"El numero de pasos que el Rey puede dar es 48 \n";
			else if ((((f==3) or (f==6)) and ((c==3) or (c==6))))
			cout<<"El numero de pasos que el Rey puede dar es 49 \n";
			else if ((((f==3) or (f==6)) and ((c==4) or (c==5))) or 
			(((c==3) or (c==6)) and ((f==4) or (f==5))))
			cout<<"El numero de pasos que el Rey puede dar es 56 \n";
			else // ((((f==3) or (f==4)) and ((c==3) or (c==4))))
			cout<<"El numero de pasos que el Rey puede dar es 64 \n";
			break;
		//Rango 5
		case '5':
			if (((f==8) and (c==8)) or ((f==1) and (c==1)) or 
			((f==1) and (c==8)) or ((f==8) and (c==1)))
			cout<<"El numero de pasos que el Rey puede dar es 36 \n";	
			else if ((((f==1) or (f==8)) and ((c==2) or (c==7))) or 
			(((c==1) or (c==8)) and ((f==2) or (f==7))))
			cout<<"El numero de pasos que el Rey puede dar es 42 \n";
			else if (((f>=3) and (f<=6)) and ((c==1) or (c==8)) or
			((f==1) or (f==8)) and ((c>=3) and (c<=6)))
			cout<<"El numero de pasos que el Rey puede dar es 48 \n";
			else if ((((f==2) or (f==7)) and ((c==2) or (c==7))))
			cout<<"El numero de pasos que el Rey puede dar es 49 \n";
			else if (((f>=3) or (f<=6)) and ((c==2) or (c==7)) or
			((f==2) or (f==7)) and ((c>=3) or (c<=6)))
			cout<<"El numero de pasos que el Rey puede dar es 56 \n";
			else
			cout<<"El numero de pasos que el Rey puede dar es 64 \n";
			break;
		//Rango 6
		case '6':
			if (((f==8) and (c==8)) or ((f==1) and (c==1)) or 
			((f==1) and (c==8)) or ((f==8) and (c==1)))
			cout<<"El numero de pasos que el Rey puede dar es 49 \n";
			else if (((f>=2) and (f<=7)) and ((c==1) or (c==8)) or
			((f==1) or (f==8)) and ((c>=2) and (c<=7)))
			cout<<"El numero de pasos que el Rey puede dar es 56 \n";
			else
			cout<<"El numero de pasos que el Rey puede dar es 64 \n";
			break;
		//Rango 7 y RAngo 8
		case '7': case '8':
			cout<<"El numero de pasos que el Rey puede dar es 64 \n";
			break;
		default:
			cout<< "\n";
			cout<< "\n";
			cout<< "----------- ********** ----------- \n";
			cout<<"Error, Por favor revise uno de estos errores y vuelva a iniciar el programa: \n";
			cout<<"--Las filas, las columnas y el numero de movimientos del Rey \n debe oscilar entre 1 y 8 \n";
			cout<<"--Las filas, columnas y el numero de movimientos del Rey \n deben ser numeros \n";
			break;
		}
}
