#include <stdio.h>
#include <string.h>
#include <math.h> // Para usar a função fabs()

// Definindo uma margem de erro para comparação de double
#define EPSILON 0.000001

// Função de comparação com tolerância para double
int comparar_populacao(double populacao1, double populacao2) {
    if (fabs(populacao1 - populacao2) < EPSILON) return 0; // Empate (dentro da margem de erro)
    if (populacao1 > populacao2) return 1;
    return 2;
}

int comparar_area(double area1, double area2) {
    if (fabs(area1 - area2) < EPSILON) return 0; // Empate
    if (area1 > area2) return 1;
    return 2;
}

int comparar_pib(double pib1, double pib2) {
    if (fabs(pib1 - pib2) < EPSILON) return 0; // Empate
    if (pib1 > pib2) return 1;
    return 2;
}

int comparar_npt(int npt1, int npt2) {
    if (npt1 == npt2) return 0; // Empate para inteiros
    if (npt1 > npt2) return 1;
    return 2;
}

int comparar_populacao1(double populacao3, double populacao4) {
    if (fabs(populacao3 - populacao4) < EPSILON) return 0; // Empate
    if (populacao3 > populacao4) return 3;
    return 4;
}

int comparar_area1(double area3, double area4) {
    if (fabs(area3 - area4) < EPSILON) return 0; // Empate
    if (area3 > area4) return 3;
    return 4;
}

int comparar_pib1(double pib3, double pib4) {
    if (fabs(pib3 - pib4) < EPSILON) return 0; // Empate
    if (pib3 > pib4) return 3;
    return 4;
}

int comparar_npt1(int npt3, int npt4) {
    if (npt3 == npt4) return 0; // Empate para inteiros
    if (npt3 > npt4) return 3;
    return 4;
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

    // Segundo Estado 2 Variáveis
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

    // Terceiro Estado 3 Variáveis
    char estado3[50];
    double populacao3, area3, pib3, dp3, pib_cap3;
    int npt3;

    // Perguntas 3
    // Estado 3
    printf("11-Qual é o Nome do Terceiro Estado:\n");
    fgets(estado3, sizeof(estado3), stdin);
    estado3[strcspn(estado3, "\n")] = 0;

    // População 3
    printf("12-Qual é a População da Terceira Cidade: \n");
    scanf("%lf", &populacao3);
    while (getchar() != '\n');

    // Área 3
    printf("13-Qual é a Área dessa Cidade: \n");
    scanf("%lf", &area3);
    while (getchar() != '\n');

    // PIB 3
    printf("14-Qual é o PIB desta Cidade:\n");
    scanf("%lf", &pib3);
    while (getchar() != '\n');

    // Número de Pontos Turísticos 3
    printf("15-Número de Pontos Turísticos da Cidade:\n");
    scanf("%d", &npt3);
    while (getchar() != '\n');

    // Cálculos
    dp3 = populacao3 / area3;  
    pib_cap3 = pib3 / populacao3;  

    // Quarto Estado 4 Variáveis
    char estado4[50];
    double populacao4, area4, pib4, dp4, pib_cap4;
    int npt4;

    // Perguntas 4
    // Estado 4
    printf("16-Qual é o Nome do Quarto Estado:\n");
    fgets(estado4, sizeof(estado4), stdin);
    estado4[strcspn(estado4, "\n")] = 0;

    // População 4
    printf("17-Qual é a População da Quarta Cidade:\n");
    scanf("%lf", &populacao4);
    while (getchar() != '\n');

    // Área 4
    printf("18-Qual é a Área dessa Cidade:\n");
    scanf("%lf", &area4);
    while (getchar() != '\n');

    // PIB 4
    printf("19-Qual é o PIB desta Cidade:\n");
    scanf("%lf", &pib4);
    while (getchar() != '\n');

    // Número de Pontos Turísticos 4
    printf("20-Número de Pontos Turísticos da Cidade:\n");
    scanf("%d", &npt4);
    while (getchar() != '\n');

    // Cálculos
    dp4 = populacao4 / area4;  
    pib_cap4 = pib4 / populacao4;  


    // Sistema do Vencedor Batalha 1
    int vencedor_populacao = comparar_populacao(populacao1, populacao2); 
    if (vencedor_populacao == 1) {
        printf("Vencedor População: %s\n", estado1);
        printf("-----------------\n");
    } else if (vencedor_populacao == 2) {
        printf("Vencedor População: %s\n", estado2);
        printf("-----------------\n");
    } else {
        printf("Empate\n");
    }

    int vencedor_area = comparar_area(area1, area2);
    if (vencedor_area == 1) {
        printf("Vencedor Área: %s\n", estado1);
        printf("-----------------\n");
    } else if (vencedor_area == 2) {
        printf("Vencedor Área: %s\n", estado2);
        printf("-----------------\n");
    } else {
        printf("Empate\n");
    }

    int vencedor_pib = comparar_pib(pib1, pib2);
    if (vencedor_pib == 1) {
        printf("Vencedor PIB: %s\n", estado1);
        printf("-----------------\n");
    } else if (vencedor_pib == 2) {
        printf("Vencedor PIB: %s\n", estado2);
        printf("-----------------\n");
    } else {
        printf("Empate\n");
    }

    int vencedor_npt = comparar_npt(npt1, npt2);
    if (vencedor_npt == 1) {
        printf("Vencedor Pontos Turísticos: %s\n", estado1);
        printf("-----------------\n");
    } else if (vencedor_npt == 2) {
        printf("Vencedor Pontos Turísticos: %s\n", estado2);
    } else {
        printf("Empate\n");
    }

    // Sistema do Vencedor Batalha 2
    printf("<------- Batalha 2 ------->\n");

    int vencedor_populacao1 = comparar_populacao1(populacao3, populacao4);
    if (vencedor_populacao1 == 3) {
        printf("Vencedor População: %s\n", estado3);
        printf("-----------------\n");
    } else if (vencedor_populacao1 == 4) {
        printf("Vencedor População: %s\n", estado4);
        printf("-----------------\n");
    } else {
        printf("Empate\n");
    }

    int vencedor_area1 = comparar_area1(area3, area4);
    if (vencedor_area1 == 3) {
        printf("Vencedor Área: %s\n", estado3);
        printf("-----------------\n");
    } else if (vencedor_area1 == 4) {
        printf("Vencedor Área: %s\n", estado4);
        printf("-----------------\n");
    } else {
        printf("Empate\n");
    }

    int vencedor_pib1 = comparar_pib1(pib3, pib4);
    if (vencedor_pib1 == 3) {
        printf("Vencedor PIB: %s\n", estado3);
        printf("-----------------\n");
    } else if (vencedor_pib1 == 4) {
        printf("Vencedor PIB: %s\n", estado4);
        printf("-----------------\n");
    } else {
        printf("Empate\n");
    }

    int vencedor_npt1 = comparar_npt1(npt3, npt4);
    if (vencedor_npt1 == 3) {
        printf("Vencedor Pontos Turísticos: %s\n", estado3);
        printf("-----------------\n");
    } else if (vencedor_npt1 == 4) {
        printf("Vencedor Pontos Turísticos: %s\n", estado4);
    } else {
        printf("Empate\n");
    }

    return 0;
}

