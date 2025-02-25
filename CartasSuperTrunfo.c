#include <stdio.h>

int main() {
    char estado[20];
    
    char codcard[40];

    char namecity[20];

    int populacao;

    float areakm;

    float pib;

    int pontotur;

    printf("Qual o estado da carta ?\n");
    scanf("%s", &estado);

    printf("Qual o codigo da carta ?\n");
    scanf("%s", &codcard);

    printf("Qual o nome da cidade ?\n");
    scanf("%s", &namecity);

    printf("Qual a população ?\n");
    scanf("%d", &populacao);

    printf("Qual a area por Km² ?\n");
    scanf("%f", &areakm);

    printf("Qual o PIB da cidade ?\n");
    scanf("%f", &pib);

    printf("Qual a pontuação turistica da cidade ?");
    scanf("%d",&pontotur);







    return 0;
}
