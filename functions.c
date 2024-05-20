

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "functions.h"
#pragma warning (disable:4996)

void registarBebida(Bebida* bebidas, int* num_bebidas) {
    Bebida nova_bebida;
    printf("Digite o fabricante da bebida: ");
    scanf("%s", nova_bebida.fabricante);
    printf("Digite o nome da bebida: ");
    scanf("%s", nova_bebida.nome);
    printf("Digite a quantidade em stock: ");
    scanf("%d", &nova_bebida.stock);
    printf("Digite o preço: ");
    scanf("%f", &nova_bebida.preco);
    printf("Digite o teor alcoólico: ");
    scanf("%f", &nova_bebida.teor);

    nova_bebida.id = *num_bebidas + 1;
    bebidas[*num_bebidas] = nova_bebida;
    (*num_bebidas)++;
    printf("Bebida registada com sucesso!\n");
}
void removerBebida(Bebida* bebidas, int* num_bebidas, char* nome) {
    for (int i = 0; i < *num_bebidas; i++) {
        if (strcmp(bebidas[i].nome, nome) == 0) {
            for (int j = i; j < *num_bebidas - 1; j++) {
                bebidas[j] = bebidas[j + 1];
            }
            (*num_bebidas)--;
            printf("Bebida removida \n");
            return;
        }
    }
    printf("Bebida nao encontrada");
}
void atualizarBebida(Bebida* bebidas, int* num_bebidas, char* nome) {
    for (int i = 0; i < *num_bebidas; i++) {
        if (strcmp(bebidas[i].nome, nome) == 0) {
            printf("Digite a nova quantidade em stock: ");
            scanf("%d", &bebidas[i].stock);
            printf("Digite o novo preço: ");
            scanf("%f", &bebidas[i].preco);
            printf("Informações atualizadas com sucesso!\n");
            return;
        }
    }
    printf("Bebida não encontrada!\n");
}
void venderBebida(Bebida* bebidas, int* num_bebidas, char* nome) {
    for (int i = 0; i < *num_bebidas; i++) {
        if (strcmp(bebidas[i].nome, nome) == 0) {
            if (bebidas[i].stock > 0) {
                bebidas[i].stock--;
                printf("Venda registada com sucesso!\n");
            }
            else {
                printf("Desculpe, a bebida está fora de stock!\n");
            }
            return;
        }
    }
    printf("Bebida não encontrada!\n");
}
