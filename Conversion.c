//Programa:Conversion.c
//Permite convertir grados Celsius a Fahrenheit
//Al recibir los valores de grados Celsius y grados Fahrenheit
#include <stdio.h>

float fahrenheitACelsius(float fahrenheit) {
    return (fahrenheit - 32) / 1.8f;
}

float celsiusAFahrenheit(float celsius) {
    return (celsius * 1.8f) + 32;
}


int main(void) {
    printf("30 grados C a F: %f\n", celsiusAFahrenheit(30.0f));
    printf("86 grados F a C: %f\n", fahrenheitACelsius(86.0f));
    float fahrenheit = 0, celsius = 0;// Aquí almacenaremos las variables del usuario
    printf("Dime los grados F:\n");
    scanf("%f", &fahrenheit);
    float equivalencia = fahrenheitACelsius(fahrenheit);
    printf("Equivalen a %f\n", equivalencia);
    printf("Dime los grados C:\n");
    scanf("%f", &celsius);
    equivalencia = celsiusAFahrenheit(celsius);
    printf("Equivalen a %f\n", equivalencia);
}
