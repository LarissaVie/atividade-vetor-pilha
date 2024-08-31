#include <stdio.h>
#include <stdlib.h>

int tamanho = 10;
int pilha [10];
int posicaoAtual = -1;

int isFull() {
    return posicaoAtual == tamanho
- 1;}

int isEmpty() {
    return posicaoAtual == -1;
}

void empilhar (int x){
    if (isFull()) {
        printf("Pilha cheia\n");
        return;
    }
    pilha[++posicaoAtual] = x;
}

int desempilhar() {
    if (isEmpty()) {
        printf("Pilha vazia\n");
        return -1;
    }
    return pilha[posicaoAtual--];
}

void incrementar(int valor) {
    if (isEmpty()) {
        printf("Pilha vazia não é possivel incrementar.\n");
        return;
    }
    pilha[posicaoAtual] += valor;
}

void decrementar(int valor) {
    if (isEmpty()) {
        printf("Pilha vazia Não é possível decrementar.\n");
        return;
    }
    pilha[posicaoAtual] -= valor;
}

void imprimirPilha() {
    if (isEmpty()) {
        printf("Pilha Vazia\n");
        return;
    }
    printf("Pilha: ");
    for (int i = 0; i <= posicaoAtual; i++) {
        printf("%d ", pilha[i]);
    }
    printf("\n");
}

int main() {
    empilhar(1);
    empilhar(2);
    empilhar(3);

    imprimirPilha();

    incrementar(7);
    imprimirPilha();

    decrementar(2);
    imprimirPilha();

    desempilhar();
    imprimirPilha();

    return 0;
}