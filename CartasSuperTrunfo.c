#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char cidade[20];
    int populacao;
    int area;
    int turismo;
    int pib;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Escreva o nome da Cidade: \n");
    scanf("%s", &cidade);

    printf("Digite o tamanho da população: \n");
    scanf("%d", &populacao);

    printf("Digite o tamanho da area em KM da cidade: \n");
    scanf("%d", &area);

    printf("Digite a quantidade de pontos turisticos da cidade: \n");
    scanf("%d", &turismo);

    printf("Digite o PIB em Bilhão da cidade: \n");
    scanf("%d", &pib);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("DADOS DA CIDADE \n");
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Area: %d\n", area);
    printf("Turismo: %d\n", turismo);
    printf("PIB: %d\n", pib);

    return 0;
}
