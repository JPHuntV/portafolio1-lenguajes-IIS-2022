#ifndef structs
#define structs

struct vacuna
{
    char nombre[50];
    char pais[50];
    char organizacion[50];
};

struct vacunasXPais
{
    char pais[50];
    int poblacion;
    int cantVacunas;
};

struct porcentajeCobertura
{
    char pais[50];
    float porcentaje;
};






#endif