/* Faça um programa que leia um número natural n, menor que 100, e desenhe n pirâmides, cada uma com n linhas, conforme o exemplo de saída.

Entrada:
A entrada é composta por uma única linha, contendo um número inteiro n, tal que:


1 ≤ n < 100
 Saída:
A saída deve conter n pirâmides, cada uma com n linhas.

Cada linha da pirâmide mostra os números de 1 até o número da linha atual, separados por espaços.

Cada pirâmide deve ser separada por uma linha em branco.*/

#include <stdio.h>

int main() {
    int L, M;
    scanf("%d %d", &L, &M);

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < M; j++) {
            printf("[%03d,%03d]", i, j);
        }
        printf("\n");
    }

    return 0;
}
