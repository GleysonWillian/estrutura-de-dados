#include <stdio.h>
#define MAX 5  // tamanho máximo da pilha

int pilha[MAX]; // array que guarda os elementos
int topo = -1;  // indica a posição do último elemento

// Função para adicionar (push)
void push(int valor) {
    if (topo == MAX - 1) {
        printf("Pilha cheia!\n");
    } else {
        topo++;
        pilha[topo] = valor;
        printf("Inserido %d na pilha\n", valor);
    }
}

// Função para remover (pop) 
void pop() {
    if (topo == -1) {
        printf("Pilha vazia!\n");
    } else {
        printf("Removido %d da pilha\n", pilha[topo]);
        topo--;
    }
}

// Função para mostrar a pilha
void mostrar() {
    if (topo == -1) {
        printf("Pilha vazia!\n");
    } else {
        printf("Pilha atual: ");
        for (int i = 0; i <= topo; i++) {
            printf("%d ", pilha[i]);
        }
        printf("\n");
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    mostrar();

    pop();
    mostrar();

    return 0;
}
