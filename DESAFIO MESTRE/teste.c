#include <stdio.h>
#include <string.h>


 int comparar_populacao(double populacao1, double populacao2) {
    if (populacao1 > populacao2) return 1;
    if (populacao1 < populacao2) return 2;
    return 0;
    }

int comparar_area(double area1, double area2) {
    if (area1 > area2) return 1;
    if (area1 < area2) return 2;
    return 0;
}

int comparar_pib(double pib1, double pib2){
    if (pib1 > pib2) return 1;
    if (pib1 < pib2) return 2;
    return 0;
}
 
 int comparar_npt(int npt1, int npt2) {
    if (npt1 > npt2) return 1;
    if (npt1 < npt2) return 2;
    return 0;
 }


int main() {
    printf("Desafio Super Trunfo - Países - Cadastro de Cartas - Novato\n");

    // País
    char pais[50] = "Brasil";

    // Primeiro Estado 1 Variáveis
    char estado1[50];
    double populacao1, area1, pib1, dp1, pib_cap1;
    int npt1;

    printf("Primeiro Vamos Criar os Estados e as Cidades\n");
    printf("--------%s--------\n", pais);

    // Perguntas 1
    // Estado 1
    printf("1-Qual é o Nome do Primeiro Estado: \n");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = 0;

    // População 1
    printf("2-Qual é a População da Cidade: \n"); 
    scanf("%lf", &populacao1);
    while (getchar() != '\n');
 
    // Área 1
    printf("3-Qual é a Área dessa Cidade: \n");
    scanf("%lf", &area1);
    while (getchar() != '\n');

    // PIB 1
    printf("4-Qual é o PIB desta Cidade:\n");
    scanf("%lf", &pib1);
    while (getchar() != '\n');

    // Número de Pontos Turísticos 1
    printf("5-Número de Pontos Turísticos da Cidade:\n");
    scanf("%d", &npt1);
    while (getchar() != '\n');

    // Cálculos
    dp1 = populacao1 / area1; 
    pib_cap1 = pib1 / populacao1; 

     char estado2[50];
    double populacao2, area2, pib2, dp2, pib_cap2;
    int npt2;

    // Perguntas 2
    // Estado 2
    printf("6-Qual é o Nome do Segundo Estado:\n");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = 0;

    // População 2
    printf("7-Qual é a População da Segunda Cidade:\n");
    scanf("%lf", &populacao2);
    while (getchar() != '\n');

    // Área 2
    printf("8-Qual é a Área dessa Cidade: \n");
    scanf("%lf", &area2);
    while (getchar() != '\n');

    // PIB 2
    printf("9-Qual é o PIB desta Cidade: \n");
    scanf("%lf", &pib2);
    while (getchar() != '\n');

    // Número de Pontos Turísticos 2
    printf("10-Número de Pontos Turísticos da Cidade:\n");
    scanf("%d", &npt2);
    while (getchar() != '\n');

    // Cálculos
    dp2 = populacao2 / area2;  
    pib_cap2 = pib2 / populacao2;  


    
   int vencedor_populacao = comparar_populacao(populacao1, populacao2); 
    
    if (vencedor_populacao == 1) 
      if (vencedor_populacao == 1) {
    printf("Vencedor População: %s\n", estado1);
} else if (vencedor_populacao == 2) {
    printf("Vencedor População: %s\n", estado2);
} else {
    printf("Empate\n");
}
   
   int vencedor_area = comparar_area(area1, area2);
    if (vencedor_area == 1) {
    printf("Vencedor Área: %s\n", estado1);
} else if (vencedor_area == 2) {
    printf("Vencedor Área: %s\n", estado2);
} else {
    printf("Empate\n");
}
    
   int vencedor_pib = comparar_pib(pib1, pib2);

     if (vencedor_pib == 1) {
    printf("Vencedor PIB: %s\n", estado1);
} else if (vencedor_pib == 2) {
    printf("Vencedor PIB: %s\n", estado2);
} else {
     printf("Empate\n");
}
   int vencedor_npt = comparar_npt(npt1, npt2);
   if (vencedor_npt == 1) {
    printf("Vencedor Pontos Turísticos: %s\n", estado1);
}  else if (vencedor_npt == 2) {
    printf("Vencedor Pontos Turísticos: %s\n", estado2);
} 
   
}



