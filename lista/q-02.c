/  Entrada
//  A primeiralinhadaentradacontémtrêsnúmerosreaisP1,P2eP3queindicamrespectivamenteas
//  notasdaProva1,Prova2eProva3.
//  AsegundalinhadaentradacontémumnúmerorealT,quecorrespondeanotadoTrabalhofinal.
//  AterceiralinhadaentradacontémcinconúmerosreaisL1,L2,L3,L4eL5,queindicamrespecti
// vamenteasnotasda1ªlista,2ªlista,3ªlista,4ªlistae5ªlistadeexercícios.
//  AsnotasdePi eTpodemassumirumvalorentre0à10easnotasdeLjpodeassumirvaloresde
//  0à1,ouseja:
//  0≤Pi≤10
//  0≤T≤10
//  0≤Lj≤1
//  para1≤i≤3e1≤j≤5.
//  Todososvaloresdeentradapossuemduascasasdecimaisdeprecisão
//  Saída
//  Seuprogramadeveimprimirsomenteamédiafinalarredondandoparaduascasasdecimais.


#include <stdio.h>

int main() {
    float P1, P2, P3, T;
    float L1, L2, L3, L4, L5;
    float ML, MF;

    
    scanf("%f %f %f", &P1, &P2, &P3);

    
    scanf("%f", &T);

    
    scanf("%f %f %f %f %f", &L1, &L2, &L3, &L4, &L5);

    
    ML = (L1 + L2 + L3 + L4 + L5) / 10.0;

   
    MF = ((P1 + 2 * P2 + 3 * P3 + 2 * T) / 8.0) + ML;

    printf("%.2f\n", MF);

    return 0;
}



