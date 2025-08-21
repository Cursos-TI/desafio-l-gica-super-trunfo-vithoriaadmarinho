#include <stdio.h>
#include <stdlib.h>

int main() {
    char estado1[50], codigo1[10], cidade1[50];
    int populacao1, pontos_turisticos1, escolhaAtributo1;
    float area1, pib1, densidade1, pib_per_capita1;

    printf("***Super Trunfo***\n");
    
    printf("Digite o estado: \n");
    scanf(" %s", estado1);
    printf("Digite o cidade: \n");
    scanf(" %s", cidade1);
    printf("Digite o populacao: \n");
    scanf("%d", &populacao1);
    printf("Digite o area: \n");
    scanf("%f", &area1);
    printf("Digite o pib: \n");
    scanf("%f", &pib1);
    printf("Digite o pontos turisticos: \n");
    scanf("%d", &pontos_turisticos1);
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

  
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s01\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);

    printf("Escolha o atributo da Carta 1 :\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolhaAtributo1);

    switch (escolhaAtributo1){
        case 1:
            printf("Atributo escolhido da Carta 1: População = %d\n", populacao1);
            break;
        case 2:
            printf("Atributo escolhido da Carta 1: Área = %.2f\n", area1);
            break;
        case 3:
            printf("Atributo escolhido da Carta 1: PIB = %.2f\n", pib1);
            break;
        case 4:
            printf("Atributo escolhido da Carta 1: Pontos turísticos = %d\n", pontos_turisticos1);
            break;
        case 5:
            printf("Atributo escolhido da Carta 1: Densidade = %.2f\n", densidade1);
            break;
        default:
            printf("Escolha inválida!\n");
        
    }

    char estado2[50], codigo2[10], cidade2[50];
    int populacao2, pontos_turisticos2, escolhaAtributo2;
    float area2, pib2, densidade2, pib_per_capita2;
    
    printf("Digite o estado: \n");
    scanf(" %s", estado2);
    printf("Digite o cidade: \n");
    scanf(" %s", cidade2);
    printf("Digite o populacao: \n");
    scanf("%d", &populacao2);
    printf("Digite o area: \n");
    scanf("%f", &area2);
    printf("Digite o pib: \n");
    scanf("%f", &pib2);
    printf("Digite o pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
  
    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s02\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);

    printf("Escolha o atributo da Carta 2 :\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade\n");
    printf("6 - PIB per capita\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolhaAtributo2);

    switch (escolhaAtributo2){
        case 1:
            printf("Atributo escolhido da Carta 2: População = %d\n", populacao2);
            break;
        case 2:
            printf("Atributo escolhido da Carta 2: Área = %.2f\n", area2);
            break;
        case 3:
            printf("Atributo escolhido da Carta 2: PIB = %.2f\n", pib2);
            break;
        case 4:
            printf("Atributo escolhido da Carta 2: Pontos turísticos = %d\n", pontos_turisticos2);
            break;
        case 5:
            printf("Atributo escolhido da Carta 2: Densidade = %.2f\n", densidade2);
            break;
        default:
            printf("Escolha inválida!\n");
    }

    printf("***Resultado da Comparação***\n");

    if (escolhaAtributo1 >= 1 && escolhaAtributo1 <= 5) {
        switch (escolhaAtributo1) {
            case 1: // População
                printf("Comparando População:\n");
                printf("%s: %d habitantes\n", cidade1, populacao1);
                printf("%s: %d habitantes\n", cidade2, populacao2);
                if (populacao1 > populacao2) {
                    printf("Vencedor: %s\n", cidade1);
                } else if (populacao2 > populacao1) {
                    printf("Vencedor: %s\n", cidade2);
                } else {
                    printf("Empate!\n");
                }
                break;
            case 2: // Área
                printf("Comparando Área:\n");
                printf("%s: %.2f km²\n", cidade1, area1);
                printf("%s: %.2f km²\n", cidade2, area2);
                if (area1 > area2) {
                    printf("Vencedor: %s\n", cidade1);
                } else if (area2 > area1) {
                    printf("Vencedor: %s\n", cidade2);
                } else {
                    printf("Empate!\n");
                }
                break;
            case 3: // PIB
                printf("Comparando PIB:\n");
                printf("%s: %.2f bilhões\n", cidade1, pib1);
                printf("%s: %.2f bilhões\n", cidade2, pib2);
                if (pib1 > pib2) {
                    printf("Vencedor: %s\n", cidade1);
                } else if (pib2 > pib1) {
                    printf("Vencedor: %s\n", cidade2);
                } else {
                    printf("Empate!\n");
                }
                break;
            case 4: // Pontos turísticos
                printf("Comparando Pontos Turísticos:\n");
                printf("%s: %d pontos\n", cidade1, pontos_turisticos1);
                printf("%s: %d pontos\n", cidade2, pontos_turisticos2);
                if (pontos_turisticos1 > pontos_turisticos2) {
                    printf("Vencedor: %s\n", cidade1);
                } else if (pontos_turisticos2 > pontos_turisticos1) {
                    printf("Vencedor: %s\n", cidade2);
                } else {
                    printf("Empate!\n");
                }
                break;
            case 5: // Densidade (MENOR vence)
                printf("Comparando Densidade Demográfica:\n");
                printf("%s: %.2f hab/km²\n", cidade1, densidade1);
                printf("%s: %.2f hab/km²\n", cidade2, densidade2);
                if (densidade1 < densidade2) {
                    printf("Vencedor: %s (menor densidade)\n", cidade1);
                } else if (densidade2 < densidade1) {
                    printf("Vencedor: %s (menor densidade)\n", cidade2);
                } else {
                    printf("Empate!\n");
                }
                break;
        }
    } else {
        printf("Atributo inválido. Não foi possível realizar a comparação.\n");
    }

      return 0;

}