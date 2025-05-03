/*Autor Santiago Arango Henao
 * Código 8971445
 * Implementación mostrando el stack, heap y code*/

#include <cstdio>

int global_var = 10; // Al ser una variable global es un dato, entonces se guarda en el segmento de datos

void funcion() {
    int stack_var = 20; // Variable en el stack
    printf("Dirección de stack_var (Stack): %p\n", (void*)&stack_var);
}

int main() {
    int var = 30; //Esta variable al ser local de la función main, se guarda en el stack
    int* heap_var = new int(40); //Al ser un puntero, es decir una variable dinamica, se guarda en el heap

    printf("Dirección de var (Stack): %p\n", (void*)&var);
    printf("Dirección de heap_var (puntero en Stack): %p\n", (void*)&heap_var);
    printf("Dirección a la que apunta heap_var (Heap): %p\n", (void*)heap_var);
    printf("Dirección de global_var (Data segment): %p\n", (void*)&global_var);
    printf("Dirección de main (Code segment): %p\n", (void*)&main);

    funcion();

    delete heap_var;
    return 0;
}
