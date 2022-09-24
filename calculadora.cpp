//Programa que presenta las operaciones básicas
//Creado por Stalin Francis 
//Fecha: 14-09-2022

#include<iostream>
using namespace std;

int main()
{
	float NACJ_x,NACJ_y,NACJ_s,NACJ_m,NACJ_d,NACJ_r;
	//Ingreso de datos
	cout<<"Ingrese en valor de x=:";
	cin>>NACJ_x;
	cout<<"Ingrese en valor de y=:";
	//Operaciones 
	cin>>NACJ_y;
	NACJ_s=NACJ_x+NACJ_y;
	NACJ_m=NACJ_x*NACJ_y;
	NACJ_d=NACJ_x/NACJ_y;
	NACJ_r=NACJ_x-NACJ_y;
	//Muestra los resutaldos.
	cout<<"Las suma de "<<NACJ_x<<" + "<<NACJ_y<<" = "<<NACJ_s<<endl;
	cout<<"Las multiplicacion de "<<NACJ_x<<" * "<<NACJ_y<<" = "<<NACJ_m<<endl;
	cout<<"Las division de "<<NACJ_x<<" / "<<NACJ_y<<" = "<<NACJ_d<<endl;
	cout<<"Las resta de "<<NACJ_x<<" - "<<NACJ_y<<" = "<<NACJ_r<<endl;
	return 0 ;

}

