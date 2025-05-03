/*
Autor: Santiago Arango Henao
Código: 8971445

Implementación Actividad 4*/

#include <cstdio>

int main() {
    int filas = 3, columnas = 4;
    int **matriz = new int*[filas];
    for(int i = 0; i < filas; i++)
        matriz[i] = new int[columnas];
    
    int contador = 1;
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++)
            matriz[i][j] = contador++;
    }
    
    printf("Matriz creada:\n");
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++)
            printf("%d\t", matriz[i][j]);
        printf("\n");
    }

    for(int i = 0; i < filas; i++)
        delete[] matriz[i];
    
    delete[] matriz;
    
    return 0;
}