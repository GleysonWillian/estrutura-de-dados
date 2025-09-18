#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;

    printf("Valor de x: %d\n", x);      // 10
    printf("Endereco de x: %p\n", &x);  // algo tipo 0x7ffe...
    printf("Valor de p: %p\n", p);      // mesmo endereco de x
    printf("Valor apontado por p: %d\n", *p); // 10

    return 0;
}
