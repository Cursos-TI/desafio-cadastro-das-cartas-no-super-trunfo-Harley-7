#include <stdio.h>

int main() {
    //variáveis da carta 1
    char estado_carta1;
    char nome_da_cidade_carta1[50];
    int populacao_carta1, 
    numero_de_pontos_turisticos_carta1;
    float area_carta1,
    pib_carta1,
    densidade_populacional_carta1,
    pib_per_capita_carta1;

    //variaveis da carta 2
    char estado_carta2;
    char nome_da_cidade_carta2[50];
    int populacao_carta2, 
    numero_de_pontos_turisticos_carta2;
    float area_carta2,
    pib_carta2,
    densidade_populacional_carta2,
    pib_per_capita_carta2;
    

    //Entrada do dados digitados pelo usuário no terminal

    printf("Digite uma letra entre A e H para o seu Estado na Carta 1: \n");
    scanf("%c", &estado_carta1);

    printf("Digite o nome da sua cidade na Carta 1: \n");
    scanf("%s", &nome_da_cidade_carta1);

    printf("Digite a população da Carta 1: \n");
    scanf("%d", &populacao_carta1);
    
    printf("Digite a área da Carta 1: \n");
    scanf("%f", &area_carta1);

    printf("Digite o PIB da Carta 1: \n");
    scanf("%f", &pib_carta1);

    printf("Digite o número de pontos turísticos da Carta 1: \n");
    scanf("%d", &numero_de_pontos_turisticos_carta1);
 
    printf("Digite uma letra entre A e H para o seu Estado na Carta 2: \n");
    scanf("%s", &estado_carta2);

    printf("Digite o nome da sua cidade na Carta 2: \n");
    scanf("%s", &nome_da_cidade_carta2);

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
    printf("Estado: %c \n", estado_carta1);
    printf("Código: %c01 \n", estado_carta1);
    printf("Nome da Cidade: %s \n", nome_da_cidade_carta1);
    printf("População: %d \n", populacao_carta1);
    printf("Área: %f km²\n", area_carta1);
    printf("PIB: %f \n", pib_carta1);
    printf("Número de pontos turísticos: %d \n", numero_de_pontos_turisticos_carta1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidade_populacional_carta1 = populacao_carta1 / area_carta1); //saída e calculo da densidade populacional da carta 1
    printf("PIB per Capita: %.2f reais \n", pib_per_capita_carta1 = pib_carta1 / populacao_carta1); // saída e calculo do PIB per Capita da carta 1
    printf("\n");

    //Dados da Carta 2
    printf("Carta 2 \n");
    printf("Estado: %c \n", estado_carta2);
    printf("Código: %c02 \n", estado_carta2);
    printf("Nome da Cidade: %s \n", nome_da_cidade_carta2);
    printf("População: %d \n", populacao_carta2);
    printf("Área: %f km² \n", area_carta2);
    printf("PIB: %f \n", pib_carta2);
    printf("Número de pontos turísticos: %d \n", numero_de_pontos_turisticos_carta2);
    printf("Densidade Populacional: %.2f km² \n", densidade_populacional_carta2 = populacao_carta2 / area_carta2); //saída e calculo da densidade populacional da carta 2
    printf("PIB per Capita: %.2f reais \n", pib_per_capita_carta2 = pib_carta2 / populacao_carta2); // saída e calculo do PIB per Capita da carta 2
    printf("\n");

    return 0;
}
