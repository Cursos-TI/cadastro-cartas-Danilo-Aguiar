#include<stdio.h>

int main(){
    // Dados da carta 1 guardadas em variáveis declarada.
    char carta1[15];
    char estado1[20];
    char cidade1[10];
    char codigo1[5];
    int populacao1;
    float area1;
    float pib1;
    int pontotu1;

    // Códigos para entrada de dados da carta.

    printf("Vamos cadastrar sua carta!\n");
    printf("\n");

    printf("País: ");
    scanf("%s", carta1);

    printf("Estado(A-H): ");
    scanf("%s", estado1);

    printf("Código:");
    scanf("%s", codigo1);
    
    printf("População(Sem ponto): ");
    scanf("%d", &populacao1);

    printf("Digite a Área (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontotu1);

    printf("\n");
    printf("\n");

     // Dados da carta 2 guardadas em variáveis declarada.
    char carta2[15];
    char estado2[20];
    char cidade2[10];
    char codigo2[5];
    int populacao2;
    float area2;
    float pib2;
    int pontotu2;

    // Códigos para entrada de dados da carta.

    printf(" Agora vamos cadastrar sua segunda carta!\n");
    printf("\n");

    printf("País: ");
    scanf("%s", carta2);

    printf("Estado(A-H): ");
    scanf("%s", estado2);

    printf("Código:");
    scanf("%s", codigo2);
    
    printf("População(Sem ponto): ");
    scanf("%d", &populacao2);

    printf("Digite a Área (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontotu2);

    printf("\n");
    printf("\n");

    // Saída de dados cadastrados da carta.

    printf("Carta: %s\nEstado: %s\n", carta1,estado1);
    printf("Código: %s\nPopulação: %d de habitantes\n", codigo1, populacao1);
    printf("Área: %.3f km²\nPIB: $%.3f\n", area1, pib1);
    printf("Pontos Turísticos: %d", pontotu1);

    printf("\n");
    printf("\n");

    printf("Carta: %s\nEstado: %s\n", carta2,estado2);
    printf("Código: %s\nPopulação: %d de habitantes\n", codigo2, populacao2);
    printf("Área: %.3f km²\nPIB: $%.3f\n", area2, pib2);
    printf("Pontos Turísticos: %d", pontotu2);

    printf("\n");
    printf("\n");

    return 0;

}
