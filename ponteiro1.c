#include <stdio.h>

int main() {
    int idade = 30;      // variável comum
    int *p;              // declaração de ponteiro para int

    p = &idade;          // & pega o endereço da variável

    printf("Valor de idade: %d\n", idade);
    printf("Endereco de idade: %p\n", &idade);
    printf("Valor de p (endereco que ele guarda): %p\n", p);
    printf("Valor apontado por p: %d\n", *p); // * acessa o valor guardado no endereço

    return 0;
}
