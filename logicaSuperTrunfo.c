#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    printf("Bem-vindo ao Desafio Super Trunfo - Países!\n"); //inicializando o jogo
    printf("Começaremos com o cadastro das cartas2!\n");

    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    int populacao, pontos_turisticos; //criando as variáveis    
    float area;
    float pib;
    char cidade[20], estado[20];
    float densidade_populacional;
    float pib_per_capta;
    char id[3];
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

        // CADASTRO DA CARTA 01:

        printf("Insira o ID da carta: \n"); //coletando os dados da carta do usuário
        scanf("%s", &id);

        printf("Insira o Estado: \n");
        scanf("%s", &estado);

        printf("Insira a cidade: \n");
        scanf("%s", &cidade);

        printf("Insira a população: \n");
        scanf("%d", &populacao);

        printf("Insira a área: \n");
        scanf("%f", &area);

        printf("Insira o PIB: \n");
        scanf("%f", &pib);

        printf("Insira o número de pontos turísticos: \n");
        scanf("%d", &pontos_turisticos);



        printf("\nDados da Carta:%s \n", id); //mostrando ao usuário os dados cadastrados
        printf("Estado: %s \n", estado);
        printf("Cidade: %s \n", cidade);
        printf("População: %d pessoas\n", populacao);
        printf("Área: %.3f km²\n", area);
        printf("PIB: R$ %.3f\n", pib);
        printf("Número de Pontos Turísticos: %d \n", pontos_turisticos);

        densidade_populacional = populacao / area; // calculando a densidade populacional e exibindo
        printf("Densidade Populacional: %.1f hab/km²\n", densidade_populacional);

        pib_per_capta = pib / populacao; // calculando o pib per capta e exibindo
        printf("PIB per capta: R$ %.2f \n", pib_per_capta);

        //CADASTRO DA CARTA 02

        int populacao2, pontos_turisticos2; //criando as variáveis    
        float area2;
        float pib2;
        char cidade2[20], estado2[20];
        float densidade_populacional2;
        float pib_per_capta2;
        char id2[3];
        int escolhaAtributo;

        printf("Insira o ID da carta 02: \n"); //coletando os dados da carta do usuário
        scanf("%s", &id2);

        printf("Insira o Estado: \n"); //coletando os dados da carta do usuário
        scanf("%s", &estado2);

        printf("Insira a cidade: \n");
        scanf("%s", &cidade2);

        printf("Insira a população: \n");
        scanf("%d", &populacao2);

        printf("Insira a área: \n");
        scanf("%f", &area2);

        printf("Insira o PIB: \n");
        scanf("%f", &pib2);

        printf("Insira o número de pontos turísticos: \n");
        scanf("%d", &pontos_turisticos2);



        printf("\nDados da Carta:%s \n", id2); //mostrando ao usuário os dados cadastrados
        printf("Estado: %s \n", estado2);
        printf("Cidade: %s \n", cidade2);
        printf("População: %d pessoas\n", populacao2);
        printf("Área: %.3f km²\n", area2);
        printf("PIB: R$ %.3f\n", pib2);
        printf("Número de Pontos Turísticos: %d \n", pontos_turisticos2);

        densidade_populacional2 = populacao2 / area2; // calculando a densidade populacional e exibindo
        printf("Densidade Populacional: %.1f hab/km²\n", densidade_populacional2);

        pib_per_capta2 = pib2 / populacao2; // calculando o pib per capta e exibindo
        printf("PIB per capta: R$ %.2f \n", pib_per_capta2);

    // Comparação de Cartas:
    // O jogador escolhe o atributo de comparação:

    printf("Escolha o atributo de compração entre as cartas:\n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Número de pontos turísticos.\n");
    printf("5. Densidade Populacional.\n");
    printf("6. PIB per capta.\n");
    scanf("%d", &escolhaAtributo);

    switch (escolhaAtributo)
    {
        case 1:
        if (populacao2 > populacao)
        {
        printf("A cidade %s ganhou esta batalha, pois tem a maior população.\n", cidade2);
        }
        else if (populacao2 < populacao){
        printf("A cidade %s ganhou esta batalha, pois tem a maior população.\n", cidade);
        }else
        {
        printf("Esta batalha empatou. As cidades possuem o mesmo número de habitantes.\n");
        }

        break;

        case 2:
        if (area2 > area)
        {
        printf("A cidade %s ganhou esta batalha, pois tem a maior área.\n", cidade2);
        } else if (area2 < area)
        {
        printf("A cidade %s ganhou esta batalha, pois tem a maior área.\n", cidade);
        } else
        {
        printf("Esta batalha empatou. As cidades %s e %s possuem a mesma área.\n", cidade2, cidade);
        }

        break;

        case 3:
        if (pib2 > pib)
        {
        printf("A cidade %s ganhou esta batalha, pois tem o maior PIB.\n", cidade2);
        } else if (pib2 < pib)
        {
        printf("A cidade %s ganhou esta batalha, pois tem o maior PIB.\n", cidade);
        } else
        {
        printf("Esta batalha empatou. As cidades %s e %s possuem o mesmo PIB.\n", cidade2, cidade);
        }

        break;

        case 4:
        if (pontos_turisticos2 > pontos_turisticos)
        {
        printf("A cidade %s ganhou esta batalha, pois tem o maior número de pontos turísticos.\n", cidade2);
        } else if (pontos_turisticos2 < pontos_turisticos)
        {
        printf("A cidade %s ganhou esta batalha, pois tem o maior número de pontos turísticos.\n", cidade);
        } else
        {
        printf("Esta batalha empatou. As cidades %s e %s possuem o mesmo número de pontos turísticos.\n", cidade2, cidade);
        }

        break;

        case 5:
        if (densidade_populacional2 < densidade_populacional)
        {
        printf("A cidade %s ganhou esta batalha, pois tem a menor densidade populacional.\n", cidade2);
        } else if (densidade_populacional2 > densidade_populacional)
        {
        printf("A cidade %s ganhou esta batalha, pois tem a menor densidade populacional.\n", cidade);
        } else
        {
        printf("Esta batalha empatou. As cidades %s e %s possuem a mesma densidade populacional.\n", cidade2, cidade);
        }

        break;
        
        case 6:
        if (pib_per_capta2 > pib_per_capta)
        {
        printf("A cidade %s ganhou esta batalha, pois tem o maior pib per capta.\n", cidade2);
        } else if (pib_per_capta2 < pib_per_capta)
        {
        printf("A cidade %s ganhou esta batalha, pois tem o maior pib per capta.\n", cidade);
        } else
        {
        printf("Esta batalha empatou. As cidades %s e %s possuem o mesmo pib per capta.\n", cidade2, cidade);
        }

        break;

        default:
        printf("Atributo de comparação escolhido INVÁLIDO.\n");      



    }
    return 0;

    }