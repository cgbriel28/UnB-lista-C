/*Problema: Pedra-Papel-Tesoura-Lagarto-Spock
 Pedra-Papel-Tesoura-Lagarto-Spock é uma extensão do clássico jogo Pedra-Papel-Tesoura, um jogo
 utilizado como método de seleção (como escolher quem irá realizar alguma tarefa, por exemplo)
 para duas ou mais pessoas. É um jogo recreativo e não requer nenhum equipamento, tendo regras
 bem simples:
 • Pedra ganha de tesoura (quebrando-a);
 • Tesoura ganha de papel (cortando-o);
 • Papel ganha de pedra (embrulhando-o) e;
 • Símbolos iguais resultam em empate.
 Assim que os jogadores selecionam o símbolo, todos os comparam e verificam se alguém ganhou.
 A extensão do jogo adiciona dois novos símbolos: o Lagarto e o Spock. Com estes novos símbolos,
 há uma diminuição considerável de chances de empate, pois eles adicionam as seguintes regras:
 • Pedra ganha de lagarto (esmagando-o);
 • Tesoura ganha de lagarto (decaptando-o);
 • Papel ganha de Spock (refutando-o);
 • Lagarto ganha de Spock (envenenando-o);
 • Lagarto ganha de papel (comendo-o);
 • Spock ganha de tesoura (derretendo-a) e;
 • Spock ganha de pedra (vaporizando-a).
 Faça um programa em C que receba símbolos de dois jogadores e
 determine quem venceu a brincadeira. Considere que cada símbolo
 seja enumerado da seguinte forma:
 • Pedra vale 0;
 • Papel vale 1;
 • Tesoura vale 2;
 • Lagarto vale 3 e;
 • Spock vale 4.
 Entrada
 A primeira linha da entrada contém dois números inteiros que correspondem respectivamente o
 valor escolhido pelo jogador A e o valor escolhido pelo jogador B.
 O valor escolhido pelos jogadores podem assumir o valor 0 ou 4, ou seja:
 0 ≤valor ≤ 4
 1
Saída
 Seu programa deve mostrar quem dos dois jogadores ganhou a partida: A ou B. Se nenhum jogador
 ganhou, exiba a mensagem empate*/



#include <stdio.h>
int main(){

    int a, b;

    scanf("%d%d", &a, &b);
   
    if (a == 0  && b == 2) 
        printf("A\n");

    if (a == 2  && b == 1) 
        printf("A\n");

    if (a == 1  && b == 0) 
        printf("A\n");
                 
    if (a == 0  && b == 3) 
        printf("A\n");
                     
    if (a == 1 && b == 4) 
        printf("A\n");

    if (a == 2 && b == 3)
        printf("A\n");

    if ((a == 3 && b == 1) || (a == 3 && b == 4))
        printf("A\n");

    if ((a == 4 && b == 0) || (a == 4 && b == 2))
        printf("A\n");
    
    if (b == 0  && a == 2) 
        printf("B\n");
    
    if (b == 2  && a == 1) 
        printf("B\n");
    
    if (b == 1  && a == 0) 
        printf("B\n");
    
    if (b == 0  && a == 3) 
        printf("B\n");
                     
    if (b == 1 && a == 4) 
        printf("B\n");

    if (b == 2 && a == 3)
        printf("B\n");

    if ((b == 3 && a == 1) || (b == 3 && a == 4))
        printf("B\n");

    if ((b == 4 && a == 0) || (b == 4 && a == 2))
        printf("B\n");
    if (a == b)
        printf("empate\n");   
    return 0;
}


