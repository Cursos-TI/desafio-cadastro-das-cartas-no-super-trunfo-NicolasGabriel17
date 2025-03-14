
#include<stdio.h>

int main() {
    char estado[50];
    char codcard[50];
    char namecity[50];
    int populacao;
    float areakm;
    float pib;
    int pontotur;

    printf("CARTA 1\n");
    printf("Qual o estado da carta 1 ?\n");
    scanf("%49s", estado);
    printf("Qual o codigo da carta 1 ?\n");
    scanf("%49s", codcard);
    printf("Qual o nome da cidade ?\n");
    scanf("%49s", namecity);
    printf("Qual a população ?\n");
    scanf("%d", &populacao);
    printf("Qual a area por Km² ?\n");
    scanf("%f", &areakm);
    printf("Qual o PIB da cidade ?\n");
    scanf("%f", &pib);
    printf("Qual a pontuação turistica da cidade ?\n");
    scanf("%d", &pontotur);

    float resultado_card1;
    resultado_card1 = populacao / areakm;

    float pib_percapta1;
    pib_percapta1 = pib / populacao;

    char estadoc2[50];
    char codigoc2[50];
    char namecityc2[50];
    int populacaoc2;
    float areakmc2;
    float pib2;
    int pontoc2;

    printf("CARTA 2\n");
    printf("Qual o estado da carta 2 ?\n");
    scanf("%49s", estadoc2);
    printf("Qual o codigo da carta 2\n");
    scanf("%49s", codigoc2);
    printf("Qual o nome da cidade ?\n");
    scanf("%49s", namecityc2);
    printf("Qual a população\n");
    scanf("%d", &populacaoc2);
    printf("Qual a area KM² ?\n");
    scanf("%f", &areakmc2);
    printf("Qual o PIB da ciadade ?\n");
    scanf("%f", &pib2);
    printf("Qual a pontuação da carta 2 ?\n");
    scanf("%d", &pontoc2);

    float resultado_card2;
    resultado_card2 = populacaoc2 / areakmc2;

    float pib_percapta2;
    pib_percapta2 = pib2 / populacaoc2;
    
    float soma1 = (pib + populacao + areakm + pontotur);
    
   

    printf("CARTA 1\n");
    printf("ESTADO: %s\n", estado);
    printf("CODIGO: %s\n", codcard);
    printf("NOME: %s\n", namecity);
    printf("POPULAÇÃO: %d\n", populacao);
    printf("AREA KM²: %.2f\n", areakm);
    printf("PIB: %.2f\n", pib);
    printf("PONTOS TURISTICO: %d\n", pontotur);
    printf("Densidade populacional: %.2f\n", resultado_card1);
    printf("Pib percapta: %.2f\n", pib_percapta1);
    printf("Super poder carta 1: %.2f\n", soma1);

    float soma2 = (pib + populacaoc2 + areakmc2 + pontoc2);

    printf("CARTA 2\n");
    printf("ESTADO: %s\n", estadoc2);
    printf("CODIGO: %s\n", codigoc2);
    printf("NOME: %s\n", namecityc2);
    printf("POPULAÇÃO: %d\n", populacaoc2);
    printf("AREA KM²: %.2f\n", areakmc2);
    printf("PIB: %.2f\n", pib2);
    printf("PONTOS TURISTICO: %d\n", pontoc2);
    printf("Densidade populacional: %.2f\n", resultado_card2);
    printf("Pib percapta: %.2f\n", pib_percapta2);
    printf("Super poder carta 2: %.2f\n", soma2);
  
    if (pib > pib2) {
        printf("CARTA 1 - %s\n", namecity);
        printf("CARTA 2 - %s\n", namecityc2);
        printf("A CARTA 1 VENCEU NO PIB\n");
    } else{
        printf("CARTA 1 - %s\n", namecity);
        printf("CARTA 2 - %s\n", namecityc2);
        printf("A CARTA 2 VENCEU NO PIB\n");
    }
    
    if (populacao > populacaoc2) {
        printf("CARTA 1 - %s\n", namecity);
        printf("CARTA 2 - %s\n", namecityc2);
        printf("A CARTA 1 VENCEU NA POPULAÇÃO\n");
    } else{
        printf("CARTA 1 - %s\n", namecity);
        printf("CARTA 2 - %s\n", namecityc2);
        printf("A CARTA 2 VENCEU NA POPULAÇÃO\n");
    }
    
    if (areakm > areakmc2) {
        printf("CARTA 1 - %s\n", namecity);
        printf("CARTA 2 - %s\n", namecityc2);
        printf("A CARTA 1 VENCEU NA ÁREA\n");
    } else{
        printf("CARTA 1 - %s\n", namecity);
        printf("CARTA 2 - %s\n", namecityc2);
        printf("A CARTA 2 VENCEU NA ÁREA\n");
    }
    
    if (pontotur > pontoc2) {
        printf("CARTA 1 - %s\n", namecity);
        printf("CARTA 2 - %s\n", namecityc2);
        printf("A CARTA 1 VENCEU NOS PONTOS TURÍSTICOS\n");
    } else {
        printf("CARTA 1 - %s\n", namecity);
        printf("CARTA 2 - %s\n", namecityc2);
        printf("A CARTA 2 VENCEU NOS PONTOS TURÍSTICOS\n");
    }
    
                return 0;
            }
