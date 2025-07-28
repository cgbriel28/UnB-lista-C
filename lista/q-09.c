/* Entrada
 Aprimeira linha da entrada contém um número inteiro que corresponde ao número de CPF com 11
 dígitos
 Saída
 Seu programa deve mostrar somente se o CPF é válido ou não, com a mensagem valido ou invalido.
 Verifique os exemplos para entender melhor o formato da saída*/

#include <stdio.h>

int main() {
    char cpf[12];
    int dv, dvv;

    scanf("%s", cpf); 

    dv = ((((cpf[0] - '0') * 10) + ((cpf[1] - '0') * 9) + ((cpf[2] - '0') * 8) +
          ((cpf[3] - '0') * 7) + ((cpf[4] - '0') * 6) + ((cpf[5] - '0') * 5) +
          ((cpf[6] - '0') * 4) + ((cpf[7] - '0') * 3) + ((cpf[8] - '0') * 2)) * 10) % 11;

    if (dv == 10)
        dv = 0;

    dvv = ((((cpf[0] - '0') * 11) + ((cpf[1] - '0') * 10) + ((cpf[2] - '0') * 9) +
        ((cpf[3] - '0') * 8) + ((cpf[4] - '0') * 7) + ((cpf[5] - '0') * 6) +
        ((cpf[6] - '0') * 5) + ((cpf[7] - '0') * 4) + ((cpf[8] - '0') * 3)+ ( dv * 2)) * 10) % 11;
    if (dvv == 10)
        dvv = 0;

        if (dv == (cpf[9] - '0') && dvv == (cpf[10] - '0'))
        printf("valido\n");
    else
        printf("invalido\n");
    return 0;
}
