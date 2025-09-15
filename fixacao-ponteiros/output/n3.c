#include <stdio.h>
#include <stdlib.h>

int main(){

    int a = 7, b = 15;
    int *pa = &a;
    int *pb = &b;

    printf("Antes: a = %d, b = %d\n", a, b);

    int temp = *pa;
    *pa = *pb;
    *pb = temp;

    printf("Depois: a = %d, b = %d\n", a, b);

    return 0;
}