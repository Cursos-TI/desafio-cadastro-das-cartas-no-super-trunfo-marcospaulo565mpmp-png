#include <stdio.h>

typedef struct {
    char codigo[4]; // Código da carta (ex: A01)
    int populacao;  // População
    float area;     // Área
    float pib;      // PIB
    int pontos_turisticos; // Número de pontos turísticos
} Carta;

int main() {
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

    // Exibição dos dados da primeira carta
    printf("Dados da primeira carta:\n");
    printf("Código: %s\n", carta1.codigo);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontos_turisticos);

    // Exibição dos dados da segunda carta
    printf("\nDados da segunda carta:\n");
    printf("Código: %s\n", carta2.codigo);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontos_turisticos);

    return 0;
}
