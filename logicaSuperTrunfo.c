#include <stdio.h>

int main(){
    int opcao;
//variaveis carta1
    
    char estado1[3], codigo1[5], cidade1[50];
    unsigned long int populacao1;
    int turisticos1;
    float area1, pib1, densidade1, capita1, superPoder1, superPoder2;

//variaveis carta2
    
    char estado2[3], codigo2[5], cidade2[50];
    unsigned long int populacao2;
    int turisticos2;
    float area2, pib2, densidade2, capita2;

//leitura carta1

    printf("--- Cadastro da carta1 ---\n");
    printf("Insira a sigla do estado: \n");
    scanf("%s", estado1);
    printf("Agora insira o codigo da carta: \n");
    scanf("%s", codigo1);
    printf("Agora insira o nome da cidade: \n");
    scanf("%s", cidade1);
    printf("Insira a população: \n");
    scanf("%lu", &populacao1);
    printf("Insira os pontos turísticos: \n");
    scanf("%d", &turisticos1);
    printf("Insira a área: \n");
    scanf("%f", &area1);
    printf("Insira o pib: \n");
    scanf("%f", &pib1);

//leitura carta2

    printf("--- Cadastro da carta2 ---\n");
    printf("Insira a sigla do estado: \n");
    scanf("%s", estado2);
    printf("Agora insira o codigo da carta: \n");
    scanf("%s", codigo2);
    printf("Agora insira o nome da cidade: \n");
    scanf("%s", cidade2);
    printf("Insira a população: \n");
    scanf("%lu", &populacao2);
    printf("Insira os pontos turísticos: \n");
    scanf("%d", &turisticos2);
    printf("Insira a área: \n");
    scanf("%f", &area2);
    printf("Insira o pib: \n");
    scanf("%f", &pib2);

//cálculo densidade e pib per capita carta1:
    densidade1 = (float)populacao1 / area1;
    capita1 = (pib1 * 1000000000.0 / (float)populacao1);

//Cálculo superPoder carta1
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)turisticos1 + capita1 + (1.0 / densidade1);

//cálculo densidade e pib per capita carta2:
    densidade2 = (float)populacao2 / area2;
    capita2 = (pib2 * 1000000000.0 / (float)populacao2);

//cálculo superPoder carta2:
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)turisticos2 + capita2 + (1.0 / densidade2);

//exibição carta1

    printf("\n-------------------------\n");
    printf("Dados da carta1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Pontos Turísticos: %d\n", turisticos1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("Pib per Capita: %.2f reais\n", capita1);
    printf("Super Poder: %.2f\n", superPoder1);

//exibição carta2
    printf("\n-------------------------\n");
    printf("Dados da carta2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Pontos Turísticos: %d\n", turisticos2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("Pib per Capita: %.2f reais\n", capita2);
    printf("Super Poder: %.2f\n", superPoder2);    
    printf("------------------------\n");

//comparativo das cartas (1 = carta 1 venceu | 0 = carta 2 venceu):
   //printf("\n --- RESULTADO DA COMPARACAO --- \n");
   //printf("População: %d\n", populacao1 > populacao2);
   //printf("Área: %d\n", area1 > area2);
   //printf("PIB: %d\n", pib1 > pib2);
   //printf("Pontos Turísticos: %d\n", turisticos1 > turisticos2);
   //printf("Densidade Populacional: %d\n", densidade1 < densidade2);
   //printf("PIB Per Capita: %d\n", capita1 > capita2);
   //printf("Super Poder: %d\n", superPoder1 > superPoder2);
   //printf("\n-------------------------------------\n");

//Comparação por atributo:
   //printf("Comparação de cartas(Atributo: População):\n");
   //printf("Carta1-População: %lu\n", populacao1);
   //printf("Carta2-População: %lu\n", populacao2);

   //if (populacao1 > populacao2){
    //printf("Carta1 venceu!\n");
   //}else {
    //printf("Carta2 venceu!\n");

    printf("Menu de Comparação: \n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Pontos turísticos \n");
    printf("5. Densidade Demográfica \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        if (populacao1 > populacao2){
            printf("A Carta vencedora é: %s\n", cidade1);
        } else {
            printf("A carta vencedora é: %s", cidade2);
        } 
        break;
    
    case 2:
        if (area1 > area2) {
            printf("A carta vencedora é: %s\n", cidade1);
        } else {
            printf("A carta vencedora é: %s\n", cidade2);
        }
        break;
    case 3:
        if (pib1 > pib2) {
            printf("A carta vencedora é: %s\n", cidade1);
        } else {
            printf("A carta vencedora é: %s\n", cidade2);
        }
        break;
    case 4:
        if (turisticos1 > turisticos2) {
            printf("A carta vencedora é: %s\n", cidade1);
        } else {
            printf("A carta vencedora é: %s\n", cidade2);
        }   
        break;
    case 5:
        if (densidade1 < densidade2) {
            printf("A carta vencedora é: %s\n", cidade1);
        } else {
            printf("A carta vencedora é: %s\n", cidade2);
        }
        break;
    default:
        printf("Opção inválida, selecione uma opção entre 1 e 5\n");
    }
    }
