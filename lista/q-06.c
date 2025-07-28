/*Faça um programa que leia quatro números inteiros e retorne o maior entre eles. Se houver números repetidos que forem
 os maiores, imprima qualquer um deles.
 Entrada
 A entrada é composta por uma única linha, contendo quatro números inteiros.
 Saída
 A saída é composta de uma única linha contendo o maior número*/

#include <stdio.h>
int main(){
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if ((a >= b) && (a >= c) && (a >= d))
        printf("%d\n", a);
    
    else if ((b >= a) && (b >= c) && (b >= d))
        printf("%d\n", b);

    else if ((c >= a) && (c >= b) && (c >= d))
        printf("%d\n", c);

    else
        printf("%d\n", d);

    return 0;
}
