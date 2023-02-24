//Programa:cuadrado.c
//Permite calcular area de un triangulo
//Para poder caulcuar esto nesesita que se le aporte una base y una altura
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int lado,area;
    cout<<"Ingrese la Lado "<<endl;
    cin>>lado;
    area=lado*lado;
    cout<<"El area de un cuadrado  es :"<<area<<endl;
    return 0;
}
