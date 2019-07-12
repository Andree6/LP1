#include "plano.h"
#include "factory_method_flor.h"
#include "flyweight_nieve.h"
#include <iostream>

int main(int argc, char **argv)
{
	plano p(700, 500);
	p.display(argc, argv);
	flor*  f=new flor_lp1();
	//f->drawn(p, -160,-197); //Flor
	//f->drawncopo(p,-240, 420); //Copos de Nieve que caen
	f->drawnarbol(p,-20,-197, 3);//Arbol, Nivel de arbol 1, 2 y 3.
	glutMainLoop();
}

