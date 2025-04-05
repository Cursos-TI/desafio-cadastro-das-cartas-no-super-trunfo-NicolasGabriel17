
#include<stdio.h>

int main() {
    char estado[50];
    char codcard[50];
    char namecity[50];
    int populacao;
    float areakm;
    float pib;

    int pontotur, escolha1, escolha2;
    escolha1 = 0;
    escolha2 = 0;
    
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
    float resultado_card2;
    resultado_card2 = populacaoc2 / areakmc2;

    float pib_percapta2;
    pib_percapta2 = pib2 / populacaoc2;
    
    float soma1 = (pib + populacao + areakm + pontotur);
    

    float soma2 = (pib + populacaoc2 + areakmc2 + pontoc2);

    int resultado1, resultado2;
    resultado1 = 0;
    resultado2 = 0;
   
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


    printf("Comparar primeiro atributo\n");
    printf("1. Comparar pib\n");
    printf("2. Comparar a população\n");
    printf("3. Comparar a area²\n");
    printf("4. Comaprar pontos turisticos\n");
    printf("5. Comparar densidade populacional\n");
    printf("6. Comparar o pib percapta\n");
    printf("7. Comparar o superpoder\n");
    printf("Escolha o atributo:");
    scanf("%d", &escolha1);

    switch (escolha1)
    {
    case 1:
        if (resultado1 = pib > pib2 ? 1:0) {
        printf("A CARTA 1 VENCEU NO PIB\n");
        } else{
        printf("A CARTA 2 VENCEU NO PIB\n");
        }
        break;

        case 2:
        if (resultado1 = populacao > populacaoc2 ? 1:0) {
            printf("A CARTA 1 VENCEU NA POPULAÇÃO\n");
        } else{
            printf("A CARTA 2 VENCEU NA POPULAÇÃO\n");
        }
        break;
        case 3:
        if (resultado1 = areakm > areakmc2 ? 1:0) {
            printf("A CARTA 1 VENCEU NA ÁREA\n");
        } else{
            printf("A CARTA 2 VENCEU NA ÁREA\n");
        }
        break;
        case 4:
        if (resultado1 = pontotur > pontoc2 ? 1:0) {
            printf("A CARTA 1 VENCEU NOS PONTOS TURÍSTICOS\n");
        } else {
            printf("A CARTA 2 VENCEU NOS PONTOS TURÍSTICOS\n");
        }
        break;
        case 5:
        if (resultado1 = resultado_card1 > resultado_card2 ? 1:0){
            printf("A CARTA 1 VENCEU NA DENSIDADE POPULACIONAL");
        }else{
            printf("A CARTA 2 VENCEU NA DENSIDADE POPULACIONAL");
        }
        break;
        case 6:
        if (resultado1 = pib_percapta1 > pib_percapta2 ? 1:0){
            printf("A CARTA 1 VENCEU EM PIB PERCAPTA\n");
        }else{
            printf("A CARTA 2 VENCEU EM PIB PERCAPTA");
        }
        break;
        case 7: 
        if (resultado1 = soma1 > soma2 ? 1:0){
            printf("A CARTA 1 VENCEU EM SUPERPODER\n");
        }else{
            printf("A CARTA 2 VENCEU EM SUPERPODER\n");
        }
        default:
        printf("Esta opção é invalida!");
        break;
    }
       
        printf("Comparar segundo atributo\n");
        printf("1. Comparar pib\n");
        printf("2. Comparar a população\n");
        printf("3. Comparar a area²\n");
        printf("4. Comaprar pontos turisticos\n");
        printf("5. Comparar densidade populacional\n");
        printf("6. Comparar o pib percapta\n");
        printf("7. Comparar o superpoder\n");
        printf("Escolha o segundo atributo: ");
        scanf("%d", &escolha2);

        switch (escolha2)
        {
            case 1:
            if (resultado2 = pib > pib2 ? 1 : 0) {
            printf("A CARTA 1 VENCEU NO PIB\n");
            } else{
            printf("A CARTA 2 VENCEU NO PIB\n");
            }
            break;
    
            case 2:
            if (resultado2 = populacao > populacaoc2 ? 1:0) {
                printf("A CARTA 1 VENCEU NA POPULAÇÃO\n");
            } else{
                printf("A CARTA 2 VENCEU NA POPULAÇÃO\n");
            }
            break;
            case 3:
            if (resultado2 = areakm > areakmc2 ? 1:0) {
                printf("A CARTA 1 VENCEU NA ÁREA\n");
            } else{
                printf("A CARTA 2 VENCEU NA ÁREA\n");
            }
            break;
            case 4:
            if (resultado2 = pontotur > pontoc2 ? 1:0) {
                printf("A CARTA 1 VENCEU NOS PONTOS TURÍSTICOS\n");
            } else {
                printf("A CARTA 2 VENCEU NOS PONTOS TURÍSTICOS\n");
            }
            break;
            case 5:
            if (resultado2 = resultado_card1 > resultado_card2 ? 1:0){
                printf("A CARTA 1 VENCEU NA DENSIDADE POPULACIONAL");
            }else{
                printf("A CARTA 2 VENCEU NA DENSIDADE POPULACIONAL");
            }
            break;
            case 6:
            if (resultado2 = pib_percapta1 > pib_percapta2 ? 1:0){
                printf("A CARTA 1 VENCEU EM PIB PERCAPTA\n");
            }else{
                printf("A CARTA 2 VENCEU EM PIB PERCAPTA");
            }
            break;
            case 7: 
            if (resultado2 = soma1 > soma2 ? 1:0){
                printf("A CARTA 1 VENCEU EM SUPERPODER\n");
            }else{
                printf("A CARTA 2 VENCEU EM SUPERPODER\n");
            }
            default:
            printf("Esta opção é invalida!\n");
            break;
        }

            if (resultado1 && resultado2)
            {
                printf("Você ganhou!\n");
            } else if (resultado1 != resultado2)  
            {
                printf("Você empatou!\n");
            } else {
                printf("Você perdeu");
            }
            
            
    }

    
