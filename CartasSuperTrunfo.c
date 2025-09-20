#include <stdio.h>


int main() {
  // Variáveis carta 1
  char estado1;                       // Estado de A até H
  char codigo1[4];                    // código da carta
  char nomeCidade1[40];               // Nome da cidade até 40 caractere
  int populacao1;                     // População da cidade, número inteiro
  float area1;                        // Área em km²
  float pib1;                         // produto interno bruto da cidade, número decimal
  int numeroPontosTuristicos1;        // Número de pontos turísticos, número interiro

  // carta 2
  char estado2;                       // Estado de A até H
  char codigo2[4];                    // Código da carta
  char nomeCidade2[40];               // Nome da cidade até 40 caractere
  int populacao2;                     // População da cidade, número inteiro    
  float area2;                        // Área em km²
  float pib2;                         // Produto interno bruto da cidade, número decimal   
  int numeroPontosTuristicos2;        // Número de pontos turísticos, número interiro



// Entrada de dados da carta 1


printf("Digite o estado da carta 1 (A-H): \n");
scanf( "%c", &estado1); // lê 1 caractere

printf("Digite o código da carta 1: \n");
scanf("%c", &codigo1); // lê strins sem espaços

printf("Digite o nome da cidade 1: \n");
scanf("%c", &nomeCidade1);

printf("Digite a população da cidade 1: \n");
scanf("%d", &populacao1); // lê número inteiro


printf("Digite a area da cidade1(km²): \n");
scanf("%f", &area1);      // lê número decimal

printf("Digite o PIB da cidade 1: \n");
scanf("%f", &pib1);       // lê número decimal

printf("Digite o numero de pontos turisticos 1: \n");
scanf("%d", &numeroPontosTuristicos1); // lê número inteiro




  
return 0;
} 
