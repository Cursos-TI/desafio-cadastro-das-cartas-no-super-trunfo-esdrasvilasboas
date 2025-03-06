#include <stdio.h>

int main() {
    char codigoCidade[100];
    char nomeCidade[100]; 
    unsigned int populacao;
    float area, PIB;
    int numeroPontosTuristicos;
 
 printf("Entre com o código da cidade: \n");
    scanf(" %[^\n]s", &codigoCidade);
    
    printf("Entre com o nome da cidade: \n");
    scanf(" %[^\n]s", nomeCidade); // Lê uma string com espaços
    
    printf("Entre com a população: \n");
    scanf("%u", &populacao);
    
    printf("Entre com a área (em km²): \n");
    scanf("%f", &area);
    
    printf("Entre com o PIB (em bilhões): \n");
    scanf("%f", &PIB);
    
    printf("Entre com o número de pontos turísticos: \n");
    scanf("%d", &numeroPontosTuristicos);
    
    printf("\n--- Dados da Cidade ---\n");
    printf("Código da cidade: %d\n", codigoCidade);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("População: %u habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", PIB);
    printf("Número de pontos turísticos: %d\n", numeroPontosTuristicos);

    return 0;
}
