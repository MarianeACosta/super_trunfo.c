#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int populacaoA, populacaoB,opcao;
    int pontot1, pontot2;
    float areakm1, areakm2, densidade1, densidade2;;
    float pibA, pibB, pibpc1, pibpc2;
    float superpA, superpB;
    char citA[50], citB[50];
    char estadoA[50], estadoB[50];
    char cod1[50], cod2[50];
    int resultadoA, resultadoB;

printf("Menu principal\n");
printf("1. Iniciar jogo\n");
printf("2. Ver regras\n");
printf("3. Sair\n");
printf("Escolha uma opção:\n ");
scanf("%d", &opcao);

switch (opcao) {
    case 1:
        printf("Iniciando o jogo...\n");
        break;
    case 2:
        printf("As regras do jogo são as seguintes:\n");
        printf("1. Escolha um atributo para comparar as cartas\n");
        printf("por exemplo: area, população, pib, pontos turisticos, etc.\n");
        printf("2. Atributo 1 vence Atributo 2\n");
        printf("3. Atributo 2 vence Atributo 1\n");
        break;
    case 3:
        printf("Saindo do jogo...\n");
        break;
    default:
        printf("Opção inválida!\n");
        break;
}

   printf("Codigo da carta 1: ");
   scanf("%s", cod1);
   printf("Digite o nome do primeiro estado: ");
   scanf("%s", estadoA);
   printf("Digite o nome da cidade: ");
   scanf("%s", citA);
   printf("Digite a area do estado %s (em km2): ", estadoA);
   scanf("%f", &areakm1);
   printf("Digite a populacao do estado %s: ", estadoA);
   scanf("%d", &populacaoA);
   printf("Digite o PIB do estado %s: ", estadoA);
   scanf("%f", &pibA);
   printf("Quantidade de pontos turisticos do estado %s: ", estadoA);
   scanf("%d", &pontot1);

    printf("\n");

   printf("Codigo da carta 2: ");
   scanf("%s", cod2);
   printf("Digite o nome do segundo estado: ");
   scanf("%s", estadoB);
   printf("Digite o nome da cidade: ");
   scanf("%s", citB);
   printf("Digite a area do estado %s (em km2): ", estadoB);
   scanf("%f", &areakm2);
   printf("Digite a populacao do estado %s: ", estadoB);
   scanf("%d", &populacaoB);
   printf("Digite o PIB do estado %s: ", estadoB);
   scanf("%f", &pibB);
   printf("Quantidade de pontos turisticos do estado %s: ", estadoB);
   scanf("%d", &pontot2);

   densidade1 = (float) populacaoA / areakm1;
   densidade2 = (float) populacaoB / areakm2;
   pibpc1 = pibA / populacaoA;
   pibpc2 = pibB / populacaoB;
   superpA = (densidade1 + pibpc1) / 2;
   superpB = (densidade2 + pibpc2) / 2;

    printf("\n");

    printf("Escolha um atributo para comparar as cartas:\n");
    printf("1. Area\n");
    printf("2. Populacao\n");
    printf("3. PIB\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade\n");
    printf("Digite o numero do atributo escolhido: ");
    int atributo;
    scanf("%d", &atributo);

    switch (atributo) {
        case 1:
            if (areakm1 > areakm2) {
                printf("Carta 1 vence em Area!\n");
            } else if (areakm1 < areakm2) {
                printf("Carta 2 vence em Area!\n");
            } else {
                printf("Empate em Area!\n");
            }
            break;
        case 2:
            if (populacaoA > populacaoB) {
                printf("Carta 1 vence por Populacao!\n");
            } else if (populacaoA < populacaoB) {
                printf("Carta 2 vence por Populacao!\n");
            } else {
                printf("Empate por Populacao!\n");
            }
            break;
        case 3:
            if (pibA > pibB) {
                printf("Carta 1 vence no PIB!\n");
            } else if (pibA < pibB) {
                printf("Carta 2 vence no PIB!\n");
            } else {
                printf("Empate no PIB!\n");
            }
            break;
        case 4:   
            if (pontot1 > pontot2) {
                printf("Carta 1 vence em Pontos Turisticos!\n");
            } else if (pontot1 < pontot2) {
                printf("Carta 2 vence em Pontos Turisticos!\n");
            } else {
                printf("Empate em Pontos Turisticos!\n");
            }
            break; 
        case 5:
            if (densidade1 < densidade2) {
                printf("Carta 1 vence em Densidade!\n");
            } else if (densidade2 < densidade1) {
                printf("Carta 2 vence em Densidade!\n");
            } else {
                printf("Empate em Densidade!\n");
            }
            break; 
        default:
            printf("Atributo inválido!\n");
            break;
    }

    printf("\n");
    printf("****** Detalhes das cartas *****\n");
    printf("\n");
    printf("Codigo da carta 1: %s\n", cod1);
    printf("Estado: %s\n", estadoA);
    printf("Cidade: %s\n", citA);
    printf("Area: %.2f km2\n", areakm1);
    printf("Populacao: %d\n", populacaoA);
    printf("PIB: %.2f\n", pibA);
    printf("Pontos turisticos: %d\n", pontot1);
   
    printf("\nEstatisticas da carta 1:\n");
    printf("Densidade demografica: %.2f hab/km2\n", densidade1);
    printf("PIB per capita: %.2f\n", pibpc1);
    
    printf("\n");

    printf("Codigo da carta 2: %s\n", cod2); 
    printf("Estado: %s\n", estadoB);
    printf("Cidade: %s\n", citB);
    printf("Area: %.2f km2\n", areakm2);
    printf("Populacao: %d\n", populacaoB);
    printf("PIB: %.2f\n", pibB);
    printf("Pontos turisticos: %d\n", pontot2);

    printf("\nEstatisticas da carta 2:\n");
    printf("Densidade demografica: %.2f hab/km2\n", densidade2);
    printf("PIB per capita: %.2f\n", pibpc2);

    printf("\n");

    printf("Superpoder da carta 1: %.2f\n", superpA);
    printf("Superpoder da carta 2: %.2f\n", superpB);
    return 0;
} 
