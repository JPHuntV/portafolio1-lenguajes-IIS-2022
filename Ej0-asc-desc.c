/*
Jean Hunt
Lenguajes de programación
Semestre 2 2022

Ejercicio 0

Desarolle un programa que lea tres múmeros y reciba 
como parámetro si los muestra de manera ascendente on descendente
*/
#include <stdio.h>

int * ordenarAsc(int *numeros);
int * ordenarDesc(int *numeros);


//solicita los numeros y el orden en el que se deben ordenar
int main()
{
    int num1, num2, num3, i ,j,orden;
    
    printf("Ingrese el numero 1: ");
    scanf("%d", &num1);
    
    printf("Ingrese el numero 2: ");
    scanf("%d", &num2);
    
    printf("Ingrese el numero 3: ");
    scanf("%d", &num3);

    int numeros[] = {num1, num2, num3};
    int *ordenada;
    
    
    printf("\nDe que manera quiere ordenar estos números?:\n1.Ascendente\n2.Descendente\nOtro: Salir\n\nOpción: ");
    scanf("%d", &orden);
    
    if(orden == 1){
        ordenada = ordenarAsc(numeros);
    }else if(orden == 2){
        ordenada = ordenarDesc(numeros);
    }else{
        return 0;
    }
    printf("Numeros ordenados:\n");
    for(i = 0; i <= 2; i += 1){
        printf("%d\n", numeros[i]);
    }
    
}

//ordena los numeros de manera ascendente
int * ordenarAsc(int *numeros){
    int i, j, ordenada;
    for(i = 0; i <= 2; i += 1) {
            for(j = i; j <= 2; j += 1) {
                if(numeros[i] > numeros[j]){
                    ordenada = numeros[i];
                    numeros[i] = numeros[j];
                    numeros[j] = ordenada;
                }
            }
        }
}

//ordena los numeros de manera ascendente
int * ordenarDesc(int *numeros){
    int i, j, ordenada;
    for(i = 0; i <= 2; i += 1) {
            for(j = i; j <= 2; j += 1) {
                if(numeros[i] < numeros[j]){
                    ordenada = numeros[i];
                    numeros[i] = numeros[j];
                    numeros[j] = ordenada;
                }
            }
        }
}