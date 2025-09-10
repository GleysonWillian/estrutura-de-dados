#include <stdio.h>
#include <stdlib.h>

struct s_pos {
    int x;
    int y;
};


struct s_circulo {
    struct s_pos centro;
    float raio;
};

int main() {
    struct s_circulo *p;

    p = (struct s_circulo *)malloc(sizeof(struct s_circulo));
    if (p == NULL) {
        printf("Erro: Não foi possível alocar a memória.\n");
    }
    p->centro.x = 2;
    p->centro.y = 4;
    p->raio = 3.2;

    
    printf("--- Dados do Circulo ---\n");
    printf("Centro x = %d\n", p->centro.x);
    printf("Centro y = %d\n", p->centro.y);
    printf("Raio r   = %.02f\n", p->raio);

    
    free(p);
    
    
    p = NULL; 

    return 0;
}