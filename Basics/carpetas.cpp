#include<iostream>
using namespace std;

int main()
{
	int n;
	int m;
	cin>>n>>m;
	if ((n%2 == 0) and (m%2==0))
		cout<<"Si se puede";
	if ((n%2 != 0) and (m%2 != 0))
		cout<<"No se puede";
	if (((n%2 ==0) and (m%2 != 0)) or ((n%2 !=0) and (m%2 == 0)))
		cout<<"Si se puede";	
}
