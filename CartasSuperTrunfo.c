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

   
    // Códigos para entrada de dados do usuário.

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

    // Densidade populacional e PIB Per capita carta 1.
    float dpop1 = populacao1 / area1;
    float inverso1 = area1 / populacao1;
    float PIBpercap1 = (pib1 *1000000000) / populacao1;

    // Criando Super Poder Carta 1

    unsigned superpoder1 = (float) populacao1 + area1 + pib1 + pontotu1 + PIBpercap1 + inverso1;

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

    

    // Códigos para entrada de dados do usuário.

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

    // Densidade populacional e PIB per capita da carta 2.
    float dpop2 = populacao2 / area2;
    float inverso2 = area2 / populacao2;
    float PIBpercap2 = (pib2 * 1000000000) / populacao2;

    // Criando Super Poder Carta 2

    unsigned superpoder2 = (float) populacao2 + area2 + pib2 + pontotu2 + PIBpercap2 + inverso2;

    printf("\n");
    printf("\n");



    // Saída de dados cadastrados da carta.

    printf("***** EXIBIÇÃO *****\n");
    printf("\n");

    printf("Carta: %s\nEstado: %s\n", carta1,estado1);
    printf("Código: %s\nPopulação: %d de habitantes\n", codigo1, populacao1);
    printf("Área: %.3f km²\nPIB: $%.3f\n", area1, pib1);
    printf("Pontos Turísticos: %d\n", pontotu1);
    printf("Densidade populacional: %.2f hab/km²\n", dpop1);
    printf("PIB Per capita: %.2f reais\n", PIBpercap1);
    printf("Super Poder: %u", superpoder1);

    printf("\n");
    printf("\n");

    printf("Carta: %s\nEstado: %s\n", carta2,estado2);
    printf("Código: %s\nPopulação: %d de habitantes\n", codigo2, populacao2);
    printf("Área: %.3f km²\nPIB: $%.3f\n", area2, pib2);
    printf("Pontos Turísticos: %d\n", pontotu2);
    printf("Densidade populacional: %.2f hab/km²\n", dpop2);
    printf("PIB Per capita: %.2f reais\n", PIBpercap2);
    printf("Super Poder: %u", superpoder2);

    printf("\n");
    printf("\n");
    printf("\n");

    // Variáveis de comparação

    int populacao =  populacao1 > populacao2;
    int area = (float)area1 > area2;
    int pib = (float)pib1 > pib2;
    int pontotu = pontotu1 > pontotu2;
    int dpop = (float)dpop1 > dpop2;
    int PIBpercap = (float)PIBpercap1 > PIBpercap2;
    int superpoder = superpoder1 > superpoder2;

    

    // Comparação 
    printf("----------BATALHA---------");
    printf("\n");
    printf("\n");

    printf("População: Carta 1 Venceu? %d\n", populacao);
    printf("Área: Carta 1 Venceu? %d\n", area);
    printf("PIB: Carta 1 Venceu? %d\n", pib);
    printf("Ponto Turístico: Carta 1 Venceu? %d\n", pontotu);
    printf("Densidade Populacional: Carta 2 Venceu? %d\n", dpop);
    printf("PIB Per Capita: Carta 1 Venceu? %d\n", PIBpercap);
    printf("Super Poder: Carta 1 Venceu? %d", superpoder);


    return 0;

}
