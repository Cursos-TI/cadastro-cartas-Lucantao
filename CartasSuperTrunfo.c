#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  float densidadePop1;
  float densidadePop2;
  float pibPercap1;
  float pibPercap2;
  

  char estado1;
  char codigo1[4];
  char nomeCidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;

  char estado2;
  char codigo2[4];
  char nomeCidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosTuristicos2;

  // =========================
    // Entrada de dados - Carta 1
    // =========================

  printf("=== Cadastro da Carta 1 ===\n");

  printf("Estado (A a H): ");
  scanf("%c", &estado1);

  printf("Codigo da carta (ex: A01): ");
  scanf("%s", &codigo1);

  printf("Nome da cidade: ");
  scanf("%s", &nomeCidade1);

  printf("Populacao: ");
  scanf("%d", &populacao1);

  printf("Area em km2: ");
  scanf("%f", &area1);

  printf("PIB; ");
  scanf("%f", &pib1);

  printf("Numero de pontos turisticos: ");
  scanf("%d", &pontosTuristicos1);

  // =========================
    // Entrada de dados - Carta 2
    // =========================

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex: B02): ");
    scanf("%s", &codigo2);

    printf("Nome da cidade: ");
    scanf(" %s", nomeCidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area em km²: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    densidadePop1 = (populacao1) / area1;
    densidadePop2 = (populacao2) / area2;

    pibPercap1 = (pib1) / populacao1;
    pibPercap2 = (pib2) / populacao2;

     // =========================
    // Exibição dos dados - Carta 1
    // =========================

    printf("\n=== Carta 1 ===\n");
    printf(" A densidade populacional é: %f\n", densidadePop1);
    printf("o pib percapita é: %f\n", pib1 );
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %2f bilhoes de reais\n", pib1);
    printf("Numero de pontos Turisticos: %d\n", pontosTuristicos1);

     // =========================
    // Exibição dos dados - Carta 2
    // =========================
    printf("\n=== Carta 2 ===\n");
    printf("A densidade populacional é: %f\n", densidadePop2);
    printf("O pib percapta é: %f\n", pibPercap2);
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);



return 0;
} 
