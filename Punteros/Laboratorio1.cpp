#include <iostream>
#include <vector>
using namespace std;

int  main (){
	cout << "el tama�o de char es " << sizeof(char) <<' '<<sizeof('a')<<'\n';
	cout << "el tama�o de int es " << sizeof(int) <<' '<<sizeof(2+2)<<'\n';
	int* p=0;
	cout << "el tama�o de int* es " << sizeof(int*) <<' '<<sizeof(p)<<'\n';
	vector<int> v(1000);
	cout << "el tama�o de vector<int>(1000) es " << sizeof(vector<int>) <<' '<<sizeof(v)<<'\n';
}

