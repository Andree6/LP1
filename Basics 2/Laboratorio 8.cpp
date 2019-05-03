#include<iostream>
#include<errno.h>
#include<stdexcept>
using namespace std;

class Bad_area { };

int area (int length, int width)
{
	if (length<=0 || width<=0) throw Bad_Area{};
	return length*width;
}
int main()
try
{
	int x = -1;
	int y = 2;
	int z = 4;
	int area1=area(x, y);
	int area2=framed_area(1, z);
}
catch (exception & e) {
	cout << "Oops! argumentos invalidos para area ()\n";
}
