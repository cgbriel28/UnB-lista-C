/*Beto e Alice farão uma viagem para conhecer o interior do país.
Alice é uma moça muito metódica e exigente, por isso Beto está planejando cuidadosamente os locais onde farão suas refeições.
Para cada dia da viagem, Beto consultou o site Viagem Aconselha, que lista os restaurantes da cidade com suas respectivas notas.
Cada par representa o código do restaurante e a nota atribuída a ele (de 0 a 5 estrelas).
Como são muitos dias e muitos restaurantes por dia, Beto e Alice precisam de ajuda para escolher o melhor restaurante de cada dia — isto é, aquele com a maior nota.
Em caso de empate na nota, eles escolherão o restaurante com o menor código.
 Entrada:
A entrada é composta por várias linhas, cada uma representando um dia da viagem.

Cada linha começa com um inteiro R (1 ≤ R ≤ 200), indicando a quantidade de restaurantes daquele dia.

Em seguida, há 2 × R números: para cada restaurante:

Um número par (posição par da sequência) representa o código do restaurante (0 ≤ código ≤ 10⁷).

Um número ímpar (posição ímpar da sequência) representa a nota do restaurante (0 ≤ nota ≤ 5).

Dois restaurantes nunca têm o mesmo código em um mesmo dia.

A entrada termina com EOF (fim de arquivo).

 Saída:
Para cada linha da entrada (ou seja, para cada dia da viagem), seu programa deve imprimir:

Uma linha com o texto: Dia n, onde n é o número do dia da viagem, começando em 1.

O código do restaurante com a maior nota daquele dia. Em caso de empate, imprima o menor código entre os empatados.

Uma linha em branco para separar os dias.*/

#include <stdio.h>

int main() {
    int dia = 1;
    int R;

    while (scanf("%d", &R) == 1) {
        int melhor_codigo = 0;
        int melhor_nota = -1;

        for (int i = 0; i < R; i++) {
            int codigo, nota;
            scanf("%d %d", &codigo, &nota);

            if (nota > melhor_nota || (nota == melhor_nota && codigo < melhor_codigo)) {
                melhor_nota = nota;
                melhor_codigo = codigo;
            }
        }

        printf("Dia %d\n", dia);
        printf("%d\n", melhor_codigo);
        printf("\n");
        dia++;
    }

    return 0;
}
