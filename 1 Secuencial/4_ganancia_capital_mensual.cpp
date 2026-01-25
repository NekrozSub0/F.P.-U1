#include <iostream>
using namespace std;

//Inversiósn de capital, ganancia despues de 1 mes a tasa mensual 2%

int main(){
	double capital, ganancia;
	cout<<"Ingrese el capital a invertir"<<endl;
	cin>>capital;
	
	ganancia=capital*0.02;
	cout<<"La ganancia en 1 mes es de: "<<ganancia<<endl;
	
	return 0;
}