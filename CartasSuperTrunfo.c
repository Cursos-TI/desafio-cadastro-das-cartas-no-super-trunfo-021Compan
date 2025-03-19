#include <stdio.h>

// Estrutura para armazenar os dados de uma carta
typedef struct Carta {
    char codigo[4];
    char estado[50];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

// Função para criar as cartas
void criar_Cartas(Carta *carta1, Carta *carta2) {
    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Digite o código: ");
    scanf("%s", carta1->codigo);
    printf("Digite o estado: ");
    scanf("%s", carta1->estado);
    printf("Digite a cidade: ");
    scanf("%s", carta1->cidade);
    printf("Digite a população: ");
    scanf("%d", &carta1->populacao);
    printf("Digite a área (em km²): ");
    scanf("%f", &carta1->area);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &carta1->pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1->pontosTuristicos);

    // Cadastro da segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("Digite o código: ");
    scanf("%s", carta2->codigo);
    printf("Digite o estado: ");
    scanf("%s", carta2->estado);
    printf("Digite a cidade: ");
    scanf("%s", carta2->cidade);
    printf("Digite a população: ");
    scanf("%d", &carta2->populacao);
    printf("Digite a área (em km²): ");
    scanf("%f", &carta2->area);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &carta2->pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2->pontosTuristicos);
}

// Função para exibir as cartas
void exibir_Cartas(Carta carta1, Carta carta2) {
    // Exibição dos dados da primeira carta
    printf("\nDados da primeira carta:\n");
    printf("Código: %s\n", carta1.codigo);
    printf("Estado: %s\n", carta1.estado);
    printf("Cidade: %s\n", carta1.cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontosTuristicos);

    // Exibição dos dados da segunda carta
    printf("\nDados da segunda carta:\n");
    printf("Código: %s\n", carta2.codigo);
    printf("Estado: %s\n", carta2.estado);
    printf("Cidade: %s\n", carta2.cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontosTuristicos);
}

int main() {
    Carta carta1, carta2; // Declaração de duas cartas

    criar_Cartas(&carta1, &carta2); // Chamada da função para criar as cartas
    exibir_Cartas(carta1, carta2);  // Chamada da função para exibir as cartas

    return 0;
}