#include <stdio.h>

typedef struct {
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontos;
    float densidade;
    float pib_per_capita;
} Carta;

int main(void) {
    Carta c1, c2;

    printf("Cadastro da Carta 1\n");
    printf("Codigo (ex: A01): ");
    scanf("%3s", c1.codigo);
    printf("Populacao: ");
    scanf("%d", &c1.populacao);
    printf("Area: ");
    scanf("%f", &c1.area);
    printf("PIB: ");
    scanf("%f", &c1.pib);
    printf("Pontos turisticos: ");
    scanf("%d", &c1.pontos);

    printf("\nCadastro da Carta 2\n");
    printf("Codigo (ex: B02): ");
    scanf("%3s", c2.codigo);
    printf("Populacao: ");
    scanf("%d", &c2.populacao);
    printf("Area: ");
    scanf("%f", &c2.area);
    printf("PIB: ");
    scanf("%f", &c2.pib);
    printf("Pontos turisticos: ");
    scanf("%d", &c2.pontos);

    c1.densidade = (float)c1.populacao / c1.area;
    c1.pib_per_capita = c1.pib / (float)c1.populacao;

    c2.densidade = (float)c2.populacao / c2.area;
    c2.pib_per_capita = c2.pib / (float)c2.populacao;

    printf("\n=== Carta 1 (%s) ===\n", c1.codigo);
    printf("Populacao: %d\n", c1.populacao);
    printf("Area: %.2f\n", c1.area);
    printf("PIB: %.2f\n", c1.pib);
    printf("Pontos turisticos: %d\n", c1.pontos);
    printf("Densidade Populacional: %.4f\n", c1.densidade);
    printf("PIB per Capita: %.4f\n", c1.pib_per_capita);

    printf("\n=== Carta 2 (%s) ===\n", c2.codigo);
    printf("Populacao: %d\n", c2.populacao);
    printf("Area: %.2f\n", c2.area);
    printf("PIB: %.2f\n", c2.pib);
    printf("Pontos turisticos: %d\n", c2.pontos);
    printf("Densidade Populacional: %.4f\n", c2.densidade);
    printf("PIB per Capita: %.4f\n", c2.pib_per_capita);

    return 0;
}
