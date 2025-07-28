/*Entrada:
A primeira linha conterá um número inteiro chamado hora.
Os casos de teste variarão os valores de hora da seguinte forma:
0 ≤ hora ≤ 2³² − 1

Saída:
Seu programa deve exibir:

A hora convertida em minutos (1 hora = 60 minutos)

A hora convertida em segundos (1 hora = 3600 segundos)

Cada valor deve ser impresso em uma linha separada.*/

#include <stdio.h>
int main()
{
    long long int hora;
    long long int min, segs;
    scanf("%lld", &hora);

    min = hora * 60;
    segs = hora * 3600;

    printf ("%lld\n", min);
    printf("%lld\n", segs);
    return 0;
}
