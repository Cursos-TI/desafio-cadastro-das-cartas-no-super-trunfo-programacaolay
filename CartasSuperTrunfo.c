#include <stdio.h>

// Estrutura para armazer os dados de uma carta
 struct cartasupertriunfo {
    
    char estado;                       // Letra de A a H              
    char codigo[4];                   // Ex: A01
    char nomeCidade[100];              // Nome da cidade
    int populacao;                    // Número de habitantes    
    float area;                      // Área em km²
    float pib;                       //PIB da cidade
    int pontosTuristicos;           // Numero de pontos turísticos
};

int main(){
    // Declaração das duas cartas
    struct carta1;
    struct carta2;

    //Instruções para o usuário
    printf("=== Cadastro de Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf ("%c", carta2.estado);
    
    printf("Código da carta (ex: A01):");
    scanf("%s", carta1.codigo);

    printf("Nome da cidade: ");
    scanf("%[^\n]", carta1.nomeCidade); 

    printf("População:");
    scanf("%d" , &carta1.populacao);

    printf("Área em km²:");
    scanf("%f", &carta1.area);

    printf("PIB:(em bilhões) ");
    scanf("%f", &carta1.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Entrada para segunda carta 

    printf("Cadastrado da carta 2:\n");

    printf("Estado (A-H)");
    scanf("%c", &carta2.estado);

    printf("Codigo da carta (Ex: B03): ");
    scanf("%s", carta2.codigo);

    printf("Nome da cidade: ");
    scanf("%[^\n]", carta2.nomeCidade);

    printf("Populção: ");
    scanf ("%d", &carta2.populacao);

    printf("Área em km²: ");
    scanf("%f", &carta2.area);

    printf(" PIB (em bilhões): ");
    scanf("%f", &carta2.pib);

    printf(" Número de Pontos Turisticos: ");
    scanf("%d", &carta2.pontoSturisticos);


    // Exibição dos dados da priemira carta
    printf("=== Dados da Carta 1===\n");
    printf(" Estado: %c\n", carta1.estado);
    printf("Codgio de Carta: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d habitantes \n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: R$ %.2f bilhões\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontosTuristicos);

    // Espaço
    printf("\n");

    // Exibição dos dados da segunda carta 
    printf("===Dados da Carta 2 ===\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código da carta: %s\n", carta2.codigo);
    printf("Nome da cidade: %s\n", carta2.nomeCidade);
    printf("População: %d habitantes\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: R$ %.2f bilhões\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontosTuristicos);
    
    return 0;
}