
"Entrada
 A primeira linha da entrada contém um número inteiro P que corresponde ao valor do produto da
 máquina em ienes. A segunda linha da entrada contém um valor inteiro V que corresponde ao valor
 que a pessoa inseriu na máquina em ienes.
 Confira as seguintes restrições para as entradas:
 0 ≤P,V ≤106
 P ≤V
 Saída
 Seu programa deve imprimir uma linha para cada quantidade de moeda que a máquina devolverá
 de troco: a primeira linha deve ser um número inteiro que correspondente a quantidade de moedas
 "de Y500; a segunda linha deve ser um número inteiro que correspondente a quantidade de moedas
' de Y100; a terceira linha deve ser um número inteiro que correspondente a quantidade de moedas
' de Y50; a quarta linha deve ser um número inteiro que correspondente a quantidade de moedas de
 'Y10; a quinta linha deve ser um número inteiro que correspondente a quantidade de moedas de Y5
 'e; a sexta linha deve ser um número inteiro que correspondente a quantidade de moedas de Y1.
' Observe os casos de exemplos para melhor entendimento da saída.'

  
#include <stdio.h>
int main() {
    int p; 
    int v;        
    int troco;
    int m500, m100, m50, m10, m5, m1;
    scanf("%d", &p);
    scanf("%d", &v);

    troco = v - p;

    m500 = troco / 500;
    troco %= 500;

    m100 = troco / 100;
    troco %= 100;

    m50 = troco / 50;
    troco %= 50;

    m10 = troco / 10;
    troco %= 10;

    m5 = troco / 5;
    troco %= 5;

    m1 = troco;

    printf("%d\n", m500);
    printf("%d\n", m100);
    printf("%d\n", m50);
    printf("%d\n", m10);
    printf("%d\n", m5);
    printf("%d\n", m1);

    return 0;
}
