#include <stdio.h>

// Definindo uma estrutura para armazenar os dados da cidade
struct Cidade {
    char codigoCidade[100];
    char nomeCidade[100];
    unsigned int populacao;
    float area;
    float PIB;
    int numeroPontosTuristicos;
};

int main() {
    struct Cidade cidade1, cidade2;

    // Cadastro da primeira cidade
    printf("\n--- Cadastro da Cidade 1 ---\n");

    printf("Entre com o código da cidade: \n");
    scanf(" %[^\n]s", cidade1.codigoCidade);

    printf("Entre com o nome da cidade: \n");
    scanf(" %[^\n]s", cidade1.nomeCidade);

    printf("Entre com a população: \n");
    scanf("%u", &cidade1.populacao);

    printf("Entre com a área (em km²): \n");
    scanf("%f", &cidade1.area);

    printf("Entre com o PIB (em bilhões): \n");
    scanf("%f", &cidade1.PIB);

    printf("Entre com o número de pontos turísticos: \n");
    scanf("%d", &cidade1.numeroPontosTuristicos);

    // Cadastro da segunda cidade
    printf("\n--- Cadastro da Cidade 2 ---\n");

    printf("Entre com o código da cidade: \n");
    scanf(" %[^\n]s", cidade2.codigoCidade);

    printf("Entre com o nome da cidade: \n");
    scanf(" %[^\n]s", cidade2.nomeCidade);

    printf("Entre com a população: \n");
    scanf("%u", &cidade2.populacao);

    printf("Entre com a área (em km²): \n");
    scanf("%f", &cidade2.area);

    printf("Entre com o PIB (em bilhões): \n");
    scanf("%f", &cidade2.PIB);

    printf("Entre com o número de pontos turísticos: \n");
    scanf("%d", &cidade2.numeroPontosTuristicos);

    // Exibindo os dados da primeira cidade
    printf("\n--- Dados da Cidade 1 ---\n");
    printf("Código da cidade: %s\n", cidade1.codigoCidade);
    printf("Nome da cidade: %s\n", cidade1.nomeCidade);
    printf("População: %u habitantes\n", cidade1.populacao);
    printf("Área: %.2f km²\n", cidade1.area);
    printf("PIB: %.2f bilhões\n", cidade1.PIB);
    printf("Número de pontos turísticos: %d\n", cidade1.numeroPontosTuristicos);

    // Exibindo os dados da segunda cidade
    printf("\n--- Dados da Cidade 2 ---\n");
    printf("Código da cidade: %s\n", cidade2.codigoCidade);
    printf("Nome da cidade: %s\n", cidade2.nomeCidade);
    printf("População: %u habitantes\n", cidade2.populacao);
    printf("Área: %.2f km²\n", cidade2.area);
    printf("PIB: %.2f bilhões\n", cidade2.PIB);
    printf("Número de pontos turísticos: %d\n", cidade2.numeroPontosTuristicos);

    return 0;
}
