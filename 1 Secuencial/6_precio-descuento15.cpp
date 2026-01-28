#include <iostream>
using namespace std;

//Precio final -15% de compra

int main(){
	double compra, preciof;
	cout<<"Ingrese el valor de la compra"<<endl;
	cin>>compra;
	
	preciof=compra-(compra*0.15);
	cout<<"El precio final es de "<<preciof<<endl;
	
	return 0;
}