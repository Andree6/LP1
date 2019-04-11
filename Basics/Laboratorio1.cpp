#include<iostream>
using namespace std;

//Conversiones de tipos no seguras
int main ()
{	double d=0;
	while (cin>>d) {
		int i=d;
		char c=i;
		int i2 = c;
		cout << "d==" << d
			 << "__i==" << i
			 << "__i2==" << i2
			 << "__char("<< c << ")\n";
	}
	double x = 2.7;
	int y=x;
	int a = 1000;
	char b =a;
}
