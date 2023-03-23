#include <iostream>

 
 using namespace std;
 
 int main() {
 	
 	int sueldo_A;
 	float sueldo_fin , aumento;
 	
 	cout<<"ingrese sueldo: ";
 	cin>>sueldo_A;
 	
 	if ((sueldo_A >= 0 ) && ( sueldo_A <= 800 )){
 		aumento = sueldo_A * 0.2;
	 }
	else{
		if  ((sueldo_A >= 801 ) && ( sueldo_A <= 1000 )){
 		aumento = sueldo_A * 0.1;
	 }
	else {
		if  ((sueldo_A >= 1001 ) && ( sueldo_A <= 1500 )){
 		aumento = sueldo_A * 0.05;
	 }
	 else {
	 	if  (sueldo_A > 1500 ){
 		aumento = sueldo_A * 0.0;
	 }
	}
	}
	}
	
	sueldo_fin = sueldo_A + aumento;
 	
    cout<< "el aumento es:"<<endl<<aumento<<endl;
    cout<< "el sueldo mas el aumento es: "<<endl<<sueldo_fin;

 return 0;	
 }

