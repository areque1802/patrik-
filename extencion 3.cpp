#include <iostream>

using namespace std;

int main (){
	
	int num_1,num_2,num_3,num_4,num_5;
	int num_mayor;
	
	cout<<"dijite 5 numero enteros: "<<endl;
	cin>>num_1;
	cin>>num_2;
	cin>>num_3;
	cin>>num_4;
	cin>>num_5;
	
	if ((num_1 > num_2 ) && (num_1 > num_3 ) && (num_1 > num_3 ) && (num_1 > num_5 )){
		num_mayor = num_1;
	 }
	else{
		if ((num_2 > num_1 ) && (num_2 > num_3 ) && (num_2 > num_4 ) && (num_1 > num_5 )){
		num_mayor = num_2;
	 }
	else{
		if ((num_3 > num_1 ) && (num_3 > num_2 ) && (num_3 > num_4 ) && (num_3 > num_5 )){
		num_mayor = num_3;
	}
	else{
		if ((num_4 > num_1 ) && (num_4 > num_2 ) && (num_4 > num_3 ) && (num_4 > num_5 )){
		num_mayor = num_4;
	}
	else{
		if ((num_5 > num_1 ) && (num_5 > num_2 ) && (num_5 > num_3 ) && (num_5 > num_4 )){
		num_mayor = num_5;
	}
	}
	}
	}
	}
	cout<<"el numero mayor es: "<<num_mayor;

return 0;
}
