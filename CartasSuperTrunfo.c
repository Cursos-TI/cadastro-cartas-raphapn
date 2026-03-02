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

    /* No Mestre, população vira unsigned long int (número maior) */
    unsigned long int populacao1;

    float area1;               // Área em km²
    float pib1;                // PIB
    int pontos_turisticos1;    // Pontos turísticos


    /* Valores calculados (novos no Aventureiro) */
    float densidade1;      // população / área
    float pib_percapita1;  // pib / população
    float super_poder1;  // inserido no Mestre

  
  
    /* ========= CARTA 2 ========= */
    char estado2;
    char codigo2[4];
    char cidade2[50];

    unsigned long int populacao2;

    float area2;
    float pib2;
    int pontos_turisticos2;

    float densidade2;
    float pib_percapita2;
    float super_poder2;

    
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
    scanf("%lu", &populacao1);

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
    scanf("%lu", &populacao2);

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
       CÁLCULO DO SUPER PODER (Mestre)
       Soma dos atributos numéricos:
       população + área + PIB + pontos turísticos + PIB per capita + (1 / densidade)

       Observação importante:
       - população é unsigned long int
       - pontos turísticos é int
       - os outros são float
       Então a gente converte para float quando soma tudo.
       --------------------------- */
    super_poder1 =
        (float)populacao1 +
        area1 +
        pib1 +
        (float)pontos_turisticos1 +
        pib_percapita1 +
        (1.0f / densidade1);

    super_poder2 =
        (float)populacao2 +
        area2 +
        pib2 +
        (float)pontos_turisticos2 +
        pib_percapita2 +
        (1.0f / densidade2);


    /* ---------------------------
       EXIBIÇÃO (CONFIRMAÇÃO)
       Cada dado em uma linha
       --------------------------- */
    printf("\n=== Dados cadastrados ===\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f\n", pib_percapita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_percapita2);
    printf("Super Poder: %.2f\n", super_poder2);

  
    /* ---------------------------
       COMPARAÇÕES (Mestre)
       Regra:
       - Densidade: menor vence
       - Demais atributos: maior vence
       Saída: mostrar quem venceu + (1 ou 0)
       --------------------------- */
    printf("\nComparacao de Cartas:\n");

    /* Para cada atributo:
       - a variável *_c1_vence guarda 1 (carta 1 venceu) ou 0 (carta 2 venceu)
       - o texto "Carta 1" ou "Carta 2" sai via operador ternário
    */

    int pop_c1_vence = (populacao1 > populacao2);
    printf("Populacao: %s venceu (%d)\n", pop_c1_vence ? "Carta 1" : "Carta 2", pop_c1_vence);

    int area_c1_vence = (area1 > area2);
    printf("Area: %s venceu (%d)\n", area_c1_vence ? "Carta 1" : "Carta 2", area_c1_vence);

    int pib_c1_vence = (pib1 > pib2);
    printf("PIB: %s venceu (%d)\n", pib_c1_vence ? "Carta 1" : "Carta 2", pib_c1_vence);

    int pontos_c1_vence = (pontos_turisticos1 > pontos_turisticos2);
    printf("Pontos Turisticos: %s venceu (%d)\n", pontos_c1_vence ? "Carta 1" : "Carta 2", pontos_c1_vence);

    /* Densidade: menor vence */
    int dens_c1_vence = (densidade1 < densidade2);
    printf("Densidade Populacional: %s venceu (%d)\n", dens_c1_vence ? "Carta 1" : "Carta 2", dens_c1_vence);

    int pibpc_c1_vence = (pib_percapita1 > pib_percapita2);
    printf("PIB per Capita: %s venceu (%d)\n", pibpc_c1_vence ? "Carta 1" : "Carta 2", pibpc_c1_vence);

    int sp_c1_vence = (super_poder1 > super_poder2);
    printf("Super Poder: %s venceu (%d)\n", sp_c1_vence ? "Carta 1" : "Carta 2", sp_c1_vence);

    return 0;
}
    
