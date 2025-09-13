#include <stdio.h>

    // Desafio Acadêmico
    // Cadastro das Cartas Super Trunfo

int main() {
    //Variáveis Primeira Carta
    char estado1[15] = "Pernambuco";
    char codigo1[15] = "P01";
    char cidade1[15] = "Recife";
    int populacao1 = 50890056;
    float area1 = 540.8;
    float pib1 = 345.2;
    int pontos_turisticos1 = 14;

    // Variáveis Segunda Carta
    char estado2 [15] = "Sergipe";
    char codigo2[15] = "S02";
    char cidade2[15] = "Aracaju";
    int populacao2 = 76889796;
    float area2 = 987.2;
    float Pib2 = 345.3;
    int pontos_turisticos2 = 12;

    // Dados Primeira Carta
    printf("Digite os dados da primeira carta: /n")

    printf("Digite o estado (A-H): ");
    scanf("%s", &estado1);

    printf("Digite o codigo da carta: ");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area (km²): ");
    scanf("%f", &area1);

    printf("Digite o Pib1 (bilhoes): ");
    scanf("%f", &pib1);

    printf("Digite número pontos turisticos: ");
    scanf("%d", &pontos turisticos1);

    // Dados Segunda Carta
    printf("Digite os dados da Segunda Carta: /n")

    printf("Digite o codigo da carta: ");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area (km²): ");
    scanf("%f", &area2);

    printf("Digite o Pib2 (bilhoes): ");
    scanf("%f", &Pib2);

    printf("Digite número pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    //Exibicao Resultados - Carta 1
    printf("\nDados da primeira Carta: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s/n", codigo1);
    printf("Nome da cidade: %s/n", nome cidade1);
    printf("População: %d/n", populacao1);
    printf("Área: %.2f km²/n", area1);
    printf("Pib: %.2f bihoes\n, pib1");
    printf("Pontos turisticos: %d\n, pontos_turisticos1");

    //Exibicao Resultados - Carta 2
    printf("\nDados da segunda Carta: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s/n", codigo2);
    printf("Nome da cidade: %s/n", nome cidade2);
    printf("População: %d/n", populacao2);
    printf("Área: %.2f km²/n", area2);
    printf("Pib: %.2f bihoes\n, pib2");
    printf("Pontos turisticos: %d\n, pontos_turisticos2");

return 0;
}
