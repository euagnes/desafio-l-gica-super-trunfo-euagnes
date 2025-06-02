#include <stdio.h>
#include <string.h>

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

    // Cálculo das densidades demográficas
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int opcao = -1;

    while (opcao != 0) {
        // Menu interativo
        printf("\n===== SUPER TRUNFO - Comparação de Países =====\n");
        printf("Escolha o atributo para comparar:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Demográfica\n");
        printf("0 - Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        printf("\n--- Comparando: %s x %s ---\n", nomePais1, nomePais2);

        switch (opcao) {
            case 1:
                printf("Atributo escolhido: População\n");
                printf("%s: %lu habitantes\n", nomePais1, populacao1);
                printf("%s: %lu habitantes\n", nomePais2, populacao2);
                if (populacao1 > populacao2)
                    printf("Resultado: Carta 1 (%s) venceu!\n", nomePais1);
                else if (populacao2 > populacao1)
                    printf("Resultado: Carta 2 (%s) venceu!\n", nomePais2);
                else
                    printf("Resultado: Empate!\n");
                break;

            case 2:
                printf("Atributo escolhido: Área\n");
                printf("%s: %.2f km²\n", nomePais1, area1);
                printf("%s: %.2f km²\n", nomePais2, area2);
                if (area1 > area2)
                    printf("Resultado: Carta 1 (%s) venceu!\n", nomePais1);
                else if (area2 > area1)
                    printf("Resultado: Carta 2 (%s) venceu!\n", nomePais2);
                else
                    printf("Resultado: Empate!\n");
                break;

            case 3:
                printf("Atributo escolhido: PIB\n");
                printf("%s: R$ %.2f bilhões\n", nomePais1, pib1);
                printf("%s: R$ %.2f bilhões\n", nomePais2, pib2);
                if (pib1 > pib2)
                    printf("Resultado: Carta 1 (%s) venceu!\n", nomePais1);
                else if (pib2 > pib1)
                    printf("Resultado: Carta 2 (%s) venceu!\n", nomePais2);
                else
                    printf("Resultado: Empate!\n");
                break;

            case 4:
                printf("Atributo escolhido: Pontos Turísticos\n");
                printf("%s: %d pontos\n", nomePais1, pontos1);
                printf("%s: %d pontos\n", nomePais2, pontos2);
                if (pontos1 > pontos2)
                    printf("Resultado: Carta 1 (%s) venceu!\n", nomePais1);
                else if (pontos2 > pontos1)
                    printf("Resultado: Carta 2 (%s) venceu!\n", nomePais2);
                else
                    printf("Resultado: Empate!\n");
                break;

            case 5:
                printf("Atributo escolhido: Densidade Demográfica (menor vence)\n");
                printf("%s: %.2f hab/km²\n", nomePais1, densidade1);
                printf("%s: %.2f hab/km²\n", nomePais2, densidade2);
                if (densidade1 < densidade2)
                    printf("Resultado: Carta 1 (%s) venceu!\n", nomePais1);
                else if (densidade2 < densidade1)
                    printf("Resultado: Carta 2 (%s) venceu!\n", nomePais2);
                else
                    printf("Resultado: Empate!\n");
                break;

            case 0:
                printf("Saindo do jogo. Até a próxima!\n");
                break;

            default:
                printf("Opção inválida! Tente novamente digitando um número entre 0 e 5.\n");
                break;
        }
    }

    return 0;
}
