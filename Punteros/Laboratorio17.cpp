#include<iostream>
#include<vector>
#include<stdexcept>
using namespace std;

class link{
	public:
		string value;
		link(const string& v, link* p=0, link* s=0)
			:value(v), prev(p), succ(s) {}
		link* insert(link* n);
		link* erase();
		link* find(const string& s);
		const link* find(const string& s) const;
		link* next() const {return succ;}
		link* previous() const {return prev;}
	private:
		link* prev;
		link* succ;
};

link* link::insert(link* n) 
{
	if (n==0) return this;
	if (this==0) return n;
	n->succ =this->prev;
	this->prev =n;
	return n;
}

link* link::insert(link* n) 
{
	link* p=this;
	if (n==0) return p;
	if (p==0) return n;
	n->succ =p;
	if (p->prev) p->prev->succ=n;
	n->prev=p->prev;
	p->prev=n;
	return n;
}
