#include<stdio.h>

int main(){
    // Dados da carta 1 guardadas em variáveis declarada.
    char carta1[15] = "Brasil";
    char estado1[20];
    char cidade1[10];
    char codigo1[5];
    int populacao1 = 123456;
    float area1 = 756.81;
    float pib1 = 541.89;
    int pontotu1 = 15;

   
    // Códigos para entrada de dados do usuário.
/*
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
*/

    // Densidade populacional e PIB Per capita carta 1.
    float dpop1 = populacao1 / area1;
    float inverso1 = area1 / populacao1;
    float PIBpercap1 = (pib1 *1000000000) / populacao1;

    // Criando Super Poder Carta 1

    unsigned int superpoder1 = (float) populacao1 + area1 + pib1 + pontotu1 + PIBpercap1 + inverso1;

    printf("\n");
    printf("\n");



     // Dados da carta 2 guardadas em variáveis declarada.
    char carta2[15] = "EUA";
    char estado2[20];
    char cidade2[10];
    char codigo2[5];
    int populacao2 = 123455;
    float area2 = 845.57;
    float pib2 = 541.89;
    int pontotu2 = 35;

    

    // Códigos para entrada de dados do usuário.
/*
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
    */

    // Densidade populacional e PIB per capita da carta 2.
    float dpop2 = populacao2 / area2;
    float inverso2 = area2 / populacao2;
    float PIBpercap2 = (pib2 * 1000000000) / populacao2;

    // Criando Super Poder Carta 2

    unsigned int superpoder2 = (float) populacao2 + area2 + pib2 + pontotu2 + PIBpercap2 + inverso2;

    printf("\n");
    printf("\n");



    // Saída de dados cadastrados da carta.

    /*
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
    */

    printf("\n");
    printf("\n");
    printf("\n");

    
    

    // Variável de escolha
    int escolha;

    // Menu de comparação
    printf("----------BATALHA---------");
    printf("\n");
    printf("\n");
    printf("Escolha o que quer comparar!\n");
    printf("\n");
    printf("1.População\n");
    printf("2.Área\n");
    printf("3.PIB\n");
    printf("4.Ponto Turístico\n");
    printf("5.Densidade Populacional\n");
    printf("6.PIB Per Capita\n");
    printf("7.Super Poder\n");
    printf("==> ");
    scanf("%d", &escolha);
    printf("\n");



    // Comparão com if e switch

    switch(escolha){
        
        // Opção para o jogador escolher
        case 1:
            // Decisões a serem feitas de acordo com os valores
            if (populacao1 > populacao2){
                printf("%s\n", carta1);
                printf("População ==> %d\n", populacao1);
                printf("    X");
                printf("\n");
                printf("%s\n", carta2);
                printf("População ==> %d\n", populacao2);
                printf("\n");
                printf("%s VENCEU!!\n", carta1);
                printf("\n");

            } else if(populacao1 < populacao2){
                printf("%s\n", carta1);
                printf("População ==> %d\n", populacao1);
                printf("    X");
                printf("\n");
                printf("%s\n", carta2);
                printf("População ==> %d\n", populacao2);
                printf("\n");
                printf("%s VENCEU!!!\n", carta2);
                printf("\n");
            } else{
                printf("%s\n", carta1);
                printf("População ==> %d\n", populacao1);
                printf("    X");
                printf("\n");
                printf("%s\n", carta2);
                printf("População ==> %d\n", populacao2);
                printf("\n");
                printf("|||||EMPATE!|||||\n");
                printf("\n");
            }
            break;

        case 2:
             if (area1 > area2){
                printf("%s\n", carta1);
                printf("Área ==> %.2f\n", area1);
                printf("    X");
                printf("\n");
                printf("%s\n", carta2);
                printf("Área ==> %.2f\n", area2);
                printf("\n");
                printf("%s VENCEU!!\n", carta1);
                printf("\n");

            } else if(area1 < area2){
                printf("%s\n", carta1);
                printf("Área ==> %.2f\n", area1);
                printf("    X");
                printf("\n");
                printf("%s\n", carta2);
                printf("Área ==> %.2f\n", area2);
                printf("\n");
                printf("%s VENCEU!!!\n", carta2);
                printf("\n");
            } else{
                printf("%s\n", carta1);
                printf("Área ==> %.2f\n", area1);
                printf("    X");
                printf("\n");
                printf("%s\n", carta2);
                printf("Área ==> %.2f\n", area2);
                printf("\n");
                printf("|||||EMPATE!|||||\n");
                printf("\n");
            }
            break;

        case 3:
           if (pib1 > pib2){
                printf("%s\n", carta1);
                printf("PIB ==> %.2f\n", pib1);
                printf("    X");
                printf("\n");
                printf("%s\n", carta2);
                printf("PIB ==> %.2f\n", pib2);
                printf("\n");
                printf("%s VENCEU!!\n", carta1);
                printf("\n");

            } else if(pib1 < pib2){
                printf("%s\n", carta1);
                printf("PIB ==> %.2f\n", pib1);
                printf("    X");
                printf("\n");
                printf("%s\n", carta2);
                printf("PIB ==> %.2f\n", pib2);
                printf("\n");
                printf("%s VENCEU!!!\n", carta2);
                printf("\n");
            } else{
                printf("%s\n", carta1);
                printf("PIB ==> %.2f\n", pib1);
                printf("    X");
                printf("\n");
                printf("%s\n", carta2);
                printf("PIB ==> %.2f\n", pib2);
                printf("\n");
                printf("|||||EMPATE!|||||\n");
                printf("\n");
            }
            break;
            
        case 4:
            if (pontotu1 > pontotu2){
                printf("%s\n", carta1);
                printf("Pontos Turísticos ==> %d\n", pontotu1);
                printf("    X");
                printf("\n");
                printf("%s\n", carta2);
                printf("Pontos Turísticos ==> %d\n", pontotu2);
                printf("\n");
                printf("%s VENCEU!!\n", carta1);
                printf("\n");

            } else if(pontotu1 < pontotu2){
                printf("%s\n", carta1);
                printf("Pontos Turísticos ==> %d\n", pontotu1);
                printf("    X");
                printf("\n");
                printf("%s\n", carta2);
                printf("Pontos Turísticos ==> %d\n", pontotu2);
                printf("\n");
                printf("%s VENCEU!!!\n", carta2);
                printf("\n");
            } else{
                printf("%s\n", carta1);
                printf("Pontos Turísticos ==> %d\n", pontotu1);
                printf("    X");
                printf("\n");
                printf("%s\n", carta2);
                printf("Pontos Turísticos ==> %d\n", pontotu2);
                printf("\n");
                printf("|||||EMPATE!|||||\n");
                printf("\n");
            }
            break;

        case 5:
            if (dpop1 < dpop2){
                printf("%s\n", carta1);
                printf("Densidade Populacional ==> %.2f\n", dpop1);
                printf("    X");
                printf("\n");
                printf("%s\n", carta2);
                printf("Densidade Populacional ==> %.2f\n", dpop2);
                printf("\n");
                printf("%s VENCEU!!\n", carta1);
                printf("\n");

            } else if(dpop1 > dpop2){
                printf("%s\n", carta1);
                printf("Densidade Populacional ==> %.2f\n", dpop1);
                printf("    X");
                printf("\n");
                printf("%s\n", carta2);
                printf("Densidade Populacional ==> %.2f\n", dpop2);
                printf("\n");
                printf("%s VENCEU!!!\n", carta2);
                printf("\n");
            } else{
                printf("%s\n", carta1);
                printf("Densidade Populacional ==> %.2f\n", dpop1);
                printf("    X");
                printf("\n");
                printf("%s\n", carta2);
                printf("Densidade Populacional ==> %.2f\n", dpop2);
                printf("\n");
                printf("|||||EMPATE!|||||\n");
                printf("\n");
            }
            break;

        case 6:
           if (PIBpercap1 > PIBpercap2){
                printf("%s\n", carta1);
                printf("PIB Per capita ==> %.2f\n", PIBpercap1);
                printf("    X");
                printf("\n");
                printf("%s\n", carta2);
                printf("PIB Per capita ==> %.2f\n", PIBpercap2);
                printf("\n");
                printf("%s VENCEU!!\n", carta1);
                printf("\n");

            } else if(PIBpercap1 < PIBpercap2){
                printf("%s\n", carta1);
                printf("PIB Per capita ==> %.2f\n", PIBpercap1);
                printf("    X");
                printf("\n");
                printf("%s\n", carta2);
                printf("PIB Per capita ==> %.2f\n", PIBpercap2);
                printf("\n");
                printf("%s VENCEU!!!\n", carta2);
                printf("\n");
            } else{
                printf("%s\n", carta1);
                printf("PIB Per capita ==> %.2f\n", PIBpercap1);
                printf("    X");
                printf("\n");
                printf("%s\n", carta2);
                printf("PIB Per capita ==> %.2f\n", PIBpercap2);
                printf("\n");
                printf("|||||EMPATE!|||||\n");
                printf("\n");
            }
            break;

        case 7:
            if (superpoder1 > superpoder2){
                printf("%s\n", carta1);
                printf("Super Poder ==> %d\n", superpoder1);
                printf("    X");
                printf("\n");
                printf("%s\n", carta2);
                printf("Super Poder ==> %d\n", superpoder2);
                printf("\n");
                printf("%s VENCEU!!\n", carta1);
                printf("\n");

            } else if(superpoder1 < superpoder2){
                printf("%s\n", carta1);
                printf("Super Poder ==> %d\n", superpoder1);
                printf("    X");
                printf("\n");
                printf("%s\n", carta2);
                printf("Super Poder ==> %d\n", superpoder2);
                printf("\n");
                printf("%s VENCEU!!!\n", carta2);
                printf("\n");
            } else{
                printf("%s\n", carta1);
                printf("Super Poder ==> %d\n", superpoder1);
                printf("    X");
                printf("\n");
                printf("%s\n", carta2);
                printf("Super Poder ==> %d\n", superpoder2);
                printf("\n");
                printf("|||||EMPATE!|||||\n");
                printf("\n");
            }
            break;

        default:
        // Caso o jogador escolha o intem  errado.
            printf("Intem inválido, tente novamente... :/");
            printf("\n");
    
    }

    return 0;

}
