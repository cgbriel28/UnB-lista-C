/*Objetivo:
Faça um programa que leia um conjunto de números da entrada padrão e imprima uma única linha contendo a soma de todos eles.

 Entrada:
A entrada é composta por um único caso de teste.

A primeira linha contém um número inteiro positivo N, representando a quantidade de números a serem somados.

As próximas N linhas contêm, cada uma, um número inteiro X.

 Saída:
Seu programa deve imprimir uma única linha com a soma de todos os N números inteiros lidos.*/

#include <stdio.h>

int main() {
    int n, x, fin = 0;

    scanf("%d", &n);          

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        fin = fin + x;
    }

    printf("%d\n", fin);
    return 0;
}

