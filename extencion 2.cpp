#include <iostream>

using namespace std;

int main (){


    int ventas ;
    string comision;
    float monto_comision;
    
    cout<<"ingrese numero de ventas: ";
    cin>>ventas;
    
    if ((ventas >=0 ) && ( ventas < 200)){
	    comision = "0%";
		monto_comision = ventas*0.0;
		}
	else{
		if ((ventas >=201 ) && ( ventas <= 1000)){
			comision = "10%";
			monto_comision= ventas * 0.1;
		}
	else{
		if((ventas >=1001) && ( ventas <= 2000)){
			comision = "15%";
			monto_comision= ventas * 0.15;
		}
	else{
		if((ventas >=2001 ) && ( ventas <= 3000)){
			comision = "20%";
			monto_comision= ventas * 0.2;
		}
	else{
		if ((ventas >=3001 ) && ( ventas <= 4000)){
			comision = "25%";
			monto_comision= ventas * 0.25;
		}
	else{
		if (ventas > 4000){
			comision = "30%";
			monto_comision= ventas * 0.3;
		}
	}
	}
	}
	}
	}
	cout<<"la comision es de: "<<comision<<endl;
	cout<<"el monto de la comision es de: "<<monto_comision;
	
	return 0;
}
