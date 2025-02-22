#include <stdio.h>
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
int main() {

    //delaração de variavíes.

    char estado1[20], estado2[20];
    char codcart1[20], codcart2[20];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float areatotal1, areatotal2;
    float PIB1, PIB2;
    int turis1, turis2;

    // Dados primeira carta.

    printf ("Digite os dados da primeira carta:\n");
    printf ("Digite o estado, no lugar de espaço utilizar - ou _ por gentileza: ");
    scanf ("%s", &estado1);
    printf ("Digite o código da carta:");
    scanf ("%s", &codcart1);
    printf ("Digite a cidade:");
    scanf ("%s", &cidade1);
    printf ("Digite a população:");
    scanf ("%d",&populacao1);
    printf ("Digite area total em KM²:");
    scanf ("%f",&areatotal1);
    printf ("Digite o PIB:");
    scanf ("%f",&PIB1);
    printf ("Quantidade de pontos turísticos?");
    scanf ("%d",&turis1);

  // Dados da segunda carta.

    printf ("Digite os dados da segunda carta:\n");
    printf ("Digite o estado, no lugar de espaço utilizar - ou _ por gentileza: ");
    scanf ("%s", &estado2);
    printf ("Digite o código da carta:");
    scanf ("%s", &codcart2);
    printf ("Digite a cidade:");
    scanf ("%s", &cidade2);
    printf ("Digite a população:");
    scanf ("%d",&populacao2);
    printf ("Digite area total em KM²:");
    scanf ("%f",&areatotal2);
    printf ("Digite o PIB:");
    scanf ("%f",&PIB2);
    printf ("Quantidade de pontos turísticos?");
    scanf ("%d",&turis2);

//Exibição de dados coletados.

printf ("Carta 01:\n ");
printf ("Estado: %s\n", estado1);
printf ("Código: %s\n", codcart1);
printf ("Cidade: %s\n", cidade1);
printf ("População: %d\n", populacao1);
printf ("Área em KM²: %f\n", areatotal1);
printf ("PIB: %f\n", PIB1);
printf ("Número de Pontos Turísticos: %d\n", turis1);

printf ("Carta 02:\n ");
printf ("Estado: %s\n", estado2);
printf ("Código: %s\n", codcart2);
printf ("Cidade: %s\n", cidade2);
printf ("População: %d\n", populacao2);
printf ("Área em KM²: %f\n", areatotal2);
printf ("PIB: %f\n", PIB2);
printf ("Número de Pontos Turísticos: %d\n", turis2);


    return 0;
}