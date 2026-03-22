#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado_1, cidade_1[50], estado_2, cidade_2, codigo_1, codigo_2;
  int populacao_1, populacao_2, pontosTuristicos_1, pontosTuristicos_2;
  float area_1, area_2, pib_1, pib_2;

  // Área para entrada de dados
  printf("############ Cadastro Carta A ################\n");
  printf("Digite o estado da carta:\n");
  scanf(" %c", &estado_1);

  printf("Digite o código da carta:\n");
  scanf("%s", codigo_1);
            
  printf("Digite o nome da cidade da carta:\n");
  scanf("%s", cidade_1);

  printf("Digite a população da cidade da carta:\n");
  scanf("%i", &populacao_1);

  printf("Digite a área da cidade da carta:\n");
  scanf("%f", &area_1);

  printf("Digite o PIB da cidade da carta:\n");
  scanf("%f", &pib_1);

  printf("Digite o número de pontos turísticos da cidade da carta:\n");
  scanf("%i", &pontosTuristicos_1);
  printf("############ Cadastro Carta B ################\n");
  // Área para exibição dos dados da cidade

return 0;
} 
