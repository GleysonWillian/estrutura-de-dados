#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *v;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    v = malloc(n * sizeof *v);
    if (v == NULL) {
        printf("Erro de alocação\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        v[i] = i * 2;
    }

    for (i = 0; i < n; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }

    free(v);
    return 0;
}
