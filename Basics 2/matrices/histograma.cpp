#include <iostream>
using namespace std;

int main()
{
	int A[20][20]; //este valor es solo referencial, solo para inicia la matriz, despues el usuario define el tamaño.
	int f, c, num, cont, coleccion_num[100], r=0, conteo=0;
	
	//cout << "Ingrese la Matriz A" << '\n';
	cout << "¿Cuántas filas tendrá la Matriz? " << '\n'; cin >> f;
	cout << "¿Cuántas columnas tendrá la Matriz? " << '\n'; cin >> c;
	cout << '\n';
	if ((f>1) and (c>1)){
	cout << "Ingrese la Matriz A" << '\n';
	for (int i=0; i<f; ++i)
		for (int j=0; j<c; ++j){
			cout << "Ingrese el valor de la posición A[" << i << "] [" << j << "]: ";
			cin >> A[i][j];
		}
		
	cout << '\n' << "Matriz A: " << '\n';
	for (int i=0; i<f; ++i)
	{
		for (int j=0; j<c; ++j) 
		{
			cout << A[i][j] << " ";
			coleccion_num[r]=A[i][j];
			conteo=conteo+1;
			r++;
		}
		cout << '\n';
	}
	
	int coleccion_temp[conteo-1];
	for (int i=0; i<conteo; ++i)
	{
		for(int j=0; j<conteo; ++j)
		{
			if (coleccion_num[j]==i)
			cont=cont+1;
		}
		coleccion_temp[i]=cont;
		cont = 0;
	}
	/*for (int i=0; i<r; ++i)
	{
		cout << coleccion_num[i] << " ";
	}*/
	//cout << "\n";
	for (int i=0; i<conteo; ++i)
	{
		cout << "\n" << "La cantidad de " << i << " es: " << coleccion_temp[i] << " ";
	}
	cout << "\n";
	for (int i=0; i<conteo; ++i)
	{ 
		if (coleccion_temp[i]!=0){
		cout << "\n" << i << "\t\t" << coleccion_temp[i] << "\t\t";
		 for (int j=0; j<coleccion_temp[i]; ++j)
		 {
		 	if (coleccion_temp[i]!=0)
		 	cout << "*";
		 }
		 cout << endl;
		 }
	}
	}
	else
	{
		cout << "\nLa cantidad de filas y columnas deben ser mayores a 1";
	}
}

