#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// criando novos tipos de dados:

typedef struct
{
    char rua [100];
    char quadra [50];
    char lote [50];
    char setor [50];
    char cidade [50];
} Endereco;

typedef struct
{
    int dia, mes, ano;
} DataNas;

typedef struct
{
    Endereco endereco;
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
    fgetchar();
    printf("Digite o seu sexo 'F' para faminino e 'M' para masculino: ");
    scanf("%c", &pessoa.sexo);
    fgetchar();
    printf("Digite sua data de nascimento no formato DD/MM/AAAA: ");
    scanf("%02d/%02d/%04d", &pessoa.dataNas.dia, &pessoa.dataNas.mes, &pessoa.dataNas.ano);
    fgetchar();
    printf("Digite o nome da sua rua: ");
    fgets(pessoa.endereco.rua, 100, stdin);
    printf("Digite a quadra: ");
    fgets(pessoa.endereco.quadra, 50, stdin);
    printf("Digite o lote: ");
    fgets(pessoa.endereco.lote, 50, stdin);
    printf("Digite o nome do setor: ");
    fgets(pessoa.endereco.setor, 50, stdin);
    printf("Digite o nome da cidade: ");
    fgets(pessoa.endereco.cidade, 50, stdin);

    printf("--------------------------------------\n");
    printf("Informacoes do usuario:\n");
    printf("\n");
    printf("Nome: %s\nIdade: %d\nSexo: %c\nData de nas.: %d/%d/%d\n", pessoa.nome, pessoa.idade, pessoa.sexo, pessoa.dataNas.dia, pessoa.dataNas.mes, pessoa.dataNas.ano);
    printf("\n");
    printf("Endereco:\nRua: %sQuadra: %sLote: %sSetor: %sCidade: %s", pessoa.endereco.rua, pessoa.endereco.quadra, pessoa.endereco.lote, pessoa.endereco.setor, pessoa.endereco.cidade);

    return 0;
}