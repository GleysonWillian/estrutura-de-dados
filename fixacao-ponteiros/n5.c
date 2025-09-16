#include <stdio.h>
#include <stdlib.h>

int main() {

    int v[3] = {1,2,3};
    int *p = v;

    printf("Primeiro elemento: %d\n", *p);
    printf("Segundo elemento: %d\n", *(p+1));
    printf("Terceiro elemento: %d\n", *(p+2));

    return 0;
}