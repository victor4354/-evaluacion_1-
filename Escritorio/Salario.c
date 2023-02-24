#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Se definen las variables que se quieren utilizar
    // para realizar los calculos
    int horas_semana = 0;
    float retencion = 0.0;
    float salario_bruto = 0.0;
    float pesos_retencion = 0.0;
    float salario_neto = 0.0;
    float precio_hora = 0.0;

    // Solicitud de datos
    printf("Horas Trabajadas Semana: ");
    scanf(" %d",&horas_semana);
    printf("Precio Hora: ");
    scanf(" %f",&precio_hora);
    printf("Retencion: ");
    scanf(" %f",&retencion);
    // Realizar calculos
    salario_bruto = horas_semana * precio_hora;
    pesos_retencion = salario_bruto * ( retencion / 100 );
    salario_neto = salario_bruto - pesos_retencion;
    // Visualización de resultados
    printf("=======================================================\n");
    printf("Horas : %d -> Precio Hora: %.2f\n",horas_semana,precio_hora);
    printf("Retencion: %.2f%%   <---> Euros Retenidos: %.2f\n",retencion,euros_retencion);
    printf("=======================================================\n");
    printf("**** Salario Bruto: %.2f\n",salario_bruto);
    printf("**** Salario Neto: %.2f\n",salario_neto);
    return 0;
}

