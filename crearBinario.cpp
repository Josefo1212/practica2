#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

struct persona{
    char nombre[200];
    int cedula,edad,id;
    float peso,altura;
    char genero;
}p;

int main(){
    int x;
    fstream FILE("./archivo.bin", ios::out|ios::binary);

    cout<<"Ingrese la cantidad de resgistros: ";
    cin>>x;

    for(int i=0;i<x;i++){
        p.id=i+1;
        cout<<"Ingrese el nombre: ";
        cin>>p.nombre;
        cout<<"Ingrese la cedula: ";
        cin>>p.cedula;
        cout<<"Ingrese la edad: ";
        cin>>p.edad;
        cout<<"Ingrese altura: ";
        cin>>p.altura;
        cout<<"Ingrese el peso: ";
        cin>>p.peso;
        cout<<"Ingrese el genero H o M: ";
        cin>>p.genero;
        FILE.write(reinterpret_cast<char *>(&p), sizeof(p));
      
    }  
    FILE.close();
    return 0;
}