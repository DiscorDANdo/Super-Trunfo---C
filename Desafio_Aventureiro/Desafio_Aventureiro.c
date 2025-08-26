#include <stdio.h>

int main() {
    // Carta 1

    char codigo_carta1[3];
    char estado_carta1[50];
    char cidade_carta1[50];
    int populacao_carta1;
    float area_em_km2_carta1;
    float pib_carta1;
    int pontos_turisticos_carta1;
    float densidade_populacional_carta1;
    float pib_per_capita_carta1;

     // Codigo
    printf("Digite o codigo: ");
    scanf("%3s", codigo_carta1);

    // Estado
    printf("Digite o estado: ");
    scanf("%50s", estado_carta1);

    // cidade
    printf("Digite a cidade: ");
    scanf("%50s", cidade_carta1);

    // População
    printf("Digite a populacao: ");
    scanf("%d", &populacao_carta1);

    // Área em km²
    printf("Digite a area em km2: ");
    scanf("%f", &area_em_km2_carta1);

    // PIB
    printf("Digite o PIB: ");
    scanf("%f", &pib_carta1);

    // Pontos turísticos
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_carta1);

    densidade_populacional_carta1 = populacao_carta1 / area_em_km2_carta1;
    pib_per_capita_carta1 = pib_carta1 / populacao_carta1;

    printf(
        "\n============================================================================\n"
        "Codigo: %s\n"
        "Estado: %s\n"
        "Cidade: %s\n"
        "Populacao: %d\n"
        "Area em km2: %.2f\n"
        "PIB: %.2f\n"
        "Pontos turisticos: %d\n"
        "Densidade populacional: %.2f\n"
        "PIB per capita: %.2f\n",
        codigo_carta1, estado_carta1, cidade_carta1, populacao_carta1, area_em_km2_carta1, pib_carta1, pontos_turisticos_carta1, densidade_populacional_carta1, pib_per_capita_carta1);
    printf("============================================================================\n");

    // Carta 2

    char codigo_carta2[3];
    char estado_carta2[50];
    char cidade_carta2[50];
    int populacao_carta2;
    float area_em_km2_carta2;
    float pib_carta2;
    int pontos_turisticos_carta2;
    float densidade_populacional_carta2;
    float pib_per_capita_carta2;

    // Codigo
    printf("Digite o codigo: ");
    scanf("%3s", codigo_carta2);

    // Estado
    printf("Digite o estado: ");
    scanf("%50s", estado_carta2);

    // cidade
    printf("Digite a cidade: ");
    scanf("%50s", cidade_carta2);

    // População
    printf("Digite a populacao: ");
    scanf("%d", &populacao_carta2);

    // Área em km²
    printf("Digite a area em km2: ");
    scanf("%f", &area_em_km2_carta2);

    // PIB
    printf("Digite o PIB: ");
    scanf("%f", &pib_carta2);

    // Pontos turísticos
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_carta2);

    densidade_populacional_carta2 = populacao_carta2 / area_em_km2_carta2;
    pib_per_capita_carta2 = pib_carta2 / populacao_carta2;

    printf(
        "\n============================================================================\n"
        "Codigo: %s\n"
        "Estado: %s\n"
        "Cidade: %s\n"
        "Populacao: %d\n"
        "Area em km2: %.2f\n"
        "PIB: %.2f\n"
        "Pontos turisticos: %d\n"
        "Densidade populacional: %.2f\n"
        "PIB per capita: %.2f\n",
        codigo_carta2, estado_carta2, cidade_carta2, populacao_carta2, area_em_km2_carta2, pib_carta2, pontos_turisticos_carta2, densidade_populacional_carta2, pib_per_capita_carta2);
    printf("============================================================================\n");

    // Para evitar que o programa feche rapidamente
    printf("\nPressione Enter para sair...");
    getchar();  // Limpa o buffer
    getchar();  // Espera o usuário pressionar Enter

    return 0;
}