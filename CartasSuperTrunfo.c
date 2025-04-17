#include <stdio.h>

int main (){

    printf("Cartas 1 e 2 do Super Trunfo");

    //declaracao das variaveis
    int NumerodaCarta;
    char Estado[1];
    char NomedaCidade[23];
    char CodigodaCarta[3];
    int Populacao;
    float Area;
    float PIB;
    int NumerodePontosTuristicos;

    //Solicitacoes no monitor e saida de dados
    
    printf("Digite o numero da carta: ");
    scanf("%d", &NumerodaCarta);

    printf("Digite o nome do Estado: ");
    scanf("%s",&Estado);

    printf("Digite o nome da cidade: ");
    scanf("%s", &NomedaCidade);

    printf("Digite o codigo da carta: ");
    scanf("%s", &CodigodaCarta);

    printf("Digite a populacao: ");
    scanf("%d", &Populacao);

    printf("Digite a area da cidade em Km²: ");
    scanf("%f", &Area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &NumerodePontosTuristicos);

    printf("O numero da carta eh: %d \n", NumerodaCarta);
    printf("O nome do Estado eh: %s \n", Estado);
    printf("O nome da cidade eh: %s \n", NomedaCidade);
    printf("O codigo da carta eh: %s \n", CodigodaCarta);
    printf("A populacao eh: %d \n", Populacao);
    printf("A area eh de: %f \n", Area);
    printf("O PIB da cidade eh de: %f \n", PIB);
    printf("O numero de pontos turisticos eh: %d \n", NumerodePontosTuristicos);
    


    return 0;
}