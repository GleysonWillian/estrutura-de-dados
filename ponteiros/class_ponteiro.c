#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var = 15;
    int *car;
    
    car = &var;

    printf("Valor de var = %d\n", var);
    printf("Valor do endereco de var = %p\n", &var);
    // endereço da variável apontado pelo ponteiro:
    printf("Valor de car = %d\n", *car);
    // endereço da variável:
    printf("Valor de car = %p\n", car);
    // endereço do ponteiro:
    printf("Valor de car = %p", &car);

    return 0;
}