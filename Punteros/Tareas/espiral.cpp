#include <iostream>
#include <math.h>
using namespace std;

int espiral(int n){
	int a=n-1;
	int b=n-2;
	double res=0;
	if (n>1){
	res=(pow(a, 2)+1+espiral(b)+pow(n, 2));
	cout<<"La suma diagonal es: "<< res;
	}
}

int main(){
	int n=0;
	cout<<"Escriba n: ";
	cin>>n;
	espiral(n);
	}
