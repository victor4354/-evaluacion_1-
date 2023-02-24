#include<stdio.h>

/* Este programa permite sumar, restar y multiplicar
    matrices cuadradas bidimensionales */


void int(void)
{
    /* Declaración de variables */
    float a11, a12, a21, a22;               /* La primera matriz */
    float b11, b12, b21, b22;               /* La segunda matriz */
    float suma11, suma12, suma21, suma22;         /* La matriz suma */
    float resta11, resta12, resta21, resta22;       /* La matriz diferencia */
    float producto11, producto12, producto21, producto22; /* La matriz producto */
    /* Lectura de datos */
    
    printf("Programa de cálculo matricial");
    
    printf("\n\nEscriba la primera matriz por filas: ");
    scanf("%f %f %f %f", &a11, &a12, &a21, &a22);
    
    printf("\n\nEscriba la segunda matriz por filas: ");
    scanf("%f %f %f %f", &b11, &b12, &b21, &b22);
    
    /* Cálculo */
    
    
    /*
        Suma
    */
    
    suma11 = a11 + b11;
    suma12 = a12 + b12;
    suma21 = a21 + b21;
    suma22 = a22 + b22;

    /*
        Resta
    */
    
    resta11 = a11 - b11;
    resta12 = a12 - b12;
    resta21 = a21 - b21;
    resta22 = a22 - b22;
    
    /*
        Multiplicación
    */
    
    producto11 = a11*b11 + a12*b21;
    producto12 = a11*b12 + a12*b22;
    producto21 = a21*b11 + a22*b12;
    producto22 = a21*b21 + a22*b22;
    
    /* Impresión de resultados */
    
    printf("\n\nLa matriz suma es como sigue:\n\n");
    printf("(suma11 = %f suma12 = %f)\n(suma21 = %f suma22 = %f)",
         suma11, suma12, suma21, suma22);

    printf("\n\nLa matriz resta es como sigue:\n\n");
    printf("(resta11 = %f resta12 = %f)\n(resta21 = %f resta22 = %f)",
         resta11, resta12, resta21, resta22);

    printf("\n\nLa matriz producto es como sigue:\n\n");
    printf("(producto11 = %f producto12 = %f)\n(producto21 = %f producto22 = %f)",
         producto11, producto12, producto21, producto22);

    printf("\n\nTerminación normal del programa.\n");
}


