#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// criando novos tipos de dados:

typedef struct
{
    char nome[100];
    char sexo;
    int idade;
} Pessoa;

struct Pessoa2
{
    int idade;
    char sexo;
    char nome[100];
};

int main()
{
    Pessoa pessoa1;
    struct Pessoa2 pessoa2;

    pessoa2.idade = 35;
    pessoa2.sexo = 'M';
    strcpy(pessoa2.nome, "Marcos");

    printf("Nome: %s\nIdade: %d\nSexo: %c\n", pessoa2.nome, pessoa2.idade, pessoa2.sexo);

    return 0;
}