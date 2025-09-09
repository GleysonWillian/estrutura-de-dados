#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// criando novos tipos de dados:

typedef struct {
    int dia, mes, ano;
}DataNas;

typedef struct
{
    DataNas dataNas;
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
    printf("Digite sua data de nascimento (sem as barras) no formato DD/MM/AAAA: ");
    scanf("%d%d%d", &pessoa.dataNas.dia, &pessoa.dataNas.mes, &pessoa.dataNas.ano);

    printf("Nome: %s\nIdade: %d\nSexo: %c\nData de nas.: %d/%d/%d\n", pessoa.nome, pessoa.idade, pessoa.sexo, pessoa.dataNas.dia, pessoa.dataNas.mes, pessoa.dataNas.ano);

    return 0;
}