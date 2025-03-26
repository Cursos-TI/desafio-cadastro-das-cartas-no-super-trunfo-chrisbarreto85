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
    char pais1[20], pais2[20];
    int populacao1, populacao2;
    float areatotal1, areatotal2;
    float PIB1, PIB2;
    int turis1, turis2;
    float dens01, dens02;
    int escolhajogador;


// Dados primeira carta.
    printf ("Digite os dados da primeira carta:\n");
    printf ("Digite o País, no lugar de espaço utilizar - ou _ por gentileza: ");
    scanf ("%s", &pais1);
    printf ("Digite a população:");
    scanf ("%d",&populacao1);
    printf ("Digite area total em KM²:");
    scanf ("%f",&areatotal1);
    printf ("Digite o PIB:");
    scanf ("%f",&PIB1);
    printf ("Quantidade de pontos turísticos:");
    scanf ("%d",&turis1);

// calculo da densidade demográfica carta 01
    dens01 = (populacao1 / areatotal1);

    
// Dados da segunda carta.
    printf ("Digite os dados da segunda carta:\n");
    printf ("Digite o País, no lugar de espaço utilizar - ou _ por gentileza: ");
    scanf ("%s", &pais2);
    printf ("Digite a população:");
    scanf ("%d",&populacao2);
    printf ("Digite area total em KM²:");
    scanf ("%f",&areatotal2);
    printf ("Digite o PIB:");
    scanf ("%f",&PIB2);
    printf ("Quantidade de pontos turísticos:");
    scanf ("%d",&turis2);

// calculo da densidade demográfica carta 02
    dens02 = (populacao2 / areatotal2);

//Menu interativo usuário

    printf("*** SUPER TRUNFO DO CHRISTIAN ***\n");
    printf("*** Selecione o atributo que deseja comparar ***\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade demográfica\n");
    printf("Opção: ");
    scanf ("%d", & escolhajogador);


switch (escolhajogador)
{
case 1:
     printf ("País: %s:\n", pais1);
     printf ("População: %d:\n", populacao1);
     printf ("País: %s:\n", pais2);
     printf ("População: %d:\n", populacao2);
    if (populacao1 > populacao2){
        printf ("País venceu %s ", pais1); 
    }else if  (populacao2 > populacao1){
        printf ("País venceu %s ", pais2);
    }else
        printf ("Empatou!");
case 2:
    printf ("País: %s:\n", pais1);
    printf ("Área: %2.f:\n", areatotal1);
    printf ("País: %s:\n", pais2);
    printf ("Área: %2.f:\n", areatotal2);
    if (areatotal1 > areatotal2){
        printf ("País venceu %s ", pais1); 
       }else if  (areatotal2 > areatotal1){
        printf ("País venceu %s ", pais2);
       }else
        printf ("Empatou!");
case 3:
    printf ("País: %s:\n", pais1);
    printf ("PIB: %2.f:\n", PIB1);
    printf ("País: %s:\n", pais2);
    printf ("PIB: %2.f:\n", PIB2);
    if (PIB1 > PIB2){
        printf ("País venceu %s ", pais1); 
        }else if  (PIB2 > PIB1){
        printf ("País venceu %s ", pais2);
        }else
        printf ("Empatou!");
case 4:
    printf ("País: %s:\n", pais1);
    printf ("Pontos Turisticos: %d:\n", turis1);
    printf ("País: %s:\n", pais2);
    printf ("Pontos Turisticos: %d:\n", turis2);
    if (turis1> turis2){
        printf ("País venceu %s ", pais1); 
        }else if  (turis2 > turis1){
        printf ("País venceu %s ", pais2);
        }else
        printf ("Empatou!");
case 5:
    printf ("País: %s:\n", pais1);
    printf ("Densidade demográfica: %2.f:\n", dens01);
    printf ("País: %s:\n", pais2);
    printf ("Densidade demográfica: %2.f:\n", dens02);
    if (dens01 < dens02){
        printf ("País venceu %s ", pais1); 
        }else if  (dens02 < dens02){
        printf ("País venceu %s ", pais2);
        }else
        printf ("Empatou!");


}

return 0;
}
