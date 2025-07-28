/*O DJ da noite está com problemas em colocar a batida para todos dançarem, e por isso pediu sua ajuda para escrever um
 programa que faça o trabalho do DJ.
 Entrada
 A entrada possui um único caso de teste com apenas um número N que representa a quantidade de linhas com batidas.
 Saída
 Nas linhas impares imprima 3 vezes a palavra THUMS, nas linhas pares imprima 6 vezes.*/

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  

    for (int i = 1; i <= N; i++) {
        int rep = (i % 2 == 1) ? 3 : 6;  

        for (int j = 0; j < rep; j++) {
            printf("THUMS");
            if (j < rep - 1) printf(" ");  
        }

        printf("\n");  
    }

    return 0;
}
