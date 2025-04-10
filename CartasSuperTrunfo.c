#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    //versao novato
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado_c01[50], cidade_c01[50], cod_cidade_c01[50], estado_c02[50], cidade_c02[50], cod_cidade_c02[50];
    int populacao_c01, pontos_turisticos_c01, populacao_c02, pontos_turisticos_c02;
    float area_c01, pib_c01, area_c02, pib_c02;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // primeira cidade
    printf("Digite o estado da 1ª cidade:\n");
    scanf("%s", &estado_c01);
    printf("Digite o codigo da 1ª cidade:\n");
    scanf("%s", &cod_cidade_c01);
    printf("Digite o nome da 1ª cidade:\n");
    getchar();
    fgets(cidade_c01, sizeof(cidade_c01), stdin);
    printf("Digite a populacao da 1ª cidade:\n");
    scanf("%d", &populacao_c01);
    printf("Digite a area da 1ª cidade:\n");
    scanf("%f", &area_c01);
    printf("Digite o pib da 1ª cidade:\n");
    scanf("%f", &pib_c01);
    printf("Digite o numero de pontos turisticos da 1ª cidade:\n");
    scanf("%d", &pontos_turisticos_c01);

    // segunda cidade

    printf("Digite o estado da 2ª cidade:\n");
    scanf("%s", &estado_c02);
    printf("Digite o codigo da 2ª cidade:\n");
    scanf("%s", &cod_cidade_c02);
    printf("Digite o nome da 2ª cidade:\n");
    getchar();
    fgets(cidade_c02, sizeof(cidade_c02), stdin);
    printf("Digite a populacao da 2ª cidade:\n");
    scanf("%d", &populacao_c02);
    printf("Digite a area da 2ª cidade:\n");
    scanf("%f", &area_c02);
    printf("Digite o pib da 2ª cidade:\n");
    scanf("%f", &pib_c02);
    printf("Digite o numero de pontos turisticos da 2ª cidade:\n");
    scanf("%d", &pontos_turisticos_c02);

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Dados da 1ª carta:\n\n");
    printf("Estado: %s\nCódigo: %s%s\nNome da cidade: %sPopulação: %d\n", estado_c01, estado_c01, cod_cidade_c01, cidade_c01, populacao_c01);
    printf("Área: %.2f km²\nPIB: %.2f\nNúmero de pontos turísticos: %d\n", area_c01, pib_c01, pontos_turisticos_c01);
    printf("\n\nDados da 2ª carta:\n\n");
    printf("Estado: %s\nCódigo: %s%s\nNome da cidade: %sPopulação: %d\n", estado_c02, estado_c02, cod_cidade_c02, cidade_c02, populacao_c02);
    printf("Área: %.2f km²\nPIB: %.2f\nNúmero de pontos turísticos: %d\n", area_c02, pib_c02, pontos_turisticos_c02);

    return 0;
}
