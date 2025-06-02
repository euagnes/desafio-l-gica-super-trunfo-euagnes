#include <stdio.h>

int main() {
    // Dados da carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Dados da carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Leitura da carta 1
    printf("============= Cadastro da Carta 1: =============\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos1);

    // Leitura da carta 2
    printf("\n============= Cadastro da Carta 2: =============\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código (ex: B02): ");
    scanf("%s", codigo2);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pib_per_capita1 = (pib1 * 1000000000.0) / populacao1;
    float pib_per_capita2 = (pib2 * 1000000000.0) / populacao2;

    float super_poder1 = populacao1 + area1 + pib1 + pontos1 + pib_per_capita1 + (1.0 / densidade1);
    float super_poder2 = populacao2 + area2 + pib2 + pontos2 + pib_per_capita2 + (1.0 / densidade2);

// Exibição dos dados da Carta 1
    printf("\n===== Exibição carta 1: =====\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    // Exibição dos dados da Carta 2
    printf("\n===== Exibição carta 2: =====\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    // Impressão dos resultados das comparações
    printf("\n============= Comparação de Cartas: =============\n\n");

    // Função auxiliar para mostrar o resultado formatado
    #define RESULTADO(v1, v2, nomeAtributo) \
        if (v1 > v2) \
            printf("Resultado: Carta 1 (%s) venceu!\n\n", cidade1); \
        else \
            printf("Resultado: Carta 2 (%s) venceu!\n\n", cidade2);

    // População
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%c): %lu\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %lu\n", cidade2, estado2, populacao2);
    RESULTADO(populacao1, populacao2, "População");

    return 0;
}
