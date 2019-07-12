/** @file factory_method_flor.cpp
@author Walker Manrique
@version Revision 1.1
@brief implementacion de la clase flor para la creacion de flores en Glut OpenGL
*/
#include "factory_method_flor.h"

flor_bonita::flor_bonita(int petal){
    petalos = petal;
}
flor_bonita::~flor_bonita(){

}
void flor_bonita::drawn(plano p,int x,int y){
    p.move(x, y);
    for(int i = 0; i < petalos; i++){
        p.left(90);
        p.forward(30);
        p.right(90);
        p.forward(30);
        p.right(90);
        p.forward(30);
        p.right(90);
        p.forward(30);
        p.right(150);
    }
}


flor_fea::flor_fea(int petal){
    petalos = petal;
}
flor_fea::~flor_fea(){

}
    
void flor_fea::drawn(plano p,int x,int y){
    p.move(x, y);
    for(int i = 0; i < petalos; i++){
        p.left(90);
        p.forward(50);
        p.right(90);
        p.forward(50);
        p.right(90);
        p.forward(50);
        p.right(90);
        p.forward(50);
        p.right(150);
    }
}


flor_regular::flor_regular(int petal){
    petalos = petal;
}
flor_regular::~flor_regular(){

}
void flor_regular::drawn(plano p,int x,int y){
    p.move(x, y);
    for(int i = 0; i < petalos; i++){
        p.left(90);
        p.forward(10);
        p.right(90);
        p.forward(10);
        p.right(90);
        p.forward(10);
        p.right(90);
        p.forward(10);
        p.right(150);
    }
}

//Mio
flor_lp1::flor_lp1(){
    //petalos = petal;
}
flor_lp1::~flor_lp1(){
}
void flor_lp1::drawn(plano p, int x,int y){
    	p.move(x, y);
    	int cont=0;
	//Primera parte de la rama
	p.set_color(0, 255, 0);
	p.left(30);
	for (int i=0; i<30; i++){
	p.forward(7);
	p.left(cont+2);}
	//Petalos
	//int contp=131/petalos;
	for (int i=0; i<131; i++)
	{
	p.set_color(1, 1, 1);
	if (i==0 || i==52 || i==78 || i==104 || i==130)
	{p.right(193);
	for (int i=0; i<26; i++){
	p.forward(10);
	p.right(cont+9);
	}}
	}
	//Segunda parte de la rama
	p.set_color(0, 255, 0);
	p.left(139);
	for (int i=0; i<13; i++){
	p.forward(20);
	p.right(cont+3);}
	////Circulo en el centro de la flor
	p.set_color(243, 255, 0);
	p.move(-15,60);
	p.forward(6);
	for(int i=0; i<30;i++){
	int cont=0;
	p.forward(15);
	p.right(cont+20);} 
}
void flor_lp1::drawncopo(plano p, int x,int y){
	int contx=x; //-240
	int conty=y; //420
	int random=0;
	for (int k=0; k<11; k++){ //Caida de los copos
	for (int l=0; l<2; l++){  //Cantidad de filas de copos
	for (int j=0; j<4; j++){  //Cantidad de columnas de copos
	for (int i=0; i<3; i++){  //Dibuja copo
	p.forward(30);
	p.left(60);
	p.forward(30);
	p.right(120);
	p.forward(30);
	p.left(60);
	p.forward(30);
	p.right(120);}
	contx=contx+140;
	p.move(contx, conty); 
	if (j==3)
	{contx=-240; 
	conty=conty-120;
	p.move(contx, conty);}
	}}
	p.clear();
	contx=x;
	conty=y;
	random=random+70;
	conty=conty-random;
	p.move(contx, conty);
	}
}
void flor_lp1::drawnarbol(plano p, int x,int y, int n){
	p.move(x,y);
	p.left(90);	int cont=0; for(int i=0; i<28; i++){p.forward(7);} //Tallo
	int nivel=n; 
	int ramas=180/4;
	if (nivel==1){
	p. left(90); //Aqui esta en linea izquierda; p.right(180); p.forward(40);
	for (int i=0; i<3; i++){
	p.right(ramas);
	p.forward(80);
	p.right(180);
	p.forward(80);
	p.left(180);
	}}
	if (nivel==2){
	p. left(90); //Aqui esta en linea izquierda; p.right(180); p.forward(40);
	for (int i=0; i<3; i++){
	p.right(ramas);
	p.forward(80);
	p.left(90);
	for (int j=0; j<3; j++){//2do For
	p.right(ramas);
	p.forward(80);
	p.right(180);
	p.forward(80);
	p.left(180);
	if (j==2){p.right(135);}
	}//Fin 2do For
	p.forward(80);
	p.left(180);
	}}
	if (nivel==3){
	p. left(90); //Aqui esta en linea izquierda; p.right(180); p.forward(40);
	for (int i=0; i<3; i++){
	p.right(ramas);
	p.forward(80);
	p.left(90);
	for (int j=0; j<3; j++){//2do For
	p.right(ramas);
	p.forward(80);
	p.left(90);
	for(int k=0; k<3; k++){ //3er For
	p.right(ramas);
	p.forward(80);
	p.right(180);
	p.forward(80);
	p.left(180);
	if (k==2){p.right(135);}} //Fin 3er For 
	p.forward(80);
	p.right(180);
	if (j==2){p.right(135);}
	}//Fin 2do For
	p.forward(80);
	p.left(180);
	}}
}