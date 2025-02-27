#include <stdio.h>

int main() {
    char estado[20];
    
    char codcard[40];

    char namecity[20];

    int populacao;

    float areakm;

    float pib;

    int pontotur;


    // COMEÇANDO AGORA A ENTRADA DE DADOS DA CARTA 2 


    char estado_carta2;

    char codcard_carta2;

    char namecity_carta2;

    int populacao_carta2;

    float areakm_carta2;

    float pib_carta2;

    int pontotur_carta2;

    printf("CARTA 1\n");


    printf("Qual o estado da carta ?\n");
    scanf("%s", estado);

    printf("Qual o codigo da carta ?\n");
    scanf("%s", codcard);

    printf("Qual o nome da cidade ?\n");
    scanf("%s", namecity);

    printf("Qual a população ?\n");
    scanf("%f", &populacao);

    printf("Qual a area por Km² ?\n");
    scanf("%f", &areakm);

    printf("Qual o PIB da cidade ?\n");
    scanf("%f", &pib);

    printf("Qual a pontuação turistica da cidade ?\n");
    scanf("%d", &pontotur);


    // ENTRADA E SAIDA DE DADOS CARTA 2

        printf (" CARTA 2\n");

   
        printf("Qual o codigo da carta ?\n");
        scanf("%s", estado_carta2);

        printf("Qual o codigo da carta ?\n");
        scanf("%s", codcard_carta2);

        printf("Qual o nome da cidade ?\n");
        scanf("%s", namecity_carta2);

        printf("Qual a população ?\n");
        scanf("%d", &populacao_carta2);

        printf("Qual o pib da cidade ?\n");
        scanf("%f", &pib_carta2);

        printf("Qual a pontuaçao turistica da cidade ?\n");
        scanf("%d", pontotur_carta2);

    return 0;
}
