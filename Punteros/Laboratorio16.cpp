#include<iostream>
#include<vector>
#include<stdexcept>
using namespace std;

struct link{
	string value;
	link* prev;
	link* succ;
	link(const string& v, link* p=0, link* s=0)
		:value(v), prev(p), succ(s){}
};
link* insert(link* p, link* n)
{
	n->succ=p;
	p->prev->succ=n;
	n->prev=p->prev;
	p->prev = n;
	return n; 
}

int main(){
	link* nord_gods=new link("Thor", 0, 0);
	nord_gods=new link("Odin", nord_gods, 0);
	nord_gods->prev->succ=nord_gods;
	nord_gods=new link("Freia", nord_gods, 0);
	nord_gods->prev->succ=nord_gods;
}
