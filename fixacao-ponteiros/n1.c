#include <stdio.h>
#include <stdlib.h>

int main() {

    int x = 50;
    int *p = &x;

    printf("Antes: x = %d\n", x);

    *p = 99;

    printf("Depois: x = %d\n", x);

    printf("Valor de x = %d", x);

    return 0;
}