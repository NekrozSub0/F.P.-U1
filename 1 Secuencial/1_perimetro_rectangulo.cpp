#include <iostream>
using namespace std;

//Determinar el perimetro de un rectángulo

int main(){
	int ancho, altura, perimetro;
	cout<<"Ingrese el ancho del rectangulo"<<endl;
	cin>>ancho;
	cout<<"Ingrese la altura del rectangulo"<<endl;
	cin>>altura;
	
	perimetro=2*ancho + 2*altura;
	
	cout<<"El perímetro del rectangulo es: "<<perimetro<<endl;
	
	return 0;
}