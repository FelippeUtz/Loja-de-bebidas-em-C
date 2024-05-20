#ifndef FUNCTIONS_H
#define FUNCTIONS_H



#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct  {
    int id;
    char nome[20];
    char fabricante[20];
    int stock;
    float preco;
    float teor;
}Bebida;

void registarBebida(Bebida* bebidas, int* num_bebidas);
void removerBebida(Bebida* bebidas, int* num_bebidas, char* nome);
void atualizarBebida(Bebida* bebidas, int* num_bebidas, char* nome);
void venderBebida(Bebida* bebidas, int* num_bebidas, char* nome);

#endif // FUNCTIONS_H


