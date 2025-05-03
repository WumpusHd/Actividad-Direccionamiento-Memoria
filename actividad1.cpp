/*
Autor: Santiago Arango Henao
Código: 8971445

Implementación Actividad 1*/

#include <cstdio>

int main() {
    //Actividad 1
    printf("---ACTIVIDAD 1---");
    int x = 10;
    printf("\nEl valor de x es %d\n", x);
    printf("Dirección de x %p\n", &x);

    int* p = &x;
    *p = 4;
    printf("Nuevo valor de x %d\n", x);
    return 0;
}

