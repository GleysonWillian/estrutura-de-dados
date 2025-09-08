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

int main()
{
    Pessoa pessoa;

    printf("Digite o seu nome: ");
    fgets(pessoa.nome, 100, stdin);
    printf("Digite a sua idade: ");
    scanf("%d", &pessoa.idade);
    scanf("%c");
    printf("Digite o seu sexo 'F' para faminino e 'M' para masculino: ");
    scanf("%c", &pessoa.sexo);

    printf("Nome: %s\nIdade: %d\nSexo: %c\n", pessoa.nome, pessoa.idade, pessoa.sexo);

    return 0;
}