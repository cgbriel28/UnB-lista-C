/*Objetivo:
Faça um programa que leia n números inteiros (n ≥ 1) e retorne o maior entre eles.
Se houver números repetidos que forem os maiores, imprima qualquer um deles.

 Entrada:
A entrada é composta por várias linhas, cada uma contendo um número inteiro.

A leitura termina com EOF (fim de arquivo).

Você pode assumir que haverá pelo menos um número na entrada.

 Saída:
A saída deve ser uma única linha, contendo o maior número lido.*/

#include <stdio.h>
int main(){
    int numero;
    int comparacao;

    scanf("%d", &comparacao);

    while (scanf("%d", &numero) != EOF){
        if(numero > comparacao){
            comparacao = numero;
        }
    }

    printf("%d\n", comparacao);

    return 0;
}
