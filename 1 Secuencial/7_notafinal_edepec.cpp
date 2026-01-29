#include <iostream>
using namespace std;

//7 calificacion final, 3 notas, EC 40%, ED 35%, EP 25%

int main(){
	double notaf, nec, ned, nep;
	cout<<"Ingrese la evaluacion de conocimiento: "<<endl;
	cin>>nec;
	cout<<"Ingrese la evaluacion de desempeño: "<<endl;
	cin>>ned;
	cout<<"Ingrese la evaluacion de producto: "<<endl;
	cin>>nep;
	
	notaf=(nec*0.4)+(ned*0.35)+(nep*0.25);
	cout<<"La nota final del estudiante es de: "<<notaf<<endl;	
	
	return 0;
}