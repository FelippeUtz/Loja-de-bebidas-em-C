
#include "functions.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#pragma warning (disable:4996)

int main() {
    setlocale(LC_ALL, "");
    Bebida bebidas[30];
    int num_bebidas = 0;
    int opcao;
    char nome[20];
    do {
        printf("LOJA BEBIDAS\n");
        printf("1--adicionar bebida\n");
        printf("2--remover bebida\n");
        printf("3--atualizar bebida\n");
        printf("4--vender bebida\n");
        printf("5--sair\n");
        printf("digite o numero da opção:");
        scanf("%d", &opcao);
        switch (opcao) {
        case 1: registarBebida(bebidas, &num_bebidas);
            break;
        case 2:
            if (num_bebidas > 0) {
                printf("digite o nome da bebida que quer remover:");
                scanf("%s", nome);
                removerBebida(bebidas, &num_bebidas, nome);
            }
            else {
                printf("nao ha bebidas para remover\n");
            }
            break;
        case 3:
            if (num_bebidas > 0) {
                printf("digite o nome da bebida que quer atualizar:");
                scanf("%s", nome);
                atualizarBebida(bebidas, &num_bebidas, nome);
            }
            else {
                printf("nao ha bebidas para atualizar\n");
            }
            break;
        case 4:
            if (num_bebidas > 0) {
                printf("digite o nome da bebida que quer vender:");
                scanf("%s", nome);
                venderBebida(bebidas, &num_bebidas, nome);
            }
            else {
                printf("nao ha bebidas para vender");
            }
            break;
        case 5: printf("ADEUS");
            break;
        default:printf("opcao invalida");
        }
    } while (opcao != 5);






    return 0;
}