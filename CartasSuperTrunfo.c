
#include <stdio.h>
int main (){

    printf("Cartas 1 e 2 do Super Trunfo \n");

    printf("Carta 1 \n");

    //declaracao das variaveis
    int NumerodaCarta1, NumerodaCarta2;
    char Estado1[15], Estado2[15];
    char NomedaCidade1[23], NomedaCidade2[23];
    char CodigodaCarta1[3], CodigodaCarta2[3];
    int Populacao1, Populacao2;
    float AreadaCidade1, AreadaCidade2;
    float PIB1, PIB2;
    int NumerodePontosTuristicos1, NumerodePontosTuristicos2;
    float DensidadePopulacional1, DensidadePopulacional2;
    float PIBperCapita1, PIBperCapita2;
    float DenPopInvertida1, DenPopInvertida2;
    float SuperPoder1, SuperPoder2;
    

    //Solicitacoes no monitor e saida de dados
    
    printf("Digite o numero da carta: ");
    scanf("%d", &NumerodaCarta1);

    printf("Digite o nome do Estado: ");
    scanf("%s", &Estado1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &NomedaCidade1);

    printf("Digite o codigo da carta: ");
    scanf("%s", &CodigodaCarta1);

    printf("Digite a populacao: ");
    scanf("%d", &Populacao1);

    printf("Digite a area da cidade 1 em Km²: ");
    scanf("%f", &AreadaCidade1);

    printf("Digite o PIB da cidade 1: ");
    scanf("%f", &PIB1);

    printf("Digite o numero de pontos turisticos da Carta 1: ");
    scanf("%d", &NumerodePontosTuristicos1);

    DensidadePopulacional1 = Populacao1 / AreadaCidade1;

    PIBperCapita1 = PIB1 / Populacao1;

    DenPopInvertida1 = 1 / DensidadePopulacional1;

    SuperPoder1 = Populacao1 + AreadaCidade1 + PIB1 + PIBperCapita1 + DenPopInvertida1 + NumerodePontosTuristicos1;

    printf("O numero da carta 1 eh: %d \n", NumerodaCarta1);
    printf("O nome do Estado 1 eh: %s \n", Estado1);
    printf("O nome da cidade 1 eh: %s \n", NomedaCidade1);
    printf("O codigo da carta 1 eh: %s \n", CodigodaCarta1);
    printf("A populacao eh: %d \n", Populacao1);
    printf("A area da Cidade 1 eh de: %.2f \n", AreadaCidade1);
    printf("O PIB da cidade 1 eh: R$  %.2f \n", PIB1);
    printf("O numero de pontos turisticos 1 eh: %d \n", NumerodePontosTuristicos1);
    printf("A Densidade Populacional 1 eh: %.2f \n", DensidadePopulacional1);
    printf("O PIB per Capita 1 eh: %.2f \n", PIBperCapita1);
    printf("A Densidade Populacional Invertida 1 eh: %.12f \n", DenPopInvertida1);
    printf("O valor de Super Poder 1 eh de: %.2f \n", SuperPoder1);

    printf("Carta 2 \n");
   
    printf("Digite o numero da carta: ");
    scanf("%d", &NumerodaCarta2);

    printf("Digite o nome do Estado: ");
    scanf("%s",&Estado2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &NomedaCidade2);

    printf("Digite o codigo da carta: ");
    scanf("%s", &CodigodaCarta2);

    printf("Digite a populacao: ");
    scanf("%d", &Populacao2);

    printf("Digite a area da cidade em Km²: ");
    scanf("%f", &AreadaCidade2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &NumerodePontosTuristicos2);

    DensidadePopulacional2 = Populacao2 / AreadaCidade2;

    PIBperCapita2 = PIB2 / Populacao2;

    DenPopInvertida2 = 1 / DensidadePopulacional2;

    SuperPoder2 = Populacao2 + AreadaCidade2 + PIB2 + PIBperCapita2 + DenPopInvertida2 + NumerodePontosTuristicos2;

    printf("O numero da carta eh: %d \n", NumerodaCarta2);
    printf("O nome do Estado eh: %s \n", Estado2);
    printf("O nome da cidade eh: %s \n", NomedaCidade2);
    printf("O codigo da carta eh: %s \n", CodigodaCarta2);
    printf("A populacao eh: %d \n", Populacao2);
    printf("A area da cidade eh de: %f \n", AreadaCidade2);
    printf("O PIB da cidade eh de: R$ %f \n", PIB2);
    printf("O numero de pontos turisticos eh: %d \n", NumerodePontosTuristicos2);
    printf("A Densidade Populacional eh: %.2f\n", DensidadePopulacional2);
    printf("O PIB per Capita eh: %.2f\n", PIBperCapita2);
    printf("A Densidade Populacional Invertida eh: %.12f \n", DenPopInvertida2);
    printf("O valor de Super Poder eh de: %.2f \n", SuperPoder2);

    /* comparativo entre as cartas para os itens 
    populacao area PIB Pontos turisticos Densidade Populacional PIB per Capita Super Poder */

    printf("A Populacao da Carta 1 (%d) eh maior do que a da Carta 2 (%d)? %d\n", Populacao1, Populacao2, (Populacao1 > Populacao2));
    printf("A Area da Carta 1 (%f) eh maior do que a da Carta 2 (%f)? %f\n", AreadaCidade1, AreadaCidade2, (AreadaCidade1 > AreadaCidade2));
    printf("O PIB da Carta 1 (%f) eh maior do que o da Carta 2 (%f)? %f\n", PIB1, PIB2, (PIB1 > PIB2));
    printf("O Numero de Pontos Turisticos da Carta 1 (%d) eh maior do que a da Carta 2 (%d)? %d\n", NumerodePontosTuristicos1, NumerodePontosTuristicos2, (NumerodePontosTuristicos1 > NumerodePontosTuristicos2));
    printf("A Densidade Populacional da Carta 1 (%.2f) eh maior que a da Carta 2 (%.2f)? %.2f\n", DensidadePopulacional1, DensidadePopulacional2, (DensidadePopulacional1 > DensidadePopulacional2));
    printf("O PIB per Capita da Carta 1 (%.2f) eh maior do que a da Carta 2 (%.2f)? %.2f\n", PIBperCapita1, PIBperCapita2, (PIBperCapita1 > PIBperCapita2));
    printf("O Super Poder da Carta 1 (%d) eh maior do que o da Carta 2 (%d)? %d\n", SuperPoder1, SuperPoder2, (SuperPoder1 > SuperPoder2));
    
    return 0;
}