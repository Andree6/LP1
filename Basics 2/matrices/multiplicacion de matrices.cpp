//Es necesario que las columnas de A sean iguales a las filas de B para
// 					que la multiplicación de matrices pueda realizarse.
// También, las filas de la matriz resultante (C), será igual al numero de
//					filas que tenga la matriz A, y el numero de columnas
//					será igual al numero de columnas de la matriz B.
// ---------------------------->>>>>>>>>fa=filas matriz A 
// ---------------------------->>>>>>>>>ca=columnas matriz A
// ---------------------------->>>>>>>>>cb=columnas matriz B
#include <iostream>
using namespace std;

int main()
{
	int A[20][20], B[20][20], C[20][20];
	int fa, ca, cb;
	
	cout << "Ingrese la Matriz A" << '\n';
	cout << "¿Cuántas filas tendrá la matriz A? " << '\n'; cin >> fa;
	cout << "¿Cuántas columnas tendrá la matriz A? " << '\n'; cin >> ca;
	cout << '\n';
	for (int i=0; i<fa; ++i)
		for (int j=0; j<ca; ++j){
			cout << "Ingrese el valor de la posición A[" << i << "] [" << j << "]: ";
			cin >> A[i][j];
		}
			
	cout << '\n' << "Ingrese la Matriz B" << '\n';
	cout << "Filas de la matriz B: " << ca << " (valor fijo, Columnas de A = Filas de B)" << '\n';
	cout << "¿Cuántas columnas tendrá la matriz B? " << '\n'; cin >> cb;
	cout << '\n';
	for (int i=0; i<fa; ++i)
		for (int j=0; j<cb; ++j){
			cout << "Ingrese el valor de la posición B[" << i << "] [" << j << "]: ";
			cin >> B[i][j];
		}
		
	//Rellenamos la matriz C con 0, ya que daría error al sumar valores nulos
	for (int i=0; i<fa; ++i)
		for (int j=0; j<cb; ++j)
			C[i][j] = 0;
	
	//Multiplicamos las matrices para dar lugar a la Matriz C
	for (int i=0; i<fa; ++i)
		for (int j=0; j<cb; ++j)
			for (int k=0; k<ca; ++k)
			C[i][j] += A[i][k] + B[k][j];
	
	cout << '\n' << "Resultado final: " << '\n';		
	//Imprimimos la Matriz A
	cout << '\n' << "Matriz A: " << '\n';
	for (int i=0; i<fa; ++i)
	{
		for (int j=0; j<ca; ++j) 
		{
			cout << A[i][j] << " ";
		}
		cout << '\n';
	}
	//Imprimimos la Matriz B
	cout << "Matriz B: " << '\n';
	for (int i=0; i<ca; ++i)
	{
		for (int j=0; j<cb; ++j) 
		{
			cout << B[i][j] << " ";
		}
		cout << '\n';
	}
	//Imprimimos la Matriz C
	cout << "Matriz C (AxB): " << '\n';
	for (int i=0; i<fa; ++i)
	{
		for (int j=0; j<cb; ++j) 
		{
			cout << C[i][j] << " ";
		}
		cout << '\n';
	}
}
