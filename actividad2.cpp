/*
Autor: Santiago Arango Henao
Código: 8971445

Implementación Actividad 2*/

#include <cstdio>

int main() {
    int var = 5;
    int *ptr = &var;
    *ptr = 10;
    
    int &ref = var;
    ref = 15;
    
    printf("Dirección del puntero: %p\n", &ptr);
    printf("Dirección a la que apunta: %p\n", ptr);
    printf("Dirección de la referencia: %p\n", &ref);
    printf("Dirección de la variable original: %p\n", &var);
    
    return 0;
}