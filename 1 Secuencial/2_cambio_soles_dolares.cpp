#include <iostream>
using namespace std;

//Convertir una cantidad en soles a dolares

int main(){
	double soles, dolares, tcambio;
	cout<<"Ingrese la cantidad de soles a convertir"<<endl;
	cin>>soles;
	cout<<"Ingrese el tipo de cambio soles a dolares"<<endl;
	cin>>tcambio;
	
	dolares=soles*tcambio;
	cout<<"La cantidad en dolares es "<<dolares<<endl;
	
	return 0;
}