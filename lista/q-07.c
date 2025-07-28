/*
Problema: Zerinho ou Um
Escreva um programa em C que receba os valores que os três jogadores colocaram e determine quem
 venceu a brincadeira.
 PS: Qual a brincadeira favorita do computador? Zerinho ou um!
 Entrada
 Aprimeira linha da entrada contém três números inteiros que correspondem respectivamente o valor
 escolhido pelo jogador A, o valor escolhido pelo jogador B e o valor escolhido pelo jogador C.
 O valor escolhido pelos jogadores podem assumir o valor 0 ou 1, ou seja:
 valor = 0
 ou
 valor = 1
 Saída
 Seu programa deve mostrar quem dos três jogadores ganhou a partida: A, B ou C. Se nenhum
 jogador ganhou, exiba a mensagem empate.
 Verifique os exemplos para entender melhor o formato da saída*/

#include <stdio.h>

int main(){
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    if ((A == 0) && (B == 1) && (C == 1))
        printf("A\n");
    if ((A == 1) && (B == 0) && (C == 0))
        printf("A\n");

    if ((A == 1) && (B == 0) && (C == 1))
        printf("B\n");
    if ((A == 0) && (B == 1) && (C == 0))
        printf("B\n");

    if ((A == 1) && (B == 1) && (C == 0))
        printf("C\n");
    if ((A == 0) && (B == 0) && (C == 1))
        printf("C\n");

    if ((A == 0) && (B == 0) && (C == 0))
        printf("empate\n");
    if ((A == 1) && (B == 1) && (C == 1))
        printf("empate\n");

    return 0;
}
