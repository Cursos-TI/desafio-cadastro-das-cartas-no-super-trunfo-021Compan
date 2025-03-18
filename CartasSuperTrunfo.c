#include <stdio.h>

void criar_Carta(){

    // Declaração das variáveis para as duas cartas
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2;
    char estado1[50], estado2[50], cidade1[50], cidade2[50], codigo1[50], codigo2[50];

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Digite o código: ");
    scanf("%s", codigo1);
    printf("Digite o estado: ");
    scanf("%s", estado1);
    printf("Digite a cidade: ");
    scanf("%s", cidade1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("Digite o código: ");
    scanf("%s", codigo2);
    printf("Digite o estado: ");
    scanf("%s", estado2);
    printf("Digite a cidade: ");
    scanf("%s", cidade2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

}

void exibir_Carta(populacao1, populacao2, pontosTuristicos1, pontosTuristicos2, area1, area2, pib1, pib2){

    // Exibição dos dados da primeira carta
    printf("\nDados da primeira carta:\n");
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da segunda carta
    printf("\nDados da segunda carta:\n");
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

}

int main(populacao1, populacao2, pontosTuristicos1, pontosTuristicos2, area1, area2, pib1, pib2){ {

    // Chamada da função para criar as cartas
    criar_Carta();

    // Exibição dos dados da primeira carta
    exibir_Carta();

    return 0;

}