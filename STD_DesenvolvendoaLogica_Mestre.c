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


                printf("**Bem-vindo ao jogo Super Trunfo de Estados Brasileiros!**\n");
    printf("**Neste jogo, você irá comparar dois estados brasileiros com base em diferentes atributos.**\n");
printf("Menu principal\n");
printf("1. Iniciar jogo\n");
printf("2. Ver regras\n");
printf("3. Sair\n");
printf("Escolha uma opção:\n ");
scanf("%d", &opcao);

switch (opcao) {   //menu de inicialização
    case 1:
        printf("Iniciando o jogo...\n");
        break;
    case 2:
        printf("As regras do jogo são as seguintes:\n");
        printf("1. Escolha dois atributos para comparar as cartas\n");
        printf("por exemplo: area, população, pib, pontos turisticos, etc.\n");
        printf("2. Os atributos não podem ser iguais\n");
        printf("3. Vence o resultado positivo\n");
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
   printf("Digite a area do estado %s (em km2): \n ", estadoA);
   scanf("%f", &areakm1);
   printf("Digite a populacao do estado %s: \n ", estadoA);
   scanf("%d", &populacaoA);
   printf("Digite o PIB do estado %s: \n ", estadoA);
   scanf("%f", &pibA);
   printf("Quantidade de pontos turisticos do estado %s: \n ", estadoA);
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

    printf("Escolha o primeiro atributo para comparar as cartas:\n");
    printf("1. Area\n");
    printf("2. Populacao\n");
    printf("3. PIB\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade (o menor valor vence) \n");
    printf("Digite o numero do atributo escolhido: ");
    int atributo,resultado1;
    scanf("%d", &atributo);

    switch (atributo) {
        case 1:
            printf("Voce escolheu area\n");
            resultado1 = areakm1 > areakm2 ? 1 : (areakm1 < areakm2 ? 1 : 0);
            break;
        case 2:
            printf("Voce escolheu populacao\n");
            resultado1 = populacaoA > populacaoB ? 1 : (populacaoA < populacaoB ? 1 : 0);
            break;
        case 3:
            printf("Voce escolheu PIB\n");
            resultado1 = pibA > pibB ? 1 : (pibA < pibB ? 1 : 0);
            break;
        case 4:
            printf("Voce escolheu pontos turisticos\n");
            resultado1 = pontot1 > pontot2 ? 1 : (pontot1 < pontot2 ? 1 : 0);
            break;
        case 5:
            printf("Voce escolheu densidade\n");
            resultado1 = densidade1 < densidade2 ? 1 : (densidade2 < densidade1 ? 0 : 1);
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    printf("Escolha o segundo atributo para comparar as cartas:\n");
    printf("1. Area\n");
    printf("2. Populacao\n");
    printf("3. PIB\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade (o menor valor vence) \n");
    printf("Digite o numero do atributo escolhido: ");
    int atributo2,resultado2;
    scanf("%d", &atributo2);

    if (atributo2 == atributo) {
        printf("Atributo já escolhido, escolha um atributo diferente.\n");
    } else {
        switch (atributo2) {
        case 1:
            printf("Voce escolheu area\n");
            resultado2 = areakm1 > areakm2 ? 1 : (areakm1 < areakm2 ? 1 : 0);
            break;
        case 2:
            printf("Voce escolheu populacao\n");
            resultado2 = populacaoA > populacaoB ? 1 : (populacaoA < populacaoB ? 1 : 0);
            break;
        case 3:
            printf("Voce escolheu PIB\n");
            resultado2 = pibA > pibB ? 1 : (pibA < pibB ? 1 : 0);
            break;
        case 4:
            printf("Voce escolheu pontos turisticos\n");
            resultado2 = pontot1 > pontot2 ? 1 : (pontot1 < pontot2 ? 1 : 0);
            break;
        case 5:
            printf("Voce escolheu densidade\n");
            resultado2 = densidade1 < densidade2 ? 1 : (densidade2 < densidade1 ? 0 : 1);
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    if (resultado1 && resultado2) {
        printf(" Voce venceu!\n");

    } else if (resultado1 != resultado2) {
        printf("Empatou!\n");

        } else {
            printf("Voce perdeu!\n");
        }
    }
    printf("\n");

    printf("****** DETALHES DAS CARTAS *****\n");

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
    printf("Superpoder da carta 1: %.2f\n", superpA);

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
    printf("Superpoder da carta 2: %.2f\n", superpB);
    return 0;
}
