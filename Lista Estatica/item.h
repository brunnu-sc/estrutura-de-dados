#ifndef ITEM_H
#define ITEM_H

#include <stdlib.h>
#include <stdio.h>

typedef struct {
  int matricula;
  int idade;
  float nota1;
  float nota2;
  float media;
} ITEM;

ITEM *criar_item(int matricula, int idade, float nota1, float nota2);
void apagar_item(ITEM *item);
void imprimir_item(ITEM *item);

#endif