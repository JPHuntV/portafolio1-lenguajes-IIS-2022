/*
Jean Hunt
Lenguajes de programación
Semestre 2 2022

Ejercicio 6

Crear un struc animal e imprimir sus atributos

*/

#include <stdio.h>
#include <stdlib.h>

struct tipoAnimal
{
    char familia[50];
    char orden[50];
};

struct animal
{
    struct tipoAnimal tipo;
    char nombre[50];
};

void imprimirAnimal(struct animal *pAnimal);

int main()
{
    struct tipoAnimal tipos[2] = {{"Felidos", "Carnivoros"}, {"Galinaceas","Tetraínidos"}};
    struct animal animales[2] = {{tipos[0], "Gato"},{tipos[1],"Urogallo"}};

    for (int i = 0; i < 2 ; i++)
    {
        imprimirAnimal(&animales[i]);
    }

    return 0;
}

void imprimirAnimal(struct animal *pAnimal)
{
    printf("Familia: %s\tOrden: %s\tNombre: %s\n",pAnimal->tipo.familia, pAnimal->tipo.orden, pAnimal->nombre);
    return;
}
