#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis carta 1
    char estado1;                 // Estado representado por uma letra (A-H)
    char codigo1[5];              // Código da carta (ex: A01) 
    char nomeCidade1[41];         // Nome da cidade (até 40 caracteres + '\0')
    unsigned long int populacao1; // População da cidade (números grandes)
    float area1;                  // Área em km² 
    float pib1;                   // PIB em bilhões de reais
    int pontosTuristicos1;        // Número de pontos turísticos 
    float densidade1, pibPerCapita1, superPoder1; // Variáveis calculadas


    // Variáveis carta 2
    char estado2;
    char codigo2[5];
    char nomeCidade2[41];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;

    // Entrada de dados - Carta 1
    printf("Digite o estado da carta 1 (A-H): \n");
    scanf(" %s", &estado1);

    
    printf("Digite o código da carta 1: \n");
    scanf("%s", codigo1);

   
    printf("Digite o nome da cidade da carta 1: \n");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a população da carta 1: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área da carta 1 (km2): \n");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 1: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da carta 1: \n");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados - Carta 2
    printf("\nDigite o estado da carta 2 (A-H): \n");
    scanf(" %s", &estado2);

    printf("Digite o código da carta 2: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da carta 2: \n");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a população da carta 2: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área da carta 2 (km2): \n");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 2: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da carta 2: \n");
    scanf("%d", &pontosTuristicos2);

    // Cálculos carta 1
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);

    // Cálculos carta 2
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    // Exibição das cartas
    printf("\n Dados da Carta 1 \n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\n", estado1, codigo1, nomeCidade1);
    printf("População: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nPontos Turísticos: %d\n", populacao1, area1, pib1, pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\nSuper Poder: %.2f\n", densidade1, pibPerCapita1, superPoder1);

    printf("\n Dados da Carta 2 \n");
    printf("Estado: %c\nCodigo: %s\nCidade: %s\n", estado2, codigo2, nomeCidade2);
    printf("População: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nPontos Turísticos: %d\n", populacao2, area2, pib2, pontosTuristicos2);
    printf("Densidade Populacional: %.2f\nPIB per Capita: %.2f reais\nSuper Poder: %.2f\n", densidade2, pibPerCapita2, superPoder2);

    // Comparações
    printf("\n Comparação de Cartas \n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); 
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
