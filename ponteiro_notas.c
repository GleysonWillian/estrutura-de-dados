#include <stdio.h>
#include <stdlib.h>

int main () {

    float *v;
    int i;
    int n;
    float nota;

    printf("Qual o numero de notas? ");
    scanf("%d", &n);

    v = malloc(n * sizeof *v);
    if (v == NULL){
        printf("Nao foi possivel alocar o vetor.\n");
        exit(0);
    }

    for(i = 0; i < n; i++){
        printf("Entre a nota: ");
        scanf("%f", &nota);
        v[i] = nota;
    }

    for (i = 0; i < n; i++){
        printf("Nota: %.1f\n", v[i]);
    }

    free(v);
}