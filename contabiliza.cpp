#include<iostream>
using namespace std;

int main()
{
	int NACJ_i=0,NACJ_l;
	float NACJ_x,NACJ_s=0;
	cout<<"ingrese el limite l="; cin>>NACJ_l;
	do{
		
	cout<<"ingrese el numero x="; cin>>NACJ_x;
	NACJ_i=NACJ_i+1;
	NACJ_s=NACJ_s+NACJ_x;



	}while(NACJ_i<NACJ_l);
	cout<<"Se ingresaron "<<NACJ_l<<" numeros "<< "que sumaron "<<NACJ_s<<endl;
	return 0;



}
