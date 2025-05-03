/*
Autor: Santiago Arango Henao
Código: 8971445

Implementación Actividad 4*/

#include <cstdio>




int main() {
    int filas = 3, columnas = 4;

    //Se separa espacio para la matriz de la cantidad de filas
    //Doble puntero ya que la matriz es de tamaño NxM
    int **matriz = new int*[filas];

    //Por cada fila se separa el espacio para las columnas
    //según la cantidad de columnas, en este caso 4
    for(int i = 0; i < filas; i++)
        matriz[i] = new int[columnas];
    
    //Se inicializa la matriz con valores de 1,2,3,4,etc.
    int contador = 1;
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++)
            matriz[i][j] = contador++;
    }
    
    //Se muestra la matriz
    printf("Matriz creada:\n");
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++)
            printf("%d\t", matriz[i][j]);
        printf("\n");
    }

    //Se elimina el espacio separado para las columnas
    for(int i = 0; i < filas; i++)
        delete[] matriz[i];
    //Se elimina el espacio separado para las filas
    delete[] matriz;
    
    return 0;
}