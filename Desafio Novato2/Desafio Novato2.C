#include <stdio.h>
#include <math.h> // Para usar a função fabs()
#include <string.h>

int main() {

   
    char estado1[100], estado2[100], pais[100];
    float populaçao1, populaçao2;
    double area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;


    //Estado 1 
    
    printf("Bem Vindo ao Jogo Super Trunfo Países.\n");
    printf("Digite o Nome do País: \n");
    scanf("%s", &pais);
    fgets(pais, sizeof(pais), stdin);
    pais[strcspn(pais, "\n")] = 0;
    while ( getchar () != '\n');

    printf("Digite o nome do Primeiro Estado: \n");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = 0;
  

    printf("Digite a População do Primeiro Estado: \n");
    scanf("%f", &populaçao1);
    while ( getchar () != '\n');

    printf("Digite a área deste estado: \n");
    scanf("%f", &area1);
    while ( getchar () != '\n');

    printf("Digite o PIB deste Estado: \n");
    scanf("%f", &pib1);
    while ( getchar () != '\n');

    printf("Digite o número de Pontos Turístico deste Estado: \n");
    scanf("%d", &pontosTuristicos1);
    while ( getchar () != '\n');

    

    //Estado 2

    printf("Digite o nome do Segundo Estado: \n");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = 0;
    
//Populacao
    printf("Digite a População do Segundo Estado: \n");
    scanf("%f", &populaçao2);
    while ( getchar () != '\n');
//area
    printf("Digite a área deste estado: \n");
    scanf("%f", &area2);
    while ( getchar () != '\n');
// pib
    printf("Digite o PIB deste Estado: \n");
    scanf("%f", &pib2);
    while ( getchar () != '\n');
//pontos turísticos
    printf("Digite o número de Pontos Turístico deste Estado: \n");
    scanf("%d", &pontosTuristicos2);
    while ( getchar () != '\n');



   if (populaçao1 > populaçao2) {
    printf("%s Venceu com  Maior População .\n", estado1); 
   } else {
    printf("%s Venceu com Maior População. \n", estado2);
   } 

    printf("------------------\n");

   if ( area1 > area2) {
    printf("%s Venceu com a Maior Área. \n", estado1);
   } else  {
    printf("%s Venceu com Maior Área. \n", estado2);
   } 

   printf("------------------\n");

   if (pib1 > pib2) {
    printf("%s Venceu com Maior PIB. \n", estado1);
   } else  {
    printf("%s Venceu com Maior PIB. \n", estado2);
   }

   if (pontosTuristicos1 > pontosTuristicos2) {
    printf("%s Venceu com Maior Pontos Turísticos. \n", estado1);
   } else  {
    printf("%s Venceu com Maior Pontos Turísticos. \n", estado2);
   }
    return 0;

   
}
