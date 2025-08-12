#include <stdio.h>

int main ()
{
    int precoI = 50.0;
    int *pF = &precoI;

    printf("Antes %d\n", precoI);
    *pF = 2 * precoI;
    printf("Depois %d\n", *pF);

    return 0;
}