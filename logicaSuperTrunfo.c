#include <stdio.h>

int main(){
    int opcao, opcao2;
    float valor1_C1, valor1_C2;
    float valor2_C1, valor2_C2;

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
   //}else{ //
    //printf("Carta2 venceu!\n");

    //Comparação interativa
    int escolha1, escolha2;

    //Primeiro menu
    printf("### Escolha o PRIMEIRO Atributo ###\n");
    printf("1. População\n");
    printf("2. Pontos Turísticos\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Densidade\n");
    printf("6. PIB per Capita\n");
    scanf("%d", &escolha1);

    switch(escolha1) {
        case 1: //População
          valor1_C1 = (float)populacao1;
          valor1_C2 = (float)populacao2;
        printf("Atributo 1: População\n");
        printf("Agora escolha o segundo atributo (2,3,4,5,6): \n");
        scanf("%d", &escolha2);
             
             switch (escolha2) //menu interno para escolha do 2º atributo
             {
             case 2:
                valor2_C1 = (float)turisticos1;
                valor2_C2 = (float)turisticos2;
                printf("Segundo atributo: Pontos Turísticos\n");
                break;
            
            case 3:
                valor2_C1 = area1;
                valor2_C2 = area2;
                printf("Segundo atributo: Área\n");
                break;
            
            case 4:
                valor2_C1 = pib1;
                valor2_C2 = pib2;
                printf("Segundo atributo: PIB\n");
                break;
            
            case 5:
                valor2_C1 = (1.0 / densidade1);
                valor2_C2 = (1.0 / densidade2);
                printf("Segundo atributo: Densidade\n");
                break;
            
            case 6:
                valor2_C1 = capita1;
                valor2_C2 = capita2;
                printf("Segundo atributo: PIB per Capita\n");
                break;
             
             default:
                printf("Opção inválida para o segundo atributo\n");
                return 0; //encerra o programa quando escolhe errado
                break;
             }
        break;
        
        case 2: //pontos turísticos primeiro
          valor1_C1 = (float)turisticos1;
          valor1_C2 = (float)turisticos2;
          printf("Atributo 1: Pontos Turísticos\n");
          printf("Agora escolha o segundo atributo: (1,3,4,5,6)\n");
          scanf("%d", &escolha2);
            
            switch (escolha2)
            {
            case 1:
                valor2_C1 = (float)populacao1;
                valor2_C2 = (float)populacao2;
                printf("Segundo atributo: População\n");
                break;
            case 3:
                valor2_C1 = area1;
                valor2_C2 = area2;
                printf("Segundo atributo: Área\n");
                break;
            case 4:
                valor2_C1 = pib1;
                valor2_C2 = pib2;
                printf("Segundo atributo: PIB\n");
                break;
            case 5:
                valor2_C1 = (1.0 / densidade1);
                valor2_C2 = (1.0 / densidade2);
                printf("Segundo atributo: Densidade\n");
                break;
            case 6:
                valor2_C1 = capita1;
                valor2_C2 = capita2;
                printf("Segundo atributo: PIB per Capita\n");
                break;
            
            default:
                printf("Opção inválida para o segundo atributo\n");
                return 0; //encerra o programa quando escolhe errado
                break;
            }
        break;

        case 3: //Área primeiro
           valor1_C1 = area1;
           valor1_C2 = area2;
           printf("Atributo 1: Área\n");
           printf("Agora escolha o segundo atributo (1,2,4,5,6)\n");
           scanf("%d", &escolha2);

           switch (escolha2)
           {
           case 1:
            valor2_C1 = (float)populacao1;
            valor2_C2 = (float)populacao2;
            printf("Segundo atributo: População\n");
            break;
           
            case 2:
            valor2_C1 = (float)turisticos1;
            valor2_C2 = (float)turisticos2;
            printf("Segundo atributo: Pontos Turísticos\n");
            break;
           
            case 4:
             valor2_C1 = pib1;
             valor2_C2 = pib2;
             printf("Segundo valor: PIB\n");
             break;
           
            case 5:
                valor2_C1 = (1.0 / densidade1);
                valor2_C2 = (1.0 / densidade2);
                printf("Segundo atributo: Densidade\n");
                break;
            case 6:
                valor2_C1 = capita1;
                valor2_C2 = capita2;
                printf("Segundo atributo: PIB per Capita\n");
                break;
            
            default:
                printf("Opção inválida para o segundo atributo\n");
                return 0; //encerra o programa quando escolhe errado
                break; 
           
           }
        
        break;

        case 4: //Escolha pib primeiro
           valor1_C1 = pib1;
           valor1_C2 = pib2;
           printf("Atributo 1: PIB\n");
           printf("Agora escolha o segundo atributo (1,2,3,5,6):\n");
           scanf("%d", &escolha2);

           switch (escolha2)
           {
           case 1:
            valor2_C1 = (float)populacao1;
            valor2_C2 = (float)populacao2;
            printf("Segundo atributo: População\n");
            break;
           
            case 2:
             valor2_C1 = (float)turisticos1;
             valor2_C2 = (float)turisticos2;
             printf("Segundo atributo: Pontos Turísticos\n");
             break;
            
            case 3:
              valor2_C1 = area1;
              valor2_C2 = area2;
              printf("Segundo atributo: Área\n");
              break;

            case 5:
              valor2_C1 = (1.0 / densidade1);
              valor2_C2 = (1.0 / densidade2);
              printf("Segundo atributo: Densidade\n");
              break;

            case 6:
              valor2_C1 = capita1;
              valor2_C2 = capita2;
              printf("Segundo atributo: PIB per Capita\n");
              break;

           default:
             printf("Opção inválida para o segundo atributo.\n");
             return 0;
             break;
           }
        break;

        case 5: //escolha densidade primeiro
          valor1_C1 = (1.0 / densidade1);
          valor1_C2 = (1.0 / densidade2);
          printf("Atributo 1: Densidade\n");
          printf("Agora escolha o segundo atributo (1,2,3,4,6): \n");
          scanf("%d", &escolha2);

          switch (escolha2)
          {
          case 1:
            valor2_C1 = (float)populacao1;
            valor2_C2 = (float)populacao2;
            printf("Segundo atributo: População\n");
            break;

          case 2:
            valor2_C1 = (float)turisticos1;
            valor2_C2 = (float)turisticos2;
            printf("Segundo atributo: Pontos Turísticos\n");
            break;
          
          case 3:
            valor2_C1 = area1;
            valor2_C2 = area2;
            printf("Segundo atributo: Área\n");
            break;
          
          case 4:
            valor2_C1 = pib1;
            valor2_C2 = pib2;
            printf("Segundo valor: PIB\n");
            break;
        
          case 6:
            valor2_C1 = capita1;
            valor2_C2 = capita2;
            printf("Segundo atributo: PIB per Capita\n");
            break;
          
          default:
            printf("Opção inválida para o segundo atributo.\n");
            return 0;
            break;
          }

        break;
    
        case 6: //escolha pib per capita primeiro
           valor1_C1 = capita1;
           valor1_C2 = capita2;
           printf("Atributo1: PIB per Capita\n");
           printf("Agora escolha o segundo atributo(1,2,3,4,5): \n");
           scanf("%d", &escolha2);

           switch (escolha2)
           {
           case 1:
            valor2_C1 = (float)populacao1;
            valor2_C2 = (float)populacao2;
            printf("Segundo atributo: População\n");
            break;
          
           case 2:
            valor2_C1 = (float)turisticos1;
            valor2_C2 = (float)turisticos2;
            printf("Segundo atributo: Pontos Turísticos\n");
            break;
          
           case 3:
            valor2_C1 = area1;
            valor2_C2 = area2;
            printf("Segundo atributo: Área\n");
            break;
           
           case 4:
            valor2_C1 = pib1;
            valor2_C2 = pib2;
            printf("Segundo valor: PIB\n");
            break;
            
           case 5:
            valor2_C1 = (1.0 / densidade1);
            valor2_C2 = (1.0 / densidade2);
            printf("Segundo atributo: Densidade\n");
            break;

           default:
            printf("Escolha inválida para o segundo atributo.\n");
            return 0;
            break;
           }
        
        break;

        
    }

    // Lógica de comparação

    float soma1 = valor1_C1 + valor2_C1; 
    float soma2 = valor1_C2 + valor2_C2;

    printf("\n=================================\n");
    printf("       RESULTADO DO DUELO     \n");
    printf("===================================\n");
    printf("%s: %.2fpontos\n", cidade1, soma1); //exibe a soma para C1
    printf("%s: %.2fpontos\n", cidade2, soma2); //exibe a soma para C2
    printf("-----------------------------------\n");

    if(soma1 > soma2) {
        printf("VENCEDOR: %s!\n", cidade1);
    } else if (soma2 > soma1) {
        printf("VENCEDOR: %s!\n", cidade2);    
    } else {
        printf("EMPATE TÉCNICO\n");
    }

    printf("===============================\n");

    return 0;
  
 }
