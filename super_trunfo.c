#include <stdio.h>

int main() {
    // Declaração de variáveis
    char estado1[30], estado2[30];
    char codcart1[20], codcart2[20];
    char cidade1[30], cidade2[30];
    unsigned long int populacao1, populacao2;
    float areatotal1, areatotal2;
    float PIB1, PIB2;
    int turis1, turis2;
    float DP1, PC1, DP2, PC2;

    // Dados da primeira carta
    printf("Digite os dados da primeira carta:\n");
    printf("Digite o estado (substitua espaços por - ou _): ");
    scanf("%29s", estado1);
    printf("Digite o código da carta: ");
    scanf("%19s", codcart1);
    printf("Digite a cidade: ");
    scanf("%29s", cidade1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área total em KM²: ");
    scanf("%f", &areatotal1);
    printf("Digite o PIB: ");
    scanf("%f", &PIB1);
    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &turis1);

    // Evitar divisão por zero
    DP1 = (areatotal1 > 0) ? (populacao1 / areatotal1) : 0;
    PC1 = (populacao1 > 0) ? (PIB1 / populacao1) : 0;

    // Dados da segunda carta
    printf("\nDigite os dados da segunda carta:\n");
    printf("Digite o estado (substitua espaços por - ou _): ");
    scanf("%29s", estado2);
    printf("Digite o código da carta: ");
    scanf("%19s", codcart2);
    printf("Digite a cidade: ");
    scanf("%29s", cidade2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área total em KM²: ");
    scanf("%f", &areatotal2);
    printf("Digite o PIB: ");
    scanf("%f", &PIB2);
    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &turis2);

    DP2 = (areatotal2 > 0) ? (populacao2 / areatotal2) : 0;
    PC2 = (populacao2 > 0) ? (PIB2 / populacao2) : 0;

    // Exibição de dados coletados
    printf("\nCarta 01:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codcart1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em KM²: %.2f\n", areatotal1);
    printf("PIB: %.2f\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", turis1);
    printf("Densidade Populacional: %.2f hab/km²\n", DP1);
    printf("PIB per Capita: %.2f\n", PC1);

    printf("\nCarta 02:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codcart2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em KM²: %.2f\n", areatotal2);
    printf("PIB: %.2f\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", turis2);
    printf("Densidade Populacional: %.2f hab/km²\n", DP2);
    printf("PIB per Capita: %.2f\n", PC2);

    return 0;
}
