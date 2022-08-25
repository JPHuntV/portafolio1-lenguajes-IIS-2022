/*
Jean Hunt
Lenguajes de programación
Semestre 2 2022

Ejercicio 2

solicite un numero

solicitar n cantidad de numeros

imprimirlos indicando la posición
*/

#include <stdio.h>
int main()
{
    int num;
    printf("Indique el largo del arreglo: ");
    scanf("%d", &num);
    
	int lista[num];
	int temp;
	for(int i = 0; i< num;++i ){
		printf("Indique un numero: ");
    	scanf("%d", &temp);
		lista[i] = temp;  
	}
	printf("\nEl arreglo quedó de la siguiente manera:\n");
	for(int j = 0; j< num;j++ ){
		printf("Posición [%d]: ",j);
		printf(" es %d\n",lista[j]);
	}
	return 0;
}
