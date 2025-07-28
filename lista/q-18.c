/*Você deve escrever um programa que determine, para cada número dado, se ele é um primo arrojado.

 Entrada:
A primeira linha contém um número inteiro T (1 ≤ T ≤ 100), representando a quantidade de casos de teste.

Cada uma das próximas T linhas contém um número inteiro n (1 ≤ n ≤ 10⁷), para o qual você deve verificar se é um primo arrojado.

Saída:
Para cada caso de teste, imprima uma única linha contendo:

"S" (sim), se o número n for primo arrojado

"N" (não), caso contrário*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i += 2)
        if (n % i == 0) return false;
    return true;
}

bool is_daring_prime(int n) {
    while (n > 0) {
        if (!is_prime(n)) return false;
        n /= 10;
    }
    return true;
}

int main() {
    int T, n;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        puts(is_daring_prime(n) ? "S" : "N");
    }
    return 0;
}


