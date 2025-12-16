#include <stdio.h>

int main() {
    // Cartas pré-cadastradas
    char nome1[] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8516000.0;
    float pib1 = 9200.0; // bilhões
    int pontos1 = 45;
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    char nome2[] = "Argentina";
    int populacao2 = 45380000;
    float area2 = 2780000.0;
    float pib2 = 488.0; // bilhões
    int pontos2 = 30;
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    int opcao1, opcao2;
    float valor1_c1, valor1_c2;
    float valor2_c1, valor2_c2;
    float soma1, soma2;

    // ponteiros para nomes dos atributos
    const char *atributo1;
    const char *atributo2;

    printf("=== SUPER TRUNFO - DESAFIO FINAL ===\n\n");
    printf("Cartas utilizadas:\n1) %s\n2) %s\n\n", nome1, nome2);

    // ---------- MENU 1 ----------
    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Demografica\n6 - PIB per Capita\n");
    printf("Opcao: ");
    scanf("%d", &opcao1);

    if (opcao1 < 1 || opcao1 > 6) {
        printf("Opcao invalida! Encerrando.\n");
        return 0;
    }

    switch (opcao1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; atributo1 = "Populacao"; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; atributo1 = "Area"; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; atributo1 = "PIB"; break;
        case 4: valor1_c1 = pontos1; valor1_c2 = pontos2; atributo1 = "Pontos Turisticos"; break;
        case 5: valor1_c1 = densidade1; valor1_c2 = densidade2; atributo1 = "Densidade Demografica"; break;
        case 6: valor1_c1 = pibPerCapita1; valor1_c2 = pibPerCapita2; atributo1 = "PIB per Capita"; break;
    }

    // ---------- MENU 2 (DINÂMICO) ----------
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");

    if (opcao1 != 1) printf("1 - Populacao\n");
    if (opcao1 != 2) printf("2 - Area\n");
    if (opcao1 != 3) printf("3 - PIB\n");
    if (opcao1 != 4) printf("4 - Pontos Turisticos\n");
    if (opcao1 != 5) printf("5 - Densidade Demografica\n");
    if (opcao1 != 6) printf("6 - PIB per Capita\n");

    printf("Opcao: ");
    scanf("%d", &opcao2);

    if (opcao2 < 1 || opcao2 > 6 || opcao2 == opcao1) {
        printf("Opcao invalida! Encerrando.\n");
        return 0;
    }

    switch (opcao2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; atributo2 = "Populacao"; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; atributo2 = "Area"; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; atributo2 = "PIB"; break;
        case 4: valor2_c1 = pontos1; valor2_c2 = pontos2; atributo2 = "Pontos Turisticos"; break;
        case 5: valor2_c1 = densidade1; valor2_c2 = densidade2; atributo2 = "Densidade Demografica"; break;
        case 6: valor2_c1 = pibPerCapita1; valor2_c2 = pibPerCapita2; atributo2 = "PIB per Capita"; break;
    }

    // ---------- SOMA ----------
    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;

    // ---------- RESULTADO ----------
    printf("\n=============== RESULTADO ===============\n");

    printf("\nComparando %s vs %s\n", nome1, nome2);

    printf("\nAtributo 1: %s\n", atributo1);
    printf("%s: %.2f | %s: %.2f\n", nome1, valor1_c1, nome2, valor1_c2);

    printf("\nAtributo 2: %s\n", atributo2);
    printf("%s: %.2f | %s: %.2f\n", nome1, valor2_c1, nome2, valor2_c2);

    printf("\nSoma dos Atributos:\n");
    printf("%s: %.2f\n", nome1, soma1);
    printf("%s: %.2f\n", nome2, soma2);

    printf("\nResultado Final: ");

    if (soma1 == soma2) {
        printf("Empate!\n");
    } else {
        printf("Vencedor: %s!\n", (soma1 > soma2) ? nome1 : nome2);
    }

    printf("\n=========================================\n");
    return 0;
}
