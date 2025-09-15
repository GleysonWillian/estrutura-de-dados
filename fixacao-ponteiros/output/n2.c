#include <stdio.h>
#include <stdlib.h>

int main() {

    int x = 10;
    int *p = &x;
    int *q = &x;

    printf("Antes: x = %d\n", x);

    *p = 15;
    *q = *p;

    printf("Depois: x = %d\n", x);
    printf("Valor atual de *p: %d\n", *p);
    printf("Valor atual de *q: %d\n", *q);

    return 0;
}