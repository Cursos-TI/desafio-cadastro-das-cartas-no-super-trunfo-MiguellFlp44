#include <stdio.h>

int main() {
    // Declaração das variáveis da carta 1
    char estado1;
    char codigo1[10];
    char nome1[100];
    unsigned long int populacao1;
    float area1;
    float pib1; // em bilhões
    int pontos1;

    // Declaração das variáveis da carta 2
    char estado2;
    char codigo2[10];
    char nome2[100];
    unsigned long int populacao2;
    float area2;
    float pib2; // em bilhões
    int pontos2;

    // Leitura da carta 1
    printf("Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // Leitura da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos
    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;

    float pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    float pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    float inverso_densidade1 = 1 / densidade1;
    float inverso_densidade2 = 1 / densidade2;

    // Super Poder = população + área + PIB + pontos + PIB per capita + (1 / densidade)
    float super_poder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + pontos1 + pib_per_capita1 + inverso_densidade1;
    float super_poder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + pontos2 + pib_per_capita2 + inverso_densidade2;

    // Comparações (1 = Carta 1 venceu; 0 = Carta 2 venceu)
    int comp_populacao = populacao1 > populacao2;
    int comp_area = area1 > area2;
    int comp_pib = pib1 > pib2;
    int comp_pontos = pontos1 > pontos2;
    int comp_densidade = densidade1 < densidade2; // MENOR vence!
    int comp_pib_per_capita = pib_per_capita1 > pib_per_capita2;
    int comp_supe_
