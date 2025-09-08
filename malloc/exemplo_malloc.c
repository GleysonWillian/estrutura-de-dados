#include <stdio.h>

int main()
{

    int *x;

    x = malloc(sizeof(int));

    if (x)
    {
        printf("Memoria alocado com sucesso!\n");
        *x = 50;
        printf("x: %d\n", *x);
    }
    else
    {
        printf("Erro ao alocar memoria!\n");
    }


    return 0;
}