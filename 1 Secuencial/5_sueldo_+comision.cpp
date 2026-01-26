#include <iostream>
using namespace std;

//Sueldo + comisiones, comision=10% de venta, 3 ventas en mes

int main(){
	double sueldo, venta1, venta2, venta3, sueldof;
	
	cout<<"Ingrese el sueldo base"<<endl;
	cin>>sueldo;
	cout<<"Ingrese la venta 1: "<<endl;
	cin>>venta1;
	cout<<"Ingrese la venta 2: "<<endl;
	cin>>venta2;
	cout<<"Ingrese la venta 3: "<<endl;
	cin>>venta3;
	
	sueldof=sueldo+(venta1*0.1+venta2*0.1+venta3*0.1);
	cout<<"El trabajador al final del mes recibira "<<sueldof;
	
	return 0;
}