/*
Autor: Santiago Arango Henao
Código: 8971445

Implementación Actividad 3*/

#include <cstdio>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    
    int *ptr = arr;
    for(int i = 0; i < 5; i++) {
        *(ptr + i) *= 2;
    }
    
    printf("Dirección del array: %p\n", arr);
    printf("Dirección del puntero: %p\n", &ptr);
    printf("Dirección a la que apunta: %p\n", ptr);
    
    printf("Array modificado: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
