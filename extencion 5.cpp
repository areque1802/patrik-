#include <iostream>
#include <math.h>
using namespace std;

int main (){
	int a , b,c,d,m,f;
	int x;
	
	cout<<"dijite dos numero 1 : "<<endl;
	cin>>a;
	cout<<"dijite numero 2: "<<endl;
	cin>>b;
	
    c = pow(a,2);
	d = pow(b,2);
	
	f = (c-d);
	
	if  ( f < 0 ){
		x = 2*a - b;
	}
	else{
		if (f = 0){
			x = pow(a,2) - 2*b;
	}
	else{
		if (f > 0){
			x = a + b ;
		}
	}
	}
   
	cout<<"el valor de la funcion es: "<<x;
	
	return 0;
}
