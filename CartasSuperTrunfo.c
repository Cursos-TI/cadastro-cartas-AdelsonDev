#include <stdio.h>
#include <string.h>

int main() {
  // Variáveis carta 1
  char estado1;                       // Estado de A até H
  char codigo1[5];                    // código da carta
  char nomeCidade1[41];               // Nome da cidade até 40 caractere
  int populacao1;                     // População da cidade, número inteiro
  float area1;                        // Área em km²
  float pib1;                         // produto interno bruto da cidade, número decimal
  int numeroPontosTuristicos1;        // Número de pontos turísticos, número interiro
  float densidade_populacional1;
  float pib_per_capita1;

  // carta 2
  char estado2;                       // Estado de A até H
  char codigo2[5];                    // Código da carta
  char nomeCidade2[41];               // Nome da cidade até 40 caractere
  int populacao2;                     // População da cidade, número inteiro    
  float area2;                        // Área em km²
  float pib2;                         // Produto interno bruto da cidade, número decimal   
  int numeroPontosTuristicos2;        // Número de pontos turísticos, número interiro
  float densidade_populacional2;
  float pib_per_capita2;

 
// Entrada de dados da carta 1


printf("Digite o estado da carta 1 (A-H): \n");
scanf( " %c", &estado1); // lê strings sem espaços
 
printf("Digite o código da carta 1: \n");
scanf(" %s", codigo1); // lê strins sem espaços
getchar();     
printf("Digite o nome da cidade 1: \n");
fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0';  // remove o Enter
getchar();
printf("Digite a população da cidade 1: \n");
scanf(" %d", &populacao1); // lê número inteiro
getchar();
printf("Digite a area da cidade 1(km²): \n");
scanf(" %f", &area1);      // lê número decimal
getchar();
printf("Digite o PIB da cidade 1: \n");
scanf(" %f", &pib1);      
getchar();
printf("Digite o numero de pontos turisticos 1: \n");
scanf(" %d", &numeroPontosTuristicos1); // lê número inteiro




// Entrada de dados carta 2
getchar();
printf("\nDigite o estado da carta 2 (A-H): \n");
scanf(" %c", &estado2);


printf("Digite o código da carta 2 (ex: B01): \n");
scanf("%s", codigo2);

getchar();
printf("Digite o nome da cidade da carta 2: \n");
fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';

printf("Digite a populacao da cidade 2: \n");
scanf(" %d", &populacao2);

printf("Digite a area da cidade 2 (km²): \n");
scanf(" %f", &area2);

printf("Digite o PIB da cidade 2: \n");
scanf(" %f", &pib2);

printf("Digite o numero de pontos turisticos: ");
scanf(" %d", &numeroPontosTuristicos2);
getchar();
 // cálculos

  densidade_populacional1 = (float) populacao1 / area1;
  pib_per_capita1 = pib1 / populacao1;

  densidade_populacional2 = (float) populacao2 / area2;
  pib_per_capita2 = pib2 / populacao2;


    // Exibindo resultados
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos: %d\n", numeroPontosTuristicos1);
    printf("A densidade da população 1 é: %.2f hab/km²\n", densidade_populacional1);
    printf("O PIB PER CAPITA da cidade 1 é: %.2f reais\n", pib_per_capita1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos: %d\n", numeroPontosTuristicos2);
    printf("A densidade da população 2 é: %.2f hab/km²\n", densidade_populacional2);
    printf("O PIB PER CAPITA da cidade 2 é: %.2f reais\n", pib_per_capita2 );
      
    

return 0;
} 
