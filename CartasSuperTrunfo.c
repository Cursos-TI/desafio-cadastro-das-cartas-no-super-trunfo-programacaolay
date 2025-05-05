#include <stdio.h>

#define TAM_CODIGO 5
#define TAM_CIDADE 50

// Estrutura para armazer os dados de uma carta
typedef struct {
   

    char estado;                       // Letra de A a H              
    char codigo[TAM_CODIGO];     // Ex: A01
    char nome[TAM_CIDADE];       // Nome da cidade
    int população;                    // Número de habitantes    
    float área;                      // Área em km²
    float pib;                       //PIB da cidade
    int pontos;           // Numero de pontos turísticos
} Carta;

int main(){
    // Declaração das duas cartas
    Carta carta1;
    Carta carta2;

    //Instruções para o usuário
    printf("=== Cadstro de Cartas do Super Trunfo ===\n\n");
    
    //Entrada de dados da primeira carta
    printf("Informe os dados da primeira carta:\n");

    printf("Estado (A-H): ");
    scanf ("%c", &carta1.estado);


    printf("Código da carta (ex: A01):");
    scanf("%s", carta1.codigo);

    printf("Nome da ciadade: ");
    scanf("%[^\n]", carta1.nome); 

    printf("População:");
    scanf("%d" , &carta1.população);

    printf("Área em km²:");
    scanf("%f", &carta1.área);

    printf("PIB:(em bilhões) ");
    scanf("%f", &carta1.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontos);

    // Espaço 
    printf("\n");

    // Entrada para segunda carta 

    printf("Informe os dados da segunda carta:\n");

    printf("Estado (A-H)");
    scanf("%c", &carta2.estado);

    printf("Codigo da carta (Ex: B03): ");
    scanf("%c", carta2.codigo);

    printf("Nome da cidade: ");
    scanf("%[^\n]", carta2.nome);

    printf("Populção: ");
    scanf ("%d", &carta2.população);
    printf("Área em km²: ");
    scanf("%f", &carta2.área);

    printf(" PIB (em bilhões): ");
    scanf("%f", &carta2.pib);

    printf(" Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontos);

    // Espaço
    printf("\n");

    // Exibição dos dados da priemira carta
    printf("=== Dados da Primeira carta===\n");
    printf(" Estado: %c\n", carta1.estado);
    printf("Codgio de Carta: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome);
    printf("População: %d habitantes \n", carta1.população);
    printf("Área: %.2f km²\n", carta1.área);
    printf("PIB: R$ %.2f bilhões\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontos);

    // Espaço
    printf("\n");

    // Exibição dos dados da segunda carta 
    printf("===Dados da Segunda Carta ===\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código da carta: %s\n", carta2.codigo);
    printf("Nome da cidade: %s\n", carta2.nome);
    printf("População: %d habitantes\n", carta2.população);
    printf("Área: %.2f km²\n", carta2.área);
    printf("PIB: R$ %.2f bilhões\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontos);
    
    return 0;
}