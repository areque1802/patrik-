#include <iostream>

using namespace std;

int main (){
	int nota_T,nota_M,nota_F;
	float promedio;
	string rendimiento;
	
	cout<< "dijite nota de trabajo: ";
	cin>> nota_T;
	cout<< "dijite nota de medio ciclo: ";
	cin>> nota_M;
	cout<< "dijite nota de fin de ciclo: ";
	cin>> nota_F;
	
	promedio = (nota_T*0.50)+(nota_M*0.20)+(nota_F*0.30);
	
	if ((promedio >= 0 ) && (promedio < 5 )){
		rendimiento ="pesimo";
	}
	else{
		if((promedio >= 6 ) && (promedio < 10 )){
		rendimiento="malo";
	}
	else{
		if((promedio >= 11 ) && (promedio < 15 )){
		rendimiento="regular";
	}
	else{
		if((promedio >= 16 ) && (promedio < 20 )){
		rendimiento="bueno";
	}
	}
	}
	}
	
	cout<<"el promedio del estudiante es de: "<<promedio<<endl;
	cout<<"el rendimiento del estudiante es: "<<rendimiento;
	
	return 0;
}
