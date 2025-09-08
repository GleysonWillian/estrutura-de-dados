#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 5;

    int *vec = malloc(n * sizeof(int));

    if (vec == NULL){
        printf("Erro: malloc retornou NULL\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
        vec[i] = i * 10;

    
    for (int i = 0; i < n; i++)
        printf("%d ", vec[i]);
    printf("\n");

    free(vec);

    return 0;
}
