#include <iostream>
#include <vector>
using namespace std;

int  main (){
	cout << "el tamaño de char es " << sizeof(char) <<' '<<sizeof('a')<<'\n';
	cout << "el tamaño de int es " << sizeof(int) <<' '<<sizeof(2+2)<<'\n';
	int* p=0;
	cout << "el tamaño de int* es " << sizeof(int*) <<' '<<sizeof(p)<<'\n';
	vector<int> v(1000);
	cout << "el tamaño de vector<int>(1000) es " << sizeof(vector<int>) <<' '<<sizeof(v)<<'\n';
}

