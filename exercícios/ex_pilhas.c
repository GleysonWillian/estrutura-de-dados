#include <stdlib.h>
#define MAX 5

int pilha[MAX];
int topo = -1;

void push(int valor)
{
    if (topo == MAX - 1)
    {
        printf("Pilha cheia!\n");
    }
    else
    {
        topo++;
        pilha[topo] = valor;
        printf("Inserido %d na pilha!\n", valor);
    }
}

void pop()
{
    if (topo == -1)
    {
        printf("Pilha vazia!\n");
    }
    else
    {
        printf("Removido %d da pilha!\n", pilha[topo]);
        topo--;
    }
}

void mostrar()
{
    if (topo == -1)
    {
        printf("Pilha vazia!\n");
    }
    else
    {
        printf("Pilha atual:");
        for (int i = 0; i <= topo; i++)
        {
            printf("%d", pilha[i]);
        }
        printf("\n");
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    mostrar();

    pop();
    mostrar();

    return 0;
}