#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho_atual = 3;

    int *meu_array = malloc(tamanho_atual * sizeof(int));
    if (meu_array == NULL)
    {
        printf("erro ao alocar memória\n");
        return 1;
    }

    meu_array[0] = 5;
    meu_array[1] = 10;
    meu_array[2] = 15;

    printf("Meus arrays inciais: %d, %d, %d\n", meu_array[0], meu_array[1], meu_array[2]);

    printf("Adicionando mais um array\n");

    tamanho_atual = 4;

    meu_array = realloc(meu_array, tamanho_atual * sizeof(int));
    if (meu_array == NULL)
    {
        printf("erro ao realocar memória\n");
        return 1;
    }

    meu_array[3] = 20;

    printf("Meus arrays finais: %d, %d, %d, %d\n", meu_array[0], meu_array[1], meu_array[2], meu_array[3]);

    free(meu_array);

    return 0;
}