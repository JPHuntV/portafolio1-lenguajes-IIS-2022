/*
Jean Hunt
Lenguajes de programación
Semestre 2 2022

Ejercicio 4

Recibe un numero y muestra el fibonacci de ese numero 
*/
#include <stdio.h>

void fibonacci(int* n);

//solicita un numero 
int main() {
  int n;
  printf("Fibonacci de:  ");
  scanf("%d", &n);
  fibonacci(&n);
  return 0;
}
//imprime la serie fibonacci hasta n repeticiones
void fibonacci(int* n){
    int termino1 = 0, termino2 = 1;

    int siguienteTermino = termino1 + termino2;
    printf("Fibonacci: %d, %d ", termino1, termino2);
    for (int i = 3; i <= *n; ++i) {
        printf(",%d ", siguienteTermino);
        termino1= termino2;
        termino2 = siguienteTermino;
        siguienteTermino = termino1 + termino2;
    }
    return;
}
