#include <stdio.h>

int main() {
    char pais1[30], pais2[30];
    int populacao1, populacao2;
    float areatotal1, areatotal2;
    float PIB1, PIB2;
    int turis1, turis2;
    float dens01, dens02;
    int escolha1, escolha2;

    // Captura de dados
    printf("Digite os dados da primeira carta:\n");
    printf("País: ");
    scanf(" %s\n]", pais1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área total em KM²: ");
    scanf("%f", &areatotal1);
    printf("PIB: ");
    scanf("%f", &PIB1);
    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &turis1);

    dens01 = populacao1 / areatotal1;

    printf("\nDigite os dados da segunda carta:\n");
    printf("País: ");
    scanf(" %s\n]", pais2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área total em KM²: ");
    scanf("%f", &areatotal2);
    printf("PIB: ");
    scanf("%f", &PIB2);
    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &turis2);

    dens02 = populacao2 / areatotal2;

    // Menu interativo
    printf("\n*** SUPER TRUNFO ***\n");
    printf("Escolha dois atributos para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade demográfica\n");

    printf("Escolha o primeiro atributo: ");
    scanf("%d", &escolha1);

    printf("Escolha o segundo atributo (diferente do primeiro): ");
    scanf("%d", &escolha2);
    
    if (escolha2 == escolha1) {
        printf("Opção inválida! Você deve escolher um atributo diferente.\n");
        return 1;
    }

    // Função para pegar os valores corretos
    float valor1_pais1, valor2_pais1, valor1_pais2, valor2_pais2;
    int inverso = 0; // Para verificar se a densidade demográfica precisa inverter

    float atributos[5][2] = {{populacao1, populacao2}, {areatotal1, areatotal2}, {PIB1, PIB2}, {turis1, turis2}, {dens01, dens02}};

    valor1_pais1 = atributos[escolha1 - 1][0];
    valor1_pais2 = atributos[escolha1 - 1][1];
    valor2_pais1 = atributos[escolha2 - 1][0];
    valor2_pais2 = atributos[escolha2 - 1][1];

    if (escolha1 == 5 || escolha2 == 5) inverso = 1;

    // Comparação
    int pontos1 = ((valor1_pais1 > valor1_pais2) ^ inverso) + ((valor2_pais1 > valor2_pais2) ^ inverso);
    int pontos2 = ((valor1_pais2 > valor1_pais1) ^ inverso) + ((valor2_pais2 > valor2_pais1) ^ inverso);
    int soma1 = valor1_pais1 + valor2_pais1;
    int soma2 = valor1_pais2 + valor2_pais2;

    // Resultado
    printf("\nResultado da comparação:\n");
    printf("%s - %s\n", pais1, pais2);
    printf("Atributo %d: %.2f - %.2f\n", escolha1, valor1_pais1, valor1_pais2);
    printf("Atributo %d: %.2f - %.2f\n", escolha2, valor2_pais1, valor2_pais2);
    printf("Soma total: %d - %d\n", soma1, soma2);

    if (soma1 > soma2) {
        printf("%s venceu!\n", pais1);
    } else if (soma2 > soma1) {
        printf("%s venceu!\n", pais2);
    } else {
        printf("Empate!\n");
    }
    
    return 0;
}

