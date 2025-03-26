#include <stdio.h>

int main() {

    char estado1, estado2;
    char codcarta1[10], codcarta2[10], cidade1[200], cidade2[200];
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2;

    //inserção de dados da primeira carta

    printf("Carta 1:\n");
    printf("Escreva o Estado da primeira carta: ");
    scanf(" %c", &estado1);

    printf("Escreva o código da primeira carta: ");
    scanf("%s", codcarta1);

    printf("Escreva o nome da cidade da primeira carta: ");
    scanf("%s", cidade1);

    printf("Qual o tamanho da população da primeira carta: ");
    scanf("%d", &populacao1);

    printf("Área do Estado da primeira carta: ");
    scanf("%f", &area1);

    printf("PIB da primeira carta: ");
    scanf("%f", &pib1);

    printf("Números de pontos turísticos: ");
    scanf("%d", &pontos1);

    //inserção de dados da segunda carta

    printf("Carta 2:\n");
    printf("Escreva o Estado: ");
    scanf(" %c", &estado2);

    printf("Escreva o código: ");
    scanf("%s", codcarta2);

    printf("Escreva o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Qual o tamanho da população: ");
    scanf("%d", &populacao2);

    printf("Área do Estado: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Números de pontos turísticos: ");
    scanf("%d", &pontos2);

    // print das cartas

    printf("Carta 1 Impressa\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codcarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos1);

    printf("Carta 2 Impressa\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codcarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos2);

    return 0;
}