#include <stdio.h>
#include <stdlib.h>

int main() {

    char *s;
    int n;

    printf("Qual o tamanho do seu string? ");
    scanf("%d", &n);

    getchar();

    s = malloc(n * sizeof *s);
    if(s == NULL){
        printf("Falha ao alocar memoria!");
        exit(0);
    }

    printf("Entre o string: ");
    gets(s);

    printf("String: %s\n", s);

    return 0;
}