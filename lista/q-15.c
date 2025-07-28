/* Faça um programa que leia um número natural n, menor que 100, e desenhe n pirâmides no formato do exemplo de saída, cada uma com n linhas.

Entrada:
Uma única linha contendo um número natural n, tal que:


1 ≤ n < 100

  
Saída:
A saída deve conter n pirâmides, cada uma com n linhas, no seguinte padrão:

Cada pirâmide tem os números de 1 até o número da linha atual, separados por espaço.

As pirâmides devem ser separadas por uma linha em branco.*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == i)
                printf("%02d", i);
            else
                printf("%02d ", i);
        }
        printf("\n");
    }

   
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == i)
                printf("%02d", j);
            else
                printf("%02d ", j);
        }
        printf("\n");
    }

    return 0;
}
