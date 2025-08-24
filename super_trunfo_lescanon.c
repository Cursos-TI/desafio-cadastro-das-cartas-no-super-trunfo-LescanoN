#include <stdio.h>

int main(){

    // Declaração de Variáveis para as Cartas
    char estado_1;
    char estado_2;
    char codigo_carta1[4];
    char codigo_carta2[4];
    char nome_cidade1[50];
    char nome_cidade2[50];
    int populacao1;
    int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int pontos_turisticos1;
    int pontos_turisticos2;


    // CARTA 1
    printf("Digite o Estado (uma letra de A a H): \n");
    scanf(" %c", &estado_1);

    printf("Digite o codigo da carta(ex: A01, B03): \n");
    scanf("%s", &codigo_carta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_cidade1);

    printf("Digite o numero de habitantes: \n");
    scanf("%d", &populacao1);

    printf("Digite a area em km: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos1);

    printf("--------------------------------------------------------------- \n");
    printf("DIGITE O CODIGO DA CARTA 2 \n \n");

    // CARTA 2
    printf("Digite o Estado (uma letra de A a H): \n");
    scanf(" %c", &estado_2);

    printf("Digite o codigo da carta(ex: A01, B03): \n");
    scanf("%s", &codigo_carta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_cidade2);

    printf("Digite o numero de habitantes: \n");
    scanf("%d", &populacao2);

    printf("Digite a area em km: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);


    // DADOS DA CARTA 1
    printf("--------------------------------------------------------------- \n");
    printf("Exibindo dados da carta 1 \n");

    printf("Estado: %c\n", estado_1);
    printf("Codigo: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("Populacao:  %d\n", populacao1);
    printf("Area total: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);

    //DADOS DA CARTA 2
    printf("--------------------------------------------------------------- \n");
    printf("Exibindo dados da carta 2 \n");

    printf("Estado 2: %c\n", estado_2);
    printf("Codigo 2: %s\n", codigo_carta2);
    printf("Nome da Cidade 2: %s\n", nome_cidade2);
    printf("Populacao 2: %d\n", populacao2);
    printf("Area total 2: %f\n", area2);
    printf("PIB 2: %f\n", pib2);
    printf("Pontos Turisticos 2: %d\n", pontos_turisticos2);


    return 0; // Indica que o programa terminou com sucesso.


}
