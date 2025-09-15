#include <stdio.h>
#include <stdlib.h>

int main() {

    int x = 10;
    int *p = &x;

    printf("Antes: x = %d\n", x);

    x = 15;

    printf("Depois: x = %d\n", x);

    printf("Valor de x: %d\n", x);
    printf("Endereco de p: %p\n", &x);
    printf("Valor de p (endereco): %p\n", p);
    printf("Valor de p: %d\n", *p);

    return 0;
}