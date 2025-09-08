#include <stdlib.h>
#include <string.h>

#define NUM_VOOS 12 //Define a quantidade de voos

// Estrutura de Dados - Definição da estrutura de dados para armazenar os dados dos voos
typedef struct 
{
    int numeroVoo;
    char origem[50];
    char destino[50];
    int lugaresDisponiveis;
}Voo;


Voo avioes[12]; // array para armazenar os 12 voos


//Função de suporte - Inicializa o array acima com os dados abaixo
void inicializarVoos() {
    avioes[0] = (Voo){101, "Goiania", "Sao Paulo", 100};
    avioes[1] = (Voo){102, "Goiania", "Rio de Janeiro", 50};
    avioes[2] = (Voo){103, "Brasilia", "Sao Paulo", 70};
    avioes[3] = (Voo){256, "Brasilia", "Recife", 54};
    avioes[4] = (Voo){100, "Rio de Janeiro", "Sao Paulo", 15};
    avioes[5] = (Voo){124, "Sao Luis", "Goiania", 21};
    avioes[6] = (Voo){458, "Portugal", "Sao Paulo", 35};
    avioes[7] = (Voo){767, "Madrid", "Barcelona", 14};
    avioes[8] = (Voo){568, "Barcelona", "Paris", 11};
    avioes[9] = (Voo){555, "Manaus", "Natal", 44};
    avioes[10] = (Voo){253, "Piau", "Juiz de Fora", 29};
    avioes[11] = (Voo){161, "Porto Alegre", "Curitiba", 32};
}

void exibirMenuPrincipal();
void exibirMenuConsulta();
void consultarVoo();
void consultarPorNumero();
void consultarPorOrigem();
void consultarPorDestino();
void efeutarReserva();

int main(){
    int opcao;

    inicializarVoos();
    
    do
    {
        exibirMenuPrincipal();
        printf("Escolha uma opcao: ");
        scanf("%d, &opcao");

        switch (opcao)
        {
        case 1:
            exibirMenuConsulta();
            break;
        case 2:
            efeutarReserva();
            break;
        case 3:
        printf("Saindo do Programa...\n");
            break;
        default:
            printf("Opcao invalida. Tente Novamente.\n");
        }
    } while (opcao != 3);

    return 0;
    
}