#include <stdio.h>
#include <stdlib.h>

int main() {

    int idade = 18;
    int *p = &idade;
    int **pp = &p;

    printf("Antes: idade = %d\n", idade);

    **pp = 25;

    printf("Depois: idade = %d\n", **pp);

    return 0;
}