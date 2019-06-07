#include<iostream>
#include<vector>
#include<stdexcept>
using namespace std;

int incr_v(int x) {return x+1;}
int incr_p(int* p) {return ++*p;}
int incr_r(int& r) {return ++r;}

inline void error(const string& s)
{throw runtime_error(s);}

void incr_p(char* p){
	if (p==0) error("puntero_nulo");
	++*p;
}

int main()
try{
	{
		int x=2;
		x=incr_v(x);
	}
	{
		int x=7;
		incr_p(&x);
		incr_r(x);
	}
	{
		char* p=0;
		incr_p(p);
	}
}
catch (exception& e){
	cerr<<"error: "<<e.what()<<'\n';
	return 1;
}
