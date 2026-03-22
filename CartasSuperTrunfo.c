#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado_1, cidade_1[50], estado_2, cidade_2[50], codigo_1[50], codigo_2[50];
  int populacao_1, populacao_2, pontosTuristicos_1, pontosTuristicos_2;
  float area_1, area_2, pib_1, pib_2;

  // Área para entrada de dados
  printf("############ Cadastro Carta A ################\n");
  printf("Digite o estado da carta:\n");
  scanf(" %c", &estado_1);

  printf("Digite o código da carta:\n");
  scanf("%c", codigo_1);
            
  printf("Digite o nome da cidade da carta:\n");
  scanf("%s", cidade_1);

  printf("Digite a população da cidade da carta:\n");
  scanf("%i", &populacao_1);

  printf("Digite a área da cidade da carta:\n");
  scanf("%f", &area_1);

  printf("Digite o PIB da cidade da carta:\n");
  scanf("%f", &pib_1);

  printf("Digite o número de pontos turísticos da cidade da carta A:\n");
  scanf("%i", &pontosTuristicos_1);

  printf("###### Carta A cadastrada com sucesso ########\n");

  printf("############ Cadastro Carta B ################\n");
  
  printf("Digite o estado da carta:\n");
  scanf(" %c", &estado_2);

  printf("Digite o código da carta:\n");
  scanf("%c", codigo_2);
            
  printf("Digite o nome da cidade da carta:\n");
  scanf("%s", cidade_2);

  printf("Digite a população da cidade da carta:\n");
  scanf("%i", &populacao_2);

  printf("Digite a área da cidade da carta:\n");
  scanf("%f", &area_2);

  printf("Digite o PIB da cidade da carta:\n");
  scanf("%f", &pib_2);

  printf("Digite o número de pontos turísticos da cidade da carta A:\n");
  scanf("%i", &pontosTuristicos_2);
  printf("####### Carta B cadastrada com sucesso #######\n");

  // Área para exibição dos dados da cidade carta A
  printf("### Exibindo Carta A ###\n");
  printf("Estado: %c\n", estado_1); 
  printf("Código: %s\n", codigo_1);
  printf("Cidade: %s\n", cidade_1);
  printf("População: %i\n", populacao_1);
  printf("Área:%f km²\n", area_1);
  printf("PIB:%f bilhões de reais\n", pib_1);
  printf("Pontos Turísticos: %i\n", pontosTuristicos_1);
  printf("### Carta A concluida ###\n");

  printf("### Exibindo Carta B ###\n");
  printf("Estado: %c\n", estado_2); 
  printf("Código: %s\n", codigo_2);
  printf("Cidade: %s\n", cidade_2);
  printf("População: %i\n", populacao_2);
  printf("Área:%f km²\n", area_2);
  printf("PIB:%f bilhões de reais\n", pib_2);
  printf("Pontos Turísticos: %i\n", pontosTuristicos_2);
  printf("### Carta B concluida ###\n");
return 0;
} 
