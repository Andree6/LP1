#include <iostream>
#include <vector>
using namespace std;
int main(){
	int temp;
	int pos=0;
	vector <int>n;
	int n1,n2, n3;
	int v=0;
	int bot=0;
	int ver=0;
	int res=0;
	cout<<"Ingrese el número de botellas"<<endl;
	cin>>bot;
	for (int i=1;i<=bot; i++){
		n.push_back(i);}
	cout<<"Ingrese la posición inicial de la botella sin veneno"<<endl;
	cin>>pos;
	ver=n[pos];
	cout << "Ingrese la cantidad de cambios que desea hacer: "<<endl;
	cin>>n1;
	for (int i=0; i<n1; i++){
		cout<<"Ingrese la posicion a cambiar"<<endl;
		cin>>n2;
		cout<<"Ingrese la posicion con la que la cambiaras"<<endl;
		cin >>n3;
		temp=n[n2];
		n[n2]=n[n3];
		n[n3]=temp;
	}
	
	for (int i=1; i<=bot;i++){
	   if (n[i]==ver)
	     cout<<"la botella esta en la posicion es: "<<i;
		 }
}
