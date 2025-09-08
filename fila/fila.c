#include <stdio.h>
#define MAX 5  // tamanho máximo da fila

int fila[MAX]; // array que guarda os elementos
int inicio = 0; // índice do primeiro elemento
int fim = -1;   // índice do último elemento
int qtd = 0;    // quantidade de elementos na fila

// Inserir (enqueue)
void enqueue(int valor) {
    if (qtd == MAX) {
        printf("Fila cheia!\n");
    } else {
        fim = (fim + 1) % MAX; // move o fim (circular)
        fila[fim] = valor;
        qtd++;
        printf("Inserido %d na fila\n", valor);
    }
}

// Remover (dequeue)
void dequeue() {
    if (qtd == 0) {
        printf("Fila vazia!\n");
    } else {
        printf("Removido %d da fila\n", fila[inicio]);
        inicio = (inicio + 1) % MAX;
        qtd--;
    }
}

// Mostrar fila
void mostrar() {
    if (qtd == 0) {
        printf("Fila vazia!\n");
    } else {
        printf("Fila atual: ");
        for (int i = 0; i < qtd; i++) {
            int pos = (inicio + i) % MAX;
            printf("%d ", fila[pos]);
        }
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    mostrar();

    dequeue();
    mostrar();

    return 0;
}
