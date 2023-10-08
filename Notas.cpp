#include <iostream>
using namespace std;
main(){
	cout<<"Bienvenido"<<endl;
	int n1, n2, n3, n4, pro;
	cout<<"Ingrese nota 1:"<<endl;
	cin>>n1;
	cout<<"Ingrese nota 2:"<<endl;
	cin>>n2;
	cout<<"Ingrese nota 3:"<<endl;
	cin>>n3;
	cout<<"Ingrese nota 4:"<<endl;
	cin>>n4;
	pro= (n1+ n2 + n3 + n4)/4;
	cout<<"Su nota es:"<<pro<<endl;
	if (pro>=61){
		cout<<"Aprobada";
	}else{
		cout<<"Reprobada";
	}
}
