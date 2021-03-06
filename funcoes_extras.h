/*--------------------------------------------------------------------------------------------------------------------*/
/* 			Universidade Federal de São João del - Rei 
				Algoritmos e Estrutura de Dados III
				Ciência da Computação - 3º período
      
					Isabella Vieira Ferreira
					 Mônica Neli de Resende
						Março / 2012                                                                                  */
/*--------------------------------------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

#ifndef FUNCOES_EXTRAS_H
#define FUNCOES_EXTRAS_H

/*--------------------------------------------------------------------------------------------------------------------*/
/* Estrutura de dados.                                                                                                 */
/*--------------------------------------------------------------------------------------------------------------------*/

typedef struct celula *Apontador;

typedef struct celula {
	int chave;
	Apontador prev,prox;
} celula;

typedef struct {
	Apontador primeiro, ultimo;
	int tam;
} lista;


/*--------------------------------------------------------------------------------------------------------------------*/
/* Cabeçalho das funções contidas no arquivo "funcoes_extras.c".                                                                                             */
/*--------------------------------------------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------------------------------------------*/
void inserir(int n, lista *num);
/*--------------------------------------------------------------------------------------------------------------------*/
int valida_lista (lista *num1, lista *num2);
/*--------------------------------------------------------------------------------------------------------------------*/

#endif
