#include <stdio.h>

int main() {
   
    char estado[20];
    
    char codcard[40];

    char namecity[20];

    int populacao;

    float areakm;

    float pib;

    int pontotur;



    printf("CARTA 1\n");


    printf("Qual o estado da carta 1 ?\n");
    scanf("%s", estado);

    printf("Qual o codigo da carta 1 ?\n");
    scanf("%s", codcard);

    printf("Qual o nome da cidade  ?\n");
    scanf("%s", namecity);

    printf("Qual a população ?\n");
    scanf("%d", &populacao);

    printf("Qual a area por Km² ?\n");
    scanf("%f", &areakm);

    printf("Qual o PIB da cidade ?\n");
    scanf("%f", &pib);

    printf("Qual a pontuação turistica da cidade ?\n");
    scanf("%d", &pontotur);

    char estadoc2[40];

    char codigoc2[60];

    char namecityc2[60];
    
    int populacaoc2;

    float areakmc2;

    float pib2;

    int pontoc2;

    printf("CARTA 2\n");

    printf("Qual o estado da carta 2 ?\n");
    scanf("%s", estadoc2);

    printf("Qual o codigo da carta 2\n");
    scanf("%s", codigoc2);

    printf("Qual o nome da cidade ?\n");
    scanf("%s", namecityc2);

    printf("Qual a população\n");
    scanf("%d", &populacaoc2);

    printf("Qual a area KM² ?\n");
    scanf("%f", &areakmc2);

    printf("Qual o PIB da ciadade ?\n");
    scanf("%f", &pib2);

    printf("Qual a pontuação da carta 2 ?\n");
    scanf("%d", &pontoc2);
    
    printf("CARTA 1\n");


    printf("ESTADO: %s\n", estado);

    printf("CODIGO: %s\n", codcard);

    printf("NOME: %s\n", namecity);

    printf("POPULAÇÃO: %d\n", &populacao);

    printf(" AREA KM²: %f\n", &areakm);

    printf("PIB: %f\n", &pib);

    printf("PONTOS TURISTICO: %d\n", &pontotur);

    printf("CARTA 2\n");

    printf("ESTADO: %s\n", estadoc2);

    printf("CODIGO: %s\n", codigoc2);

    printf("NOME: %s\n", namecityc2);

    printf("POPULAÇÃO: %d\n", &populacaoc2);

    printf("AREA KM²: %f\n", &areakmc2);

    printf("PIB: %f\n", &pib2);

    printf("PONTOS TURISTICO: %d\n", &pontoc2);


    return 0;

}