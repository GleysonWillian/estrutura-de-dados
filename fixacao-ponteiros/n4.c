#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x = 100;
    int *p = &x;
    int **pp = &p;

    printf("Valor de x: %d\n", x);
    printf("Endereco de x: %p\n", &x);
    printf("Valor de p (endereco de x): %p\n", p);
    printf("Valor apontado por p: %d\n", *p);
    printf("Valor de pp (endereco de p): %p\n", pp);
    printf("Valor de pp (conteudo de p): %p\n", *pp);
    printf("Valor apontado por *pp (conteudo de x): %d\n", **pp);

    return 0;
}