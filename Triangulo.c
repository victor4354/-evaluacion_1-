//Programa:Triangulo.c
//Permite calcular el area de un triangulo
//Al recibir los valores de area y base
#include <stdio.h>

#include <stdlib.h>



using namespace std;



int main( ) {

float base, altura , resultado;

for (int contador=1;contador<4;contador++){

printf("Escribe la base\n");

scanf("%f",&base);

printf("Escribe la altura\n");

scanf("%f",&altura);

printf("El área del triángulo es %.2f\n",(base*altura)/2);

}

return 0;

}
