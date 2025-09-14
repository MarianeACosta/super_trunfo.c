#include <stdio.h>

int main() {

int populacaoA, populacaoB;
int pontot1, pontot2;
float areakm1, areakm2, densidade1, densidade2;;
float pibA, pibB, pibpc1, pibpc2;
float superpA, superpB;
char citA[50], citB[50];
char estadoA[50], estadoB[50];
char cod1[50], cod2[50];
int resultadoA, resultadoB;

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
   superpA = (populacaoA + areakm1 + pibA + densidade1 + pibpc1 + pontot1) / 4;
   superpB = (populacaoB + areakm2 + pibB + densidade2 + pibpc2 + pontot2) / 4;
   resultadoA = (superpA > superpB);
   resultadoB = (superpB > superpA);

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
    printf("Resultado da carta 1: %d\n", resultadoA);
    printf("Resultado da carta 2: %d\n", resultadoB);



    printf("\n");
    printf(" ******Comparando as cartas:****** \n");
    if (populacaoA > populacaoB) {
        printf("O estado %s tem uma populacao maior que %s.\n", estadoA, estadoB);
    } else {
        printf("O estado %s tem uma populacao menor que %s.\n", estadoA, estadoB);
    }

    if (areakm1 > areakm2) {
        printf("O estado %s tem uma area maior que %s.\n", estadoA, estadoB);
    } else {
        printf("O estado %s tem uma area menor que %s.\n", estadoA, estadoB);
    }

    if (pibA > pibB) {
        printf("O estado %s tem um PIB maior que %s.\n", estadoA, estadoB);
    } else {
        printf("O estado %s tem um PIB menor que %s.\n", estadoA, estadoB);
    }

    if (pontot1 > pontot2) {
        printf("O estado %s tem mais pontos turisticos que %s.\n", estadoA, estadoB);
    } else {
        printf("O estado %s tem menos pontos turisticos que %s.\n", estadoA, estadoB);
    }

    if (superpA > superpB) {
        printf("O estado %s tem um superpoder maior que %s.\n", estadoA, estadoB);
    } else if (superpB > superpA) {
        printf("O estado %s tem um superpoder maior que %s.\n", estadoB, estadoA);
    } else {
        printf("Os estados %s e %s tem superpoderes iguais.\n", estadoA, estadoB);
    }
    printf("\n");

    //soma dos atributos para determinar o vencedor
    float somaA = populacaoA + areakm1 + pibA + pontot1 + superpA / 4.0;
    float somaB = populacaoB + areakm2 + pibB + pontot2 + superpB / 4.0;

    printf("\n");

    if (somaA > somaB) {
        printf("Carta 1 vence a carta 2!\n");
    } else if (somaB > somaA) {
        printf("Carta 2 vence a carta 1!\n");
    } else {
        printf("Empate !\n");
    }

    return 0;
}
