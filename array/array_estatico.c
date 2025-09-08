#include <stdio.h>

int main()
{

    int meu_array_estatico[3] = {10, 20, 30};

    printf("Conteudo inicial: %d, %d, %d\n", meu_array_estatico[0], meu_array_estatico[1], meu_array_estatico[2]);

    printf("Elemento no indice 1: %d\n", meu_array_estatico[1]);
    meu_array_estatico[1] = 25;
    printf("Conteudo apos modificacao: %d, %d, %d\n", meu_array_estatico[0], meu_array_estatico[1], meu_array_estatico[2]);

    return 0;
}