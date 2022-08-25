/*
Jean Hunt
Lenguajes de programación
Semestre 2 2022

Ejercicio 1

Realizar un programa que retorne la fecha en formato dd-MM-yyyy HH:mm:ss
*/
#include<stdio.h>
#include<time.h>


int main ()
{
    time_t tiempo;
	struct tm *pTiempo;
    char res [80];

    time(&tiempo);
    pTiempo = localtime(&tiempo);

    strftime(res,80,"%d-%m-%Y\t%H:%M:%S",pTiempo);
    puts(res);

    return 0;
}

