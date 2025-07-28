/* Entrada
 Aprimeira linha da entrada contém um número inteiro que corresponde ao número da conta-corrente
 com 6 dígitos.
 O número da conta-corrente pode assumir um valor entre 000001 à 999998, ou seja:
 000001 ≤ conta-corrente ≤ 999998
 Saída
 Seu programa deve imprimir somente o dígito verificador.
 Verifique os exemplos para entender melhor o formato da saída*/

#include <stdio.h>

int main() {
    int x, d1, d2, d3, d4, d5, d6, res, dv;
    scanf("%d", &x);
    d1 = x % 10;
    x /= 10;
    d1 *= 2;
    
    d2= x % 10;
    x /= 10;
    d2 *= 3;
    
    d3 = x % 10;
    x /= 10;
    d3 *= 4;
    
    d4 = x % 10;
    x /= 10;
    d4 *= 5;
    
    d5 = x % 10;
    x /= 10;
    d5 *= 6;
    
    d6 = x % 10;
    x /= 10;
    d6 *= 7;

    res = ((d1 + d2 + d3 + d4 + d5 + d6) % 11);

    dv = 11 - res;

    printf("%d\n", dv);
    return 0;
    


}
