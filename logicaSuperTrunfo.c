#include <stdio.h>

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
    int resp;
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

    printf("Insira o ID da carta: \n"); //coletando os dados da carta do usuário
        scanf("%s", &id);

        printf("Insira o Estado: \n"); //coletando os dados da carta do usuário
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
        int resp2;
        float densidade_populacional2;
        float pib_per_capta2;
        char id2[3];

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
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    if (densidade_populacional2 < densidade_populacional){
            printf("A carta A02 ganhou esta batalha.");
    }else{
        if (densidade_populacional<densidade_populacional2){
        printf("A carta A01 ganhou esta batalha.");
        
        }else{
        printf("Esta batalha empatou.");
        }
    }
    return 0;
}
