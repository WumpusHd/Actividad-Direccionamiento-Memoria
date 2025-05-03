/*
Autor: Santiago Arango Henao
Código: 8971445

Implementación Actividad 2*/

#include <cstdio>

int main() {
    //Actividad 2
    printf("---ACTIVIDAD 2---\n");
    int var = 5;
    int* p1 = &var;

    printf("El valor de var es %d\n", var);
    printf("Dirección de var %p\n", &var);
    
    int &ref = var;
    ref +=1;
    
    printf("El valor de var es %d\n", var);
    printf("El valor de ref es %d\n",ref);
    return 0;
}

