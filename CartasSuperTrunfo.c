#include <stdio.h>

// Definição da estrutura Carta
typedef struct {
    char codigo[4]; // Código da carta (ex: A01)
    unsigned long int populacao;  // População da cidade
    float area;     // Área da cidade em km²
    float pib;      // PIB da cidade em milhões
    int pontos_turisticos; // Número de pontos turísticos na cidade
    float densidade_populacional; // Densidade populacional (população / área)
    float pib_per_capita; // PIB per capita (PIB / população)
    float super_poder; // Super Poder (soma dos atributos)
} Carta; // Aqui, Carta é um novo tipo de dado

int main() {
    // Declaração de duas variáveis do tipo Carta
    Carta carta1, carta2;

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", carta1.codigo); // Lê o código da carta
    printf("Digite a população: ");
    scanf("%lu", &carta1.populacao); // Lê a população
    printf("Digite a área: ");
    scanf("%f", &carta1.area); // Lê a área
    printf("Digite o PIB: ");
    scanf("%f", &carta1.pib); // Lê o PIB
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos); // Lê o número de pontos turísticos

    // Cálculo da densidade populacional e PIB per capita para a primeira carta
    carta1.densidade_populacional = carta1.populacao / carta1.area; // Calcula a densidade populacional
    carta1.pib_per_capita = carta1.pib / carta1.populacao; // Calcula o PIB per capita

    // Cadastro da segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", carta2.codigo); // Lê o código da carta
    printf("Digite a população: ");
    scanf("%lu", &carta2.populacao); // Lê a população
    printf("Digite a área: ");
    scanf("%f", &carta2.area); // Lê a área
    printf("Digite o PIB: ");
    scanf("%f", &carta2.pib); // Lê o PIB
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos); // Lê o número de pontos turísticos

    // Cálculo da densidade populacional e PIB per capita para a segunda carta
    carta2.densidade_populacional = carta2.populacao / carta2.area; // Calcula a densidade populacional
    carta2.pib_per_capita = carta2.pib / carta2.populacao; // Calcula o PIB per capita

    // Comparação dos atributos
    printf("\nComparação dos atributos:\n");

    // Comparação da população
    if (carta1.populacao > carta2.populacao) {
        printf("População: Carta 1 vence (1)\n");
    } else {
        printf("População: Carta 2 vence (0)\n");
    }

    // Comparação da área
    if (carta1.area > carta2.area) {
        printf("Área: Carta 1 vence (1)\n");
    } else {
        printf("Área: Carta 2 vence (0)\n");
    }

    // Comparação do PIB
    if (carta1.pib > carta2.pib) {
        printf("PIB: Carta 1 vence (1)\n");
    } else {
        printf("PIB: Carta 2 vence (0)\n");
    }

    // Comparação dos pontos turísticos
    if (carta1.pontos_turisticos > carta2.pontos_turisticos) {
        printf("Pontos turísticos: Carta 1 vence (1)\n");
    } else {
        printf("Pontos turísticos: Carta 2 vence (0)\n");
    }

    // Comparação da densidade populacional (menor valor vence)
    if (carta1.densidade_populacional < carta2.densidade_populacional) {
        printf("Densidade Populacional: Carta 1 vence (1)\n");
    } else {
        printf("Densidade Populacional: Carta 2 vence (0)\n");
    }

    // Cálculo do Super Poder
    carta1.super_poder = carta1.populacao + carta1.area + carta1.pib + carta1.pontos_turisticos + (1 / carta1.densidade_populacional);
    carta2.super_poder = carta2.populacao + carta2.area + carta2.pib + carta2.pontos_turisticos + (1 / carta2.densidade_populacional);

    // Comparação do Super Poder
    if (carta1.super_poder > carta2.super_poder) {
        printf("Super Poder: Carta 1 vence (1)\n");
    } else {
        printf("Super Poder: Carta 2 vence (0)\n");
    }

    return 0; // Indica que o programa terminou com sucesso
}


