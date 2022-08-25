/*
Jean Hunt
Lenguajes de programación
Semestre 2 2022

Ejercicio 5

mostrar un menu de vacunas
usar switch , structs y encabezados
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include "structs.h"



void menuVacunas();
void incluirVacuna();
void incluirVacunaxPais();
void incluirCobertura();
void pausa();

int main(){
    menuVacunas();
    return 0;
}

//despliega el menu y llama a las respectivas funciones
void menuVacunas(){

    char opcion;
    char repetir = 1;
    do{
        
        printf("#####   Menú vacunas   #####\n\n");
        printf("A)Incluir vacunas admitidas por país. \n");
        printf("B)Incluir cantidad de vacunas aplicadas por población de país\n");
        printf("C)Incluir porcentaje de cobertura por país.\n");
        printf("S)Salir\n");
        printf("#############################\n");
        printf("Seleccione una opción:\t");

        scanf(" %c", &opcion);
        switch (opcion)
        {
        case 'A':
            
            incluirVacuna();
            break;
        
        case 'B':
            incluirVacunaxPais();
            break;
        
        case 'C':
            incluirCobertura();
            break;

        case 'S':
            exit(0);
        
        default:
            break;
        }
    }while(repetir);
    return;
}

//incluir vacunas admitidas por pais
void incluirVacuna(){
    system("clear");
    struct vacuna vacunax;

    printf("\nIngrese el nombre de la vacuna:");
    scanf(" %[^\n]", vacunax.nombre);

    printf("\nIngrese el nombre del país:");
    scanf(" %[^\n]", vacunax.pais);

    printf("\nIngrese el nombre de la organización:");
    scanf(" %[^\n]", vacunax.organizacion);

    printf("\n\nVacuna:%s%sPaís:%s%sOrganización:%s\n", vacunax.nombre,"\t", vacunax.pais,"\t", vacunax.organizacion);
    pausa();
    return;
}

//incluir vacunas aplicadas por población
void incluirVacunaxPais(){
    system("clear");
    struct vacunasXPais vacunaP;

    printf("\nIngrese el nombre del país:");
    scanf(" %[^\n]",vacunaP.pais);

    printf("\nIngrese la población del pais:");
    while(scanf(" %d", &vacunaP.poblacion)!=1){
        while (getchar()!='\n');
            printf("Dato incorrecto");
            printf("\n\nIngrese la población del pais:");
        
    }

    printf("\nIngrese la cantidad de vacunas:");
    while(scanf(" %d", &vacunaP.cantVacunas)!=1){
        while (getchar()!='\n');
            printf("Dato incorrecto");
            printf("\n\nIngrese la cantidad de vacunas:");
    }

    printf("\n\nPais: %s \tPoblación: %d \tCantidad de vacunas:%d\n\n", vacunaP.pais,vacunaP.poblacion, vacunaP.cantVacunas);
    pausa();
    return;
}

//porcentaje de cobertura por pais
void incluirCobertura(){
    system("clear");
    struct porcentajeCobertura cobertura;

    printf("\nIngrese el nombre del país:");
    scanf(" %[^\n]",cobertura.pais);

    printf("\nIngrese el porcentaje de cobertura:");
    while(scanf(" %f", &cobertura.porcentaje)!=1){
        while (getchar()!='\n');
            printf("Dato incorrecto");
            printf("\n\nIngrese el porcentaje de cobertura:");
    }

    printf("\n\nPais: %s\tCobertura: %f\n\n", cobertura.pais, cobertura.porcentaje);
    pausa();
    return;
}



//pausa el programa hasta presionar enter
void pausa(){
    getchar();
    printf("\n\nPresione enter para continuar....");
    getchar();
    system("clear");
    return;
}