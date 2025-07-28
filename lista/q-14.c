/*O jovem Leon está muito encafifado: ele precisa somar todos os números pares de uma lista gigantesca de números.
Como ele não quer fazer isso manualmente, pediu sua ajuda para criar um programa que faça essa conta por ele.

 Entrada:
A entrada é composta por vários números inteiros Ni, um por linha.

A leitura deve continuar enquanto Ni > 0.

A entrada termina quando o número lido for 0 (zero).

Todos os valores de Ni seguem a restrição:

Copy code
0 < Ni ≤ 5 × 2²⁰
 Saída:
Seu programa deve imprimir uma única linha, contendo a soma de todos os números pares da sequência fornecida.*/

#include <stdio.h>

int main() {
    int num;
    int soma_pares = 0;

    do {
        scanf("%d", &num);

        if (num % 2 == 0) {
            soma_pares += num;
        }

    } while (num != 0);

    printf("%d\n", soma_pares);

    return 0;
}
