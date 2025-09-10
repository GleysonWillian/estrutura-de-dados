#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct
{
    int dia, mes, ano;
} DataNas;

typedef struct
{
    DataNas dataNas;
    char nome[100];
    char sexo;
    int idade;
} Pessoa;

void imprimirPessoa(Pessoa p){
    printf("\n\tNome: %s\n", p.nome);
    printf("\tIdade: %d\n", p.idade);
    printf("\tSexo: %c\n", p.sexo);
    printf("\tData de nas.: %d/%d/%d\n\n", p.dataNas.dia, p.dataNas.mes, p.dataNas.ano);
}

Pessoa lerPessoa(){
    Pessoa p;
    printf("\nDigite seu nome: ");
    fgets(p.nome, 100, stdin);
    p.nome[strcspn(p.nome, "\n")] = '\0';
    printf("Digite sua idade: ");
    scanf("%d", &p.idade);
    printf("Digite f ou m para o sexo: ");
    scanf(" %c", &p.sexo);
    printf("Digite sua data de nascimento no formato dd mm aaaa: ");
    scanf("%d %d %d", &p.dataNas.dia, &p.dataNas.mes, &p.dataNas.ano);
    getchar();
    return p;
}

int main()
{
    int i;
    Pessoa pessoas[3];
    for(i = 0; i < 3; i++)
        pessoas[i] = lerPessoa();
    
    for(i = 0; i < 3; i++)
        imprimirPessoa(pessoas[i]);

    return 0;
}