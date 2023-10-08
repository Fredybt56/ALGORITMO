#include <iostream>
using namespace std;
//metodos
	void suma2(int &num1,int &num2){
	int resultado = 0;
	num1+=1;
	num2+=1;
	resultado = num1+num2;
    cout<<resultado<<endl;
}
//funcionm que sume dos valores
int suma3(int num1,int num2,int num3){
	int resultado = 0;
	resultado = num1+num2+num3;
	return resultado;
}
main(){
	int a=10, b=20;
	suma2(a,b);
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b<<endl;
	cout<<suma3(20,10,20)<<endl;
	system("pause");
}
//Estructuras
struct Estudiante{
     int codigo;
    string nombre;
     int nota;
 };
struct Estudiante{
    int *codigo;
    string *nombre;
    int **notas;
};

int main(){
    Estudiante estudiante;
     for (int i = 0; i < 4; i++){
         cout<<"---------------------------"<<endl;
         cout<<"Ingrese código: "<<i+1<<endl;
         cin>>estudiante.codigo[i];
         cin.ignore();
         cout<<"Ingrese nombre completo: "<<i+1<<endl;
         getline(cin,estudiante.nombre[i]);
         cout<<"Ingrese nota: "<<i+1<<endl;
         cin>>estudiante.nota[i];
     }
     cout<<"-------------------Datos Almacenados"<<endl;
     for (int i = 0; i < 4; i++){
         cout<<"Codigo: "<<estudiante.codigo[i]<<endl;
         cout<<"Nombre: "<<estudiante.nombre[i]<<endl;
        cout<<"Nota: "<<estudiante.nota[i]<<endl;   
     }

    int fila=0, columna =0;
    cout<<"Cuantos estudiantes desea agregar: "<<endl;   
    cin>>fila;
    cout<<"Cuantas notas desea agregar: "<<endl;   
    cin>>columna;
//capturar data
    estudiante.codigo = new int[fila];
    estudiante.nombre = new string[fila];
    estudiante.notas = new int*[fila];

    for (int i = 0; i < fila; i++){
        estudiante.notas[i] = new int[columna];
    }
    cout<<"_____Ingreso de notas_______"<<endl;
    for (int i = 0; i < fila; i++){
        cout<<"Codigo: ["<<i+1<<"]"<<endl;
        cin>>estudiante.codigo[i];
        cin.ignore();
        cout<<"Nombre completo: ["<<i+1<<"]"<<endl;   
        getline(cin,estudiante.nombre[i]);
        
        for (int ii = 0; ii < columna; ii++){
            cout<<"Ingrese nota: ["<<ii+1<<"]"<<endl;
            cin>>((estudiante.notas+i)+ii);
        }
        
    cout<<"_________"<<endl;
    }

    cout<<"____Mostrar datos_____"<<endl;

    for (int i = 0; i < fila; i++){
        cout<<"Codigo: ["<<i+1<<"] "<<estudiante.codigo[i]<<endl;
        cout<<"Nombre completo: ["<<i+1<<"] "<<estudiante.nombre[i]<<endl;
        for (int ii = 0; ii < columna; ii++){
            cout<<"Ingrese nota: ["<<ii+1<<"]"<<((estudiante.notas+i)+ii)<<endl;         
        }
        
    cout<<"_________"<<endl;
    }
//eliminar caché
    for (int i = 0; i < fila; i++){
        delete[] estudiante.notas[i];
    }
    delete[] estudiante.codigo;
    delete[] estudiante.nombre;
    delete[] estudiante.notas ;


system("pause");
}
