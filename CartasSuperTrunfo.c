#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

 /* ========= CARTA 1 ========= */
    char estado1;              // Uma letra de 'A' a 'H'
    char codigo1[4];           // Ex: A01
    char cidade1[50];          // Nome da cidade (com espaços)
    int populacao1;            // Número de habitantes
    float area1;               // Área em km²
    float pib1;                // PIB
    int pontos_turisticos1;    // Pontos turísticos


    /* Valores calculados (novos no Aventureiro) */
    float densidade1;      // população / área
    float pib_percapita1;  // pib / população
  
  
    /* ========= CARTA 2 ========= */
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
  
    float densidade2;
    float pib_percapita2;

    
    /* Mensagem inicial para deixar claro o que o usuário vai fazer */
    printf("\n=== SUPER TRUNFO ===\n\n");
    printf("Voce ira cadastrar cartas.\n\n");
    printf("Dica: o Estado é representado por codigo, que deve ser uma letra (A a H) + 2 numeros (ex: A01).\n\n");
    printf("IMPORTANTE: Primeiro a letra + Enter, depois numeros.\n");
    printf("Nao repita o código na segunda carta.\n");
    printf("Dados numericos nao devem ter ponto, ex.: 45234.\n\n");
    
    
    /* ---------------------------
       LEITURA DA CARTA 1
       --------------------------- */
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite o Estado (A a H): \n");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta (ex: A01): \n");
    scanf(" %3s", codigo1);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %49[^\n]", cidade1); // lê até o ENTER, aceitando espaços

    printf("Digite a Populacao (numero inteiro): \n");
    scanf("%d", &populacao1);

    printf("Digite a Area em km2 (ex: 152111): \n");
    scanf("%f", &area1);

    printf("Digite o PIB (ex: 69928): \n");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: \n");
    scanf("%d", &pontos_turisticos1);

    /* ---------------------------
       LEITURA DA CARTA 2
       --------------------------- */
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite o Estado (A a H): \n");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: B02): \n");
    scanf(" %3s", codigo2);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %49[^\n]", cidade2);

    printf("Digite a Populacao (numero inteiro): \n");
    scanf("%d", &populacao2);

    printf("Digite a Area em km2 (ex: 1200.25): \n");
    scanf("%f", &area2);

    printf("Digite o PIB (ex: 300.50): \n");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: \n");
    scanf("%d", &pontos_turisticos2);

  /* ---------------------------
       CÁLCULOS (Aventureiro)
       densidade = população / área
       PIB per capita = PIB / população
       --------------------------- */
    densidade1 = (float)populacao1 / area1;
    pib_percapita1 = pib1 / (float)populacao1;

    densidade2 = (float)populacao2 / area2;
    pib_percapita2 = pib2 / (float)populacao2;

  
    /* ---------------------------
       EXIBIÇÃO (CONFIRMAÇÃO)
       Cada dado em uma linha
       --------------------------- */
    printf("\n=== Dados cadastrados ===\n");

     printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f\n", pib_percapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_percapita2);
  
    
return 0;
} 
