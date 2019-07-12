/*link* link::insert(link* n) 
{
	link* p=this;
	if (n==0) return p;
	if (p==0) return n;
	n->succ =p;
	if (p->prev) p->prev->succ=n;
	n->prev=p->prev;
	p->prev=n;
	return n;
}*/

#include<iostream>
#include<string>
using namespace std;

class link{
	public:
		string value;
		link(const string& v, link* p=0, link* s=0)
			:value(v), prev(p), succ(s) {}
		link* insert(link* n);
		link* erase(const string& e);
		link* find(const string& s);
		
		//const link* find(const string& s) const;
		link* next() const {return succ;}
		link* previous() const {return prev;}
		void print(link* n);
	private:
		link* prev;
		link* succ;
};

link* link::insert(link* n) 
{
	link* aux = this;
	if (n==0) return this;
	if (this==0) return n;
	while(aux->succ!=NULL){
		aux=aux->succ;
	}
	//n->succ =this;
	//this->prev =n;
	aux->succ=n;
	n->prev=aux; 
	return this;
}

link* link::find(const string& e){
	link* indice=this;
	//return indice;
	while(indice!=NULL) {
		if(e==indice->value){
		return indice;
		}
		indice=indice->succ;
		//if (indice->succ==NULL){
			//cout<<"No se encuentra";
		//	return NULL;
		//}
	}
	return NULL;
}

link* link::erase(const string& e) 
{
	//Codigo para enlazar los nodos.
	link* aux = this;
	link* temp=aux->find(e);
	cout<<aux->value<<"=="<<temp->value; 
	if (temp){ //encuentra el nodo que se desea eliminar
	if (temp->prev!=NULL && temp->succ!=NULL)//caso 1 con dos nodos a los costados
	{temp->prev->succ=temp->succ;
	temp->succ->prev=temp->prev;
	temp->prev=NULL; temp->succ=NULL;}
	else if (temp->prev!=NULL && temp->succ==NULL)//caso 2 al final
	{temp->prev->succ=NULL;
	temp->prev=NULL;}
	else if(temp->prev==NULL && temp->succ!=NULL)//caso 3 al principio
	{cout<<"Entro";
	aux=aux->succ; 
	temp->succ->prev=NULL;
	temp->succ=NULL;
	delete(temp);
	return aux;
	}
	delete(temp);	
}
	else{
		cout<<"\nNo se encuentra el nodo a eliminar";
	}
	
	return this;	
}

void link::print(link* n){
	link* temp =n;
	while(temp!=NULL){
		cout<<temp->value<<" ";
		temp=temp->succ;
	}
} 

int main(){
	link* valor=0;
	link* valor2=new link("Dos");
	link* valor3=new link("Tres");
	link* valor4=new link("Cuatro");
	link* valor5=new link("Cinco");
	link* valor6=new link("Seis");
	valor = valor->insert(valor2);
	valor = valor->insert(valor3);
	valor = valor->insert(valor4);
	valor = valor->insert(valor5);
	valor = valor->insert(valor6);
	cout<<"La lista enlazada actual es: "; valor->print(valor); 
	link* temp=valor->find("Seis");
	if(temp)
		cout<<"\nEl valor hallado es: "<<temp->value;
	else cout<<"\nNo existe el valor a buscar"<<"\n";
	//temp=valor->find("Tres");
	/*if(temp)
		cout<<"\nEl valor hallado es: "<<temp->value;*/
	valor=valor->erase("Dos"); 
	cout<<"\nLa nueva lista enlazada después de borrar es: ";
	valor->print(valor); 
	return 0;
}
