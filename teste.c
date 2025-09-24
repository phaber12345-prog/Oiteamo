#include <stdio.h>

int main() {
    char Estado, Estado2;
    char Codigo[20], Codigo2[20];
    char Nome[20], Nome2[20];
    int populacao, populacao2;
    float area, area2;
    float pibBilhoes, pibBilhoes2;   // PIB digitado em bilhões
    float pib, pib2;                 // PIB convertido para unidades reais
    int Pontos, Pontos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // ===== Cidade 1 =====
    printf("Digite o Estado (uma letra): ");
    scanf(" %c", &Estado);

    printf("Digite o Codigo do Estado: ");
    scanf("%19s", Codigo);

    printf("Digite o nome do Estado: ");
    scanf("%19s", Nome);

    printf("Digite a populacao do estado: ");
    scanf("%d", &populacao);

    printf("Digite a Area da Cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (em bilhoes): ");
    scanf("%f", &pibBilhoes);
    pib = pibBilhoes * 1000000000.0; // converte bilhões para unidades reais

    printf("Digite os pontos da cidade: ");
    scanf("%d", &Pontos);

    // ===== Cidade 2 =====
    printf("\n*************** Agora vamos a Segunda cidade ***************\n");

    printf("Digite o Estado2 (uma letra): ");
    scanf(" %c", &Estado2);

    printf("Digite o Codigo do Estado2: ");
    scanf("%19s", Codigo2);

    printf("Digite o nome do Estado2: ");
    scanf("%19s", Nome2);

    printf("Digite a populacao do estado2: ");
    scanf("%d", &populacao2);

    printf("Digite a Area da Cidade2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade2 (em bilhoes): ");
    scanf("%f", &pibBilhoes2);
    pib2 = pibBilhoes2 * 1000000000.0;

    printf("Digite os pontos da cidade2: ");
    scanf("%d", &Pontos2);

    // ===== Cálculos =====
    densidade1 = (float) populacao / area;
    pibPerCapita1 = pib / populacao;

    densidade2 = (float) populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // ===== Resultados detalhados =====
    printf("\n===== APRESENTAÇÃO COMPLETA DAS CIDADES =====\n\n");

    printf("----- CIDADE 1 -----\n");
    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", Codigo);
    printf("Nome: %s\n", Nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("Pontos: %d\n", Pontos);
    printf("PIB: %.2f bilhões\n", pibBilhoes);
    printf("PIB per capita: %.2f\n", pibPerCapita1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);

    printf("\n----- CIDADE 2 -----\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome: %s\n", Nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("Pontos: %d\n", Pontos2);
    printf("PIB: %.2f bilhões\n", pibBilhoes2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);

    return 0;
}