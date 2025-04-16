#include <stdio.h>

int main (){

    printf("Cartas 1 e 2 do Super Trunfo");

    //declaracao de variaveis da carta1
    char Estado1[1];
    char NomedaCidade1[23];
    char CodigodaCarta1[3];
    int Populacao1;
    float Area1;
    float PIB1;
    int NumerodePontosTuristicos1;

    //Solicitacoes no monitor e saida de dados
    
    printf("Digite o nome do Estado 1: ");
    scanf("%s",&Estado1);

    printf("Digite o nome da cidade 1: ");
    scanf("%s", &NomedaCidade1);

    printf("Digite o codigo da carta: ");
    scanf("%s", &CodigodaCarta1);

    printf("Digite a populacao: ");
    scanf("%d", &Populacao1);

    printf("Digite a area da cidade em Km²: ");
    scanf("%f", &Area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &NumerodePontosTuristicos1);

    return 0;
}