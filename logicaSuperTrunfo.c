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
        int escolhaAtributo, escolhaAtributo2, resultado1, resultado2, resultadoJogo;

        printf("\nInsira o ID da carta 02: \n"); //coletando os dados da carta do usuário
        scanf("%s", &id2);

        printf("Insira o Estado: \n");
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
    // O jogador escolhe os dois atributos de comparação:

    printf("\nEscolha o primeiro atributo de compração entre as cartas:\n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Número de pontos turísticos.\n");
    printf("5. Densidade Populacional.\n");
    printf("6. PIB per capta.\n");
    scanf("%d", &escolhaAtributo);

    printf("Escolha o segundo atributo de compração entre as cartas:\n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Número de pontos turísticos.\n");
    printf("5. Densidade Populacional.\n");
    printf("6. PIB per capta.\n");
    scanf("%d", &escolhaAtributo2);

    // Exibindo mensagem de erro caso os atributos escolhidos forem iguais.

    if (escolhaAtributo == escolhaAtributo2)
    {
        printf("Os atributos não podem ser os mesmos.\n");
    } else {

    /*Desenvovendo a lógica do jogo:
    A lógica foi desenvolvida de modo que será acrescentado o valor +1 se a primeira carta ganhar
    e diminuindo - 1 se a segunda carta ganhar em cada batalha. No caso de empate, não haverá acréscimo 
    ou decrécimo na batalha. Ao final, se o resultado da soma das duas batalhas forem > 0, significa que a primeira
    carta ganhou, < 0 que a segunda carta ganhou, ou 0 será empate.*/

        switch (escolhaAtributo)
        {
            case 1:
            if (populacao != populacao2) // Se os dados forem iguais, obviamente será empate.
            {
                resultado1 = populacao > populacao2 ? 1 : -1;
            } else {
                resultado1 = 0;
            }

            if (resultado1 > 0){
                printf("A cidade %s ganhou no atributo população. \n", cidade);
            } else if (resultado1 < 0){
                printf("A cidade %s ganhou no atributo população. \n", cidade2);
            } else {
                printf("As cidade %s e %s empataram no atributo população.", cidade, cidade2);
            }
            break;

            case 2:
            if (area != area2) // Se os dados forem iguais, obviamente será empate.
            {
                resultado1 = area > area2 ? 1 : -1;
            } else {
                resultado1 = 0;
            }

            if (resultado1 > 0){
                printf("A cidade %s ganhou no atributo área. \n", cidade);
            } else if (resultado1 < 0){
                printf("A cidade %s ganhou no atributo área. \n", cidade2);
            } else {
                printf("As cidade %s e %s empataram no atributo área.", cidade, cidade2);
            }
            break;

            case 3:
            if (pib != pib2)
            {
                resultado1 = pib > pib2 ? 1 : -1;
            } else {
                resultado1 = 0;
            }

            if (resultado1 > 0){
                printf("A cidade %s ganhou no atributo PIB. \n", cidade);
            } else if (resultado1 < 0){
                printf("A cidade %s ganhou no atributo PIB. \n", cidade2);
            } else {
                printf("As cidade %s e %s empataram no atributo PIB.", cidade, cidade2);
            }
            break;

            case 4:
            if (pontos_turisticos != pontos_turisticos2)
            {
                resultado1 = pontos_turisticos > pontos_turisticos2 ? 1 : -1;
            } else {
                resultado1 = 0;
            }

            if (resultado1 > 0){
                printf("A cidade %s ganhou no atributo de número de pontos turísticos. \n", cidade);
            } else if (resultado1 < 0){
                printf("A cidade %s ganhou no atributo de número de pontos turísticos. \n", cidade2);
            } else {
                printf("As cidade %s e %s empataram no atributo de número de pontos turísticos.", cidade, cidade2);
            }
            break;

            case 5:
            if (densidade_populacional != densidade_populacional2)
            {
                resultado1 = densidade_populacional2 > densidade_populacional ? 1 : -1;
            } else {
                resultado1 = 0;
            }

            if (resultado1 > 0){
                printf("A cidade %s ganhou no atributo densidade populacional. \n", cidade);
            } else if (resultado1 < 0){
                printf("A cidade %s ganhou no atributo densidade populacional. \n", cidade2);
            } else {
                printf("As cidade %s e %s empataram no atributo densidade populacional.", cidade, cidade2);
            }
            break;
            
            case 6:
            if (pib_per_capta != pib_per_capta2)
            {
                resultado1 = pib_per_capta > pib_per_capta2 ? 1 : -1;
            } else {
                resultado1 = 0;
            }

            if (resultado1 > 0){
                printf("A cidade %s ganhou no atributo PIB per capta. \n", cidade);
            } else if (resultado1 < 0){
                printf("A cidade %s ganhou no atributo PIB per capta. \n", cidade2);
            } else {
                printf("As cidade %s e %s empataram no atributo PIB per capta.", cidade, cidade2);
            }
            break;

            default:
            printf("Atributo de comparação escolhido INVÁLIDO.\n");
        }
            

        switch (escolhaAtributo2)
        {
            case 1:
            if (populacao != populacao2) // Se os dados forem iguais, obviamente será empate.
            {
                resultado2 = populacao > populacao2 ? 1 : -1;
            } else {
                resultado2 = 0;
            }

            if (resultado2 > 0){
                printf("A cidade %s ganhou no atributo população. \n", cidade);
            } else if (resultado2 < 0){
                printf("A cidade %s ganhou no atributo população. \n", cidade2);
            } else {
                printf("As cidade %s e %s empataram no atributo população.", cidade, cidade2);
            }
            break;

            case 2:
            if (area != area2) // Se os dados forem iguais, obviamente será empate.
            {
                resultado2 = area > area2 ? 1 : -1;
            } else {
                resultado2 = 0;
            }

            if (resultado2 > 0){
                printf("A cidade %s ganhou no atributo área. \n", cidade);
            } else if (resultado2 < 0){
                printf("A cidade %s ganhou no atributo área. \n", cidade2);
            } else {
                printf("As cidade %s e %s empataram no atributo área.", cidade, cidade2);
            }
            break;

            case 3:
            if (pib != pib2)
            {
                resultado2 = pib > pib2 ? 1 : -1;
            } else {
                resultado2 = 0;
            }

            if (resultado2 > 0){
                printf("A cidade %s ganhou no atributo PIB. \n", cidade);
            } else if (resultado2 < 0){
                printf("A cidade %s ganhou no atributo PIB. \n", cidade2);
            } else {
                printf("As cidade %s e %s empataram no atributo PIB.", cidade, cidade2);
            }
            break;

            case 4:
            if (pontos_turisticos != pontos_turisticos2)
            {
                resultado2 = pontos_turisticos > pontos_turisticos2 ? 1 : -1;
            } else {
                resultado2 = 0;
            }

            if (resultado2 > 0){
                printf("A cidade %s ganhou no atributo de número de pontos turísticos. \n", cidade);
            } else if (resultado2 < 0){
                printf("A cidade %s ganhou no atributo de número de pontos turísticos. \n", cidade2);
            } else {
                printf("As cidade %s e %s empataram no atributo de número de pontos turísticos.", cidade, cidade2);
            }
            break;

            case 5:
            if (densidade_populacional != densidade_populacional2)
            {
                resultado2 = densidade_populacional2 > densidade_populacional ? 1 : -1;
            } else {
                resultado2 = 0;
            }

            if (resultado2 > 0){
                printf("A cidade %s ganhou no atributo densidade populacional. \n", cidade);
            } else if (resultado2 < 0){
                printf("A cidade %s ganhou no atributo densidade populacional. \n", cidade2);
            } else {
                printf("As cidade %s e %s empataram no atributo densidade populacional.", cidade, cidade2);
            }
            break;
            
            case 6:
            if (pib_per_capta != pib_per_capta2)
            {
                resultado2 = pib_per_capta > pib_per_capta2 ? 1 : -1;
            } else {
                resultado2 = 0;
            }

            if (resultado2 > 0){
                printf("A cidade %s ganhou no atributo PIB per capta. \n", cidade);
            } else if (resultado2 < 0){
                printf("A cidade %s ganhou no atributo PIB per capta. \n", cidade2);
            } else {
                printf("As cidade %s e %s empataram no atributo PIB per capta.", cidade, cidade2);
            }
            break;

            default:
            printf("Atributo de comparação escolhido INVÁLIDO.\n");

        }
    }

        // Mostrando para o usuário o resultado do jogo

    resultadoJogo = resultado1 + resultado2;

    if (resultadoJogo > 0){
        printf("\nA cidade %s ganhou.\n", cidade);
    } else if (resultadoJogo < 0){
        printf("\nA cidade %s ganhou.\n", cidade2);
    } else {
        printf("\nAs cidades empataram nos atributos escolhidos.");
    }
    
    return 0;
}