#include<iostream>

using namespace std;

int letra (int x)
{
	return x;
}
int main ()
{
	for (int i=97; i<=122; ++i){
		cout<<char(letra(i))<<" >> "<< i << "\n";
	}
	cout << "\n";
	for (int j=65; j<=90; ++j){
		cout<<char(letra(j))<<" >> "<< j << "\n";
	}
	cout << "\n";
	for (int k=0; k<=9; ++k){
		cout << k << "\n";
	}
	return 0;
}
