/* Torneio de Par ou Ímpar

Entrada:
A entrada é composta por três linhas, cada uma representando um jogo.

A primeira linha representa o jogo entre os jogadores A e B. Ela contém três inteiros:
E J1 J2
Onde:

E: escolha do jogador A (0 para par, 1 para ímpar)

J1: número escolhido por A

J2: número escolhido por B

A segunda linha representa o jogo entre os jogadores C e D, com os mesmos três inteiros seguindo as mesmas regras.

A terceira linha representa o jogo final entre os vencedores dos dois jogos anteriores, novamente com os mesmos três inteiros, indicando a escolha e os números escolhidos.

Restrições:

0 ≤ E ≤ 1  
0 ≤ J1, J2 ≤ 10
Saída:
A saída deve ser uma única letra, indicando o capuz do jogador campeão final, ou seja:

"A", "B", "C", "D" ou "X" (se os jogadores vencedores tiverem esse nome ou qualquer letra que for atribuída ao vencedor final).*/

#include <stdio.h>

char vencedor(int e, int j1, int j2, char jogador1, char jogador2) {
    int soma = j1 + j2;
    if (soma % 2 == 0) { 
        return (e == 0) ? jogador1 : jogador2;
    } else { 
        return (e == 1) ? jogador1 : jogador2;
    }
}

int main() {
    int e1, j1_1, j2_1;
    int e2, j1_2, j2_2;
    int e3, j1_3, j2_3;

    
    scanf("%d %d %d", &e1, &j1_1, &j2_1);
    scanf("%d %d %d", &e2, &j1_2, &j2_2);
    scanf("%d %d %d", &e3, &j1_3, &j2_3);

    char vencedor1 = vencedor(e1, j1_1, j2_1, 'A', 'B');

    char vencedor2 = vencedor(e2, j1_2, j2_2, 'C', 'D');

    char campeao = vencedor(e3, j1_3, j2_3, vencedor1, vencedor2);

    printf("%c\n", campeao);

    return 0;
}

