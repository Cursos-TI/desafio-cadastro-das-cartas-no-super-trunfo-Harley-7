#include <stdio.h>

int main() {
    //variáveis da carta 1
    int populacao_carta1, 
    numero_de_pontos_turisticos_carta1;

    float area_carta1,
    pib_carta1;

    //variaveis da carta 2
    int populacao_carta2, 
    numero_de_pontos_turisticos_carta2;

    float area_carta2,
    pib_carta2;

    //Entrada do dados digitados pelo usuário no terminal

    printf("Digite a população da Carta 1: \n");
    scanf("%d", &populacao_carta1);
    
    printf("Digite a área da Carta 1: \n");
    scanf("%f", &area_carta1);

    printf("Digite o PIB da Carta 1: \n");
    scanf("%f", &pib_carta1);

    printf("Digite o número de pontos turísticos da Carta 1: \n");
    scanf("%d", &numero_de_pontos_turisticos_carta1);

    printf("Digite a população da Carta 2: \n");
    scanf("%d", &populacao_carta2);
    
    printf("Digite a área da Carta 2: \n");
    scanf("%f", &area_carta2);

    printf("Digite o PIB da Carta 2: \n");
    scanf("%f", &pib_carta2);

    printf("Digite o número de pontos turísticos da Carta 2: \n");
    scanf("%d", &numero_de_pontos_turisticos_carta2);

    printf("\n");

    //Saída dos dados que o usuário cadastro

    //Dados da Carta 1
    printf("Carta 1 \n");
    printf("População: %d \n", populacao_carta1);
    printf("Área: %f \n", area_carta1);
    printf("PIB: %f \n", pib_carta1);
    printf("Número de pontos turísticos: %d \n", numero_de_pontos_turisticos_carta1);
    printf("\n");

    //Dados da Carta 2
    printf("Carta 2 \n");
    printf("População: %d \n", populacao_carta2);
    printf("Área: %f \n", area_carta2);
    printf("PIB: %f \n", pib_carta2);
    printf("Número de pontos turísticos: %d \n", numero_de_pontos_turisticos_carta2);
    printf("\n");

    return 0;
}
