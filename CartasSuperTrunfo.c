#include <stdio.h>

struct Carta {
    char nome[50];
    unsigned long int populacao;
    int area;
    int pib;
    int pontosTuristicos;
    float densidade;
    float pibPerCapita;
    float superPoder;
};

int main() {
    struct Carta carta1, carta2;

    // LENDO A CARTA 1
    printf("Digite o nome da Carta 1: ");
    fgets(carta1.nome, 50, stdin);

    printf("Digite a populacao da Carta 1: ");
    scanf("%lu", &carta1.populacao);

    printf("Digite a area da Carta 1: ");
    scanf("%d", &carta1.area);

    printf("Digite o PIB da Carta 1: ");
    scanf("%d", &carta1.pib);

    printf("Digite o numero de pontos turisticos da Carta 1: ");
    scanf("%d", &carta1.pontosTuristicos);

    getchar(); // limpa o buffer do teclado

    // LENDO A CARTA 2
    printf("\nDigite o nome da Carta 2: ");
    fgets(carta2.nome, 50, stdin);

    printf("Digite a populacao da Carta 2: ");
    scanf("%lu", &carta2.populacao);

    printf("Digite a area da Carta 2: ");
    scanf("%d", &carta2.area);

    printf("Digite o PIB da Carta 2: ");
    scanf("%d", &carta2.pib);

    printf("Digite o numero de pontos turisticos da Carta 2: ");
    scanf("%d", &carta2.pontosTuristicos);

    // CALCULANDO DENSIDADE POPULACIONAL
    carta1.densidade = (float)carta1.populacao / carta1.area;
    carta2.densidade = (float)carta2.populacao / carta2.area;

    // CALCULANDO PIB PER CAPITA
    carta1.pibPerCapita = (float)carta1.pib / carta1.populacao;
    carta2.pibPerCapita = (float)carta2.pib / carta2.populacao;

    // CALCULANDO SUPER PODER
    // super poder = populacao + area + pib + pontos + pib per capita + (1 / densidade)
    carta1.superPoder = (float)carta1.populacao + carta1.area + carta1.pib + carta1.pontosTuristicos + carta1.pibPerCapita + (1.0 / carta1.densidade);
    carta2.superPoder = (float)carta2.populacao + carta2.area + carta2.pib + carta2.pontosTuristicos + carta2.pibPerCapita + (1.0 / carta2.densidade);

    // COMPARANDO CADA ATRIBUTO
    printf("\n===== Comparação de Cartas =====\n");

    // População (maior vence)
    if (carta1.populacao > carta2.populacao) {
        printf("Populacao: Carta 1 venceu (1)\n");
    } else {
        printf("Populacao: Carta 2 venceu (0)\n");
    }

    // Área (maior vence)
    if (carta1.area > carta2.area) {
        printf("Area: Carta 1 venceu (1)\n");
    } else {
        printf("Area: Carta 2 venceu (0)\n");
    }

    // PIB (maior vence)
    if (carta1.pib > carta2.pib) {
        printf("PIB: Carta 1 venceu (1)\n");
    } else {
        printf("PIB: Carta 2 venceu (0)\n");
    }

    // Pontos Turisticos (maior vence)
    if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
        printf("Pontos Turisticos: Carta 1 venceu (1)\n");
    } else {
        printf("Pontos Turisticos: Carta 2 venceu (0)\n");
    }

    // Densidade (MENOR vence)
    if (carta1.densidade < carta2.densidade) {
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    }

    // PIB per capita (maior vence)
    if (carta1.pibPerCapita > carta2.pibPerCapita) {
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    } else {
        printf("PIB per Capita: Carta 2 venceu (0)\n");
    }

    // Super Poder (maior vence)
    if (carta1.superPoder > carta2.superPoder) {
        printf("Super Poder: Carta 1 venceu (1)\n");
    } else {
        printf("Super Poder: Carta 2 venceu (0)\n");
    }

    return 0;
}
