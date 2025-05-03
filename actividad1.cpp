/*
Autor: Santiago Arango Henao
Código: 8971445

Implementación Actividad 1*/

#include <cstdio>

int main() {
    int num = 10;
    printf("Valor inicial: %d\n", num);
    printf("Dirección de memoria: %p\n", &num);
    
    int *ptr = &num;
    *ptr = 20;
    
    printf("Nuevo valor: %d\n", num);
    printf("Dirección de memoria (misma): %p\n", &num);
    
    return 0;
}