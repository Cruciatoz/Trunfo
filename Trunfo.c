#include <stdio.h>

int main(){
    char estado_1[20], Estado_2[50];
    int codigo_da_carta_1,codigo_da_carta_2;
    char nome_da_cidade_1[50], nome_da_cidade_2[50];
    int populacao_1, populacao_2;
    float area_em_km²_1, area_em_km²_2;
    float Pib_1, Pib_2;
    int pontos_turisticos_1, pontos_turisticos_2;


    // Solicitando as informações das cartas do usuario.

    printf("\t \t \t \t \t \t------- SUPER TRUNFO ------- \n"); // Titulo do começo.
    printf ("\n ---Carta 1---: \n");

    printf ("Estado:    ***Atencao: Digite o Estado sem acento e sem espaços, substituindo o espaco por _ ***\n");
    scanf ("%s", &estado_1);

    printf("Codigo da carta: \n");
    scanf("%d", &codigo_da_carta_1);

    printf("Nome da cidade:   ***Atencao: Digite a Cidade sem acento e sem espaços, substituindo o espaco por _ *** \n");
    scanf("%s", &nome_da_cidade_1);

    printf("Populacao: \n");
    scanf("%d", &populacao_1);

    printf("Area em km²: \n");
    scanf("%f", &area_em_km²_1);

    printf("Pib: \n");
    scanf("%f", &Pib_1);

    printf("Pontos turisticos: \n");
    scanf("%d", &pontos_turisticos_1); 


    printf ("\n --- Carta 2 ---: \n");

    printf ("Estado:  ***Atencao: Digite o Estado sem acento e sem espaços, substituindo o espaco por _ ***\n");
    scanf ("%s", &Estado_2);

    printf("Codigo da carta: \n");
    scanf("%d", &codigo_da_carta_2);

    printf("Nome da cidade:  ***Atencao: Digite a Cidade sem acento e sem espaços, substituindo o espaco por _ ***\n");
    scanf("%s", &nome_da_cidade_2);

    printf("Populacao: \n");
    scanf("%d", &populacao_2);

    printf("Area em km²: \n");
    scanf("%f", &area_em_km²_2);

    printf("Pib: \n");
    scanf("%f", &Pib_2);

    printf("Pontos turisticos: \n");
    scanf("%d", &pontos_turisticos_2);

    // Exibir as informações digitadas

    printf("\n === INFORMAÇÔES DAS CARTAS ===");

    printf("\n --- Carta 1 ---: \n");
    printf("Estado: %s\n", estado_1);
    printf("Codigo da carta: %d\n", codigo_da_carta_1);
    printf("Nome da cidade: %s\n", nome_da_cidade_1);
    printf("Populacao: %d\n", populacao_1);
    printf("Pib: %d\n", Pib_1);
    printf("Area em Km²: %d\n", area_em_km²_1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos_1);

    printf("\n --- Carta 2 ---: \n");
    printf("Estado: %s\n", Estado_2);
    printf("Codigo da carta: %d\n", codigo_da_carta_2);
    printf("Nome da cidade: %s\n", nome_da_cidade_2);
    printf("Populacao: %d\n", populacao_2);
    printf("Pib: %d\n", Pib_2);
    printf("Area em Km²: %d\n", area_em_km²_2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos_2);

    return 0;
}