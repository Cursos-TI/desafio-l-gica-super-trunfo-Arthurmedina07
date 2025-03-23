#include <stdio.h>

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado1[30], estado2[30];
    char codigo1[10], codigo2[10];
    char nome1[30], nome2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Cadastro da primeira carta
    printf("Digite o código da primeira cidade:\n ");
    scanf("%s", codigo1);
    printf("Digite o estado da primeira cidade:\n ");
    scanf("%s", estado1);
    printf("Digite o nome da primeira cidade:\n ");
    scanf("%s", nome1);
    printf("Digite a população da primeira cidade:\n ");
    scanf("%d", &populacao1);
    printf("Digite a área da primeira cidade (em km²):\n ");
    scanf("%f", &area1);
    printf("Digite o PIB da primeira cidade (em bilhões):\n ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da primeira cidade:\n ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da segunda carta
    printf("Digite o código da segunda cidade:\n ");
    scanf("%s", codigo2);
    printf("Digite o estado da segunda cidade:\n ");
    scanf("%s", estado2);
    printf("Digite o nome da segunda cidade:\n ");
    scanf("%s", nome2);
    printf("Digite a população da segunda cidade:\n ");
    scanf("%d", &populacao2);
    printf("Digite a área da segunda cidade (em km²):\n ");
    scanf("%f", &area2);
    printf("Digite o PIB da segunda cidade (em bilhões):\n ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da segunda cidade:\n ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

    // Comparação de atributo fixo: População
    printf("\nComparação de cartas (Atributo: População):\n");
    if (populacao1 > populacao2) {
        printf("A cidade vencedora é: %s (%s) com %d habitantes.\n", nome1, estado1, populacao1);
    } else if (populacao1 < populacao2) {
        printf("A cidade vencedora é: %s (%s) com %d habitantes.\n", nome2, estado2, populacao2);
    } else {
        printf("Empate! Ambas as cidades têm %d habitantes.\n", populacao1);
    }

    return 0;
}