#include<iostream>

using namespace std;

int letra (int x)
{
	return x;
}
int main ()
{
	int i=97;
	while (i<=122){
		cout<<char(letra(i))<<" >> "<< i << "\n";
		++i;
	}
}
