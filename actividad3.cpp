/*
Autor: Santiago Arango Henao
Código: 8971445

Implementación Actividad 3*/

#include <cstdio>

int main() {
    int arr[5] = {4, 10, 23, 15, 2};
    
    //Se hace de esta manera ya que los arreglos guardan primero la dirección
    //donde comienza el arreglo y a partir de esa dirección se suma el offset
    //para acceder a los elementos hasta el tamaño del arreglo definido
    int *p = arr;
    for(int i = 0; i < 5; i++)
        *(p + i) *= 2;

    printf("Dirección del array: %p\n", arr);
    printf("Dirección del puntero al array: %p\n", &p);
    printf("Dirección a la que apunta: %p\n", p);
    
    printf("Array modificado: ");
    for(int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    printf("\n");
    
    return 0;
}