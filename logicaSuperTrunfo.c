#include <stdio.h>
#include <string.h>

// Função auxiliar para obter o nome do atributo
const char* nomeAtributo(int opcao) {
    switch(opcao) {
        case 1: return "População";
        case 2: return "Área";
        case 3: return "PIB";
        case 4: return "Pontos Turísticos";
        case 5: return "Densidade Demográfica";
        default: return "Desconhecido";
    }
}

// Função auxiliar para retornar o valor de um atributo
float obterValor(int opcao, unsigned long int pop, float area, float pib, int pontos, float densidade) {
    switch(opcao) {
        case 1: return (float)pop;
        case 2: return area;
        case 3: return pib;
        case 4: return (float)pontos;
        case 5: return densidade;
        default: return 0;
    }
}

int main() {
    // Dados da carta 1
    char nomePais1[50] = "Brasil";
    unsigned long int populacao1 = 211000000;
    float area1 = 8515767.0;
    float pib1 = 1868.0;
    int pontos1 = 100;

    // Dados da carta 2
    char nomePais2[50] = "Japão";
    unsigned long int populacao2 = 125800000;
    float area2 = 377975.0;
    float pib2 = 4937.0;
    int pontos2 = 150;

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int atributo1 = -1, atributo2 = -1;
    int opcaoValida = 0;

    // Menu de seleção do primeiro atributo
    while (!opcaoValida) {
        printf("\n===== SUPER TRUNFO - ESCOLHA O 1º ATRIBUTO =====\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Demográfica\n");
        printf("Digite o número do primeiro atributo: ");
        scanf("%d", &atributo1);

        if (atributo1 >= 1 && atributo1 <= 5) {
            opcaoValida = 1;
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }
    }

    // Menu dinâmico para o segundo atributo
    opcaoValida = 0;
    while (!opcaoValida) {
        printf("\n===== SUPER TRUNFO - ESCOLHA O 2º ATRIBUTO =====\n");
        for (int i = 1; i <= 5; i++) {
            if (i != atributo1) {
                printf("%d - %s\n", i, nomeAtributo(i));
            }
        }
        printf("Digite o número do segundo atributo: ");
        scanf("%d", &atributo2);

        if (atributo2 >= 1 && atributo2 <= 5 && atributo2 != atributo1) {
            opcaoValida = 1;
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }
    }

    // Obter valores dos atributos
    float valor1_attr1 = obterValor(atributo1, populacao1, area1, pib1, pontos1, densidade1);
    float valor2_attr1 = obterValor(atributo1, populacao2, area2, pib2, pontos2, densidade2);

    float valor1_attr2 = obterValor(atributo2, populacao1, area1, pib1, pontos1, densidade1);
    float valor2_attr2 = obterValor(atributo2, populacao2, area2, pib2, pontos2, densidade2);

    float soma1 = valor1_attr1 + valor1_attr2;
    float soma2 = valor2_attr1 + valor2_attr2;

    // Resultado final formatado
    printf("\n================== RESULTADO FINAL ==================\n");
    printf("Carta 1: %s\n", nomePais1);
    printf("Carta 2: %s\n\n", nomePais2);

    printf("Atributos escolhidos:\n");
    printf("1. %s\n", nomeAtributo(atributo1));
    printf("2. %s\n\n", nomeAtributo(atributo2));

    printf("VALORES DOS ATRIBUTOS:\n");
    printf("%s:\n", nomePais1);
    printf(" - %s: %.2f\n", nomeAtributo(atributo1), valor1_attr1);
    printf(" - %s: %.2f\n", nomeAtributo(atributo2), valor1_attr2);
    printf("Total: %.2f\n\n", soma1);

    printf("%s:\n", nomePais2);
    printf(" - %s: %.2f\n", nomeAtributo(atributo1), valor2_attr1);
    printf(" - %s: %.2f\n", nomeAtributo(atributo2), valor2_attr2);
    printf("Total: %.2f\n\n", soma2);

    printf("VENCEDOR: ");
    if (soma1 > soma2) {
        printf("Carta 1 - %s venceu!\n", nomePais1);
    } else if (soma2 > soma1) {
        printf("Carta 2 - %s venceu!\n", nomePais2);
    } else {
        printf("Empate!\n");
    }
    printf("=====================================================\n");

    return 0;
}
