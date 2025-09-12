#include <stdio.h>

int main() {

int populacaoA, populacaoB;
int pontot1, pontot2;
float areakm1, areakm2, densidade1, densidade2;
float pibA, pibB, pibpc1, pibpc2;
char citA[50], citB[50];
char estadoA[50], estadoB[50];
char cod1[50], cod2[50];

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


    return 0;
}
