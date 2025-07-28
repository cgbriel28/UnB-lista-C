/*O jovem Leon está muito encafifado NOVAMENTE. Ele precisa somar todos os números pares e todos os números ímpares de uma lista gigantesca de números.
Como ele não quer fazer isso manualmente, pediu sua ajuda para criar um programa que faça essa conta por ele.

 Entrada:
A entrada é composta por vários números inteiros Ni, um por linha.

A leitura deve continuar enquanto Ni > 0.

A entrada termina quando o número lido for 0 (zero).

Os valores de Ni seguem a restrição:


0 < Ni ≤ 5 × 2²⁰

  Saída:
Seu programa deve imprimir uma única linha com dois valores inteiros separados por espaço:

A soma de todos os números pares

A soma de todos os números ímpares*/

#include <stdio.h>

int main() {
    int n, pares = 0, impares = 0;

    while (1) {
        scanf("%d", &n);
        if (n == 0) break;

        if (n % 2 == 0)
            pares += n;
        else
            impares += n;
    }

    printf("%d %d\n", pares, impares);
    return 0;
}
