#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
     char Estado, Estado2;
     char Codigo[20], Codigo2[20];
     char Nome[20],Nome2[20];
     int população, população2;
     float area, area2;
     float pib, pib2;
     int Pontos, Pontos2;
     float divisao, divisao2 , divisao3 , divisao4;

     divisao= população / area;
     divisao2= pib / população;
     divisao3=população2 / area2;
     divisao4= pib2 / população2;



    
    

     printf("Digite o Estado:", Estado);
     scanf("%c", &Estado);
     printf("Digite o Codigo do Estado: %c",Codigo);
     scanf("%s", &Codigo);
     printf("Digite o nome do Estado:",Nome);
     scanf("%s", &Nome[20]);
     printf("Digite a populacao da estado:", população);
     scanf("%d", &população);
     printf("Digite a Area da Cidade:", area);
     scanf(" %f", &area);
     printf("Digite o pib da estado:", pib);
     scanf(" %f", &pib);
     printf("Digite quantos pontos tem a estado:", Pontos);
     scanf(" %d/n", &Pontos);


    printf("***************Agora vamos a Segunda cidade***************\n");
     
     printf("Digite o Estado2:",Estado2);
    scanf(" %c", &Estado2);
     printf("Digite o Codigo do Estado2:",Codigo2);
     scanf("%s", &Codigo2);
     printf("Digite o nome do Estado:",Nome2);
     scanf("%s", &Nome2[20]);
     printf("Digite a populacao da estado:", população2);
     scanf("%d", &população2);
     printf("Digite a Area da Cidade:",area2);
     scanf("%f", &area2);
     printf("Digite o pib da estado:",pib2);
    scanf("%f", &pib2);
     printf("Digite quantos pontos tem a estado:",Pontos2);
     scanf("%d", &Pontos2);

     printf("A densidade populacional da cidade 1 e :%.2f", divisao);
     printf("A densidade populacional da cidade 2 e :%.2f", divisao3);


     printf("Agora vamos mostrar o PIB per capita de cada Cidade:/n");

     printf("O PIB da cidade 1 e:%.2f", divisao2);
     printf("o PiB da cidade 2 e:%.2f", divisao4);







    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    
return 0;
}

