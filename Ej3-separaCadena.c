/*
Jean Hunt
Lenguajes de programación
Semestre 2 2022

Ejercicio 3

Recibe una cadena, la separa por espacios y crea una lista, imprime la lista
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **separarCadena(char *cadena);
void imprimirCadena(char **pLista);

int main(){
    char cadena[]= "Hola soy una cadena";
    char **pLista = separarCadena(cadena); 
    imprimirCadena(pLista);
    return 0;
}


//imprime la lista de subcadenas
void imprimirCadena(char **pLista){
    int i = 0;
    while(pLista[i]!= NULL){
        printf("Cadena[%d] = %s\n", i, pLista[i]);
        ++i;
    }
    return;
}

//separa la cadena por espacios y crea un arreglo de subcadenas
char **separarCadena(char *cadena){
    char *token =strtok(cadena," ");
    char **lista= NULL;
    int tamanio = 0,i;
    while(token !=NULL){
        lista = realloc(lista, sizeof(char*)* ++tamanio);
        lista[tamanio-1] = token;
        token = strtok(NULL, " ");
    }
    lista;

    return(lista);

}