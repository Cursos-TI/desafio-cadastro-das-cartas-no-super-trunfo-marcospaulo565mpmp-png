#include <stdio.h>
//observação, não use "."(ponto) na hora de escrever os dados da cidade, sempre da algum tipo de erro na hora do calculo.
typedef struct {
    char codigo[4]; // Código da carta (ex: A01)
    int populacao;  // População
    float area;     // Área
    float pib;      // PIB
    int pontos_turisticos; // Número de pontos turísticos
    float densidade_populacional; // Densidade populacional
    float pib_per_capita; // PIB per capita
} Carta;// Aqui, Carta é um novo tipo de dado
//
int main() {
    // Declaração de duas variáveis do tipo Carta
    Carta carta1, carta2;

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", carta1.codigo);
    printf("Digite a população: ");
    scanf("%d", &carta1.populacao);
    printf("Digite a área: ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB: ");
    scanf("%f", &carta1.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Cálculo da densidade populacional e PIB per capita
    carta1.densidade_populacional = carta1.populacao / carta1.area;
    carta1.pib_per_capita = carta1.pib / carta1.populacao;

    // Cadastro da segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", carta2.codigo);
    printf("Digite a população: ");
    scanf("%d", &carta2.populacao);
    printf("Digite a área: ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB: ");
    scanf("%f", &carta2.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Cálculo da densidade populacional e PIB per capita
    carta2.densidade_populacional = carta2.populacao / carta2.area;
    carta2.pib_per_capita = carta2.pib / carta2.populacao;

    // Exibição dos dados da primeira carta
    printf("\nDados da primeira carta:\n");
    printf("Código: %s\n", carta1.codigo);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade Populacional: %.2f\n", carta1.densidade_populacional);
    printf("PIB per Capita: %.2f\n", carta1.pib_per_capita);

    // Exibição dos dados da segunda carta
    printf("\nDados da segunda carta:\n");
    printf("Código: %s\n", carta2.codigo);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f\n", carta2.densidade_populacional);
    printf("PIB per Capita: %.2f\n", carta2.pib_per_capita);

    return 0;
}

