#include <stdio.h>
#include <math.h>  // Para usar a função fabs()
#include <string.h>
#include <stdlib.h>

// Função para remover vírgulas
void removerVirgulas(char* str) {
    int i, j = 0;
    int len = strlen(str);

    // Remover vírgulas da string
    for (i = 0; i < len; i++) {
        if (str[i] != ',') {  // Se não for vírgula, copia para o novo local
            str[j++] = str[i];
        }
    }
    str[j] = '\0';  // Garantir que a string esteja terminada corretamente
}

int main() {
    char estado1[100], estado2[100], pais1[100], pais2[100];
    char opcao1;
    float populacao1, populacao2; 
    float area1, area2, densidade1, densidade2, resultadoDensidade1;
    float pib1, pib2, densidade3, densidade4, resultadoDensidade2;
    int pontoTuristicos1, pontoTuristicos2, opcao2, opcao3;
    int opcao4, opcao5;

    // Menu do Jogo - Opção 1
    printf("Bem Vindo ao Jogo Super Trunfo Países.\n");
    printf("Digite uma opção: \n");
    printf("A. Iniciar Jogo \n");
    printf("B. Regras do jogo\n");
    printf("C. Sair \n");
    scanf("%c", &opcao1);
    getchar();  // Para capturar o caractere de nova linha

    switch (opcao1) {
        case 'A':
        case 'a':
            // Início do jogo
            // Nome País1
            printf("Digite o Nome do País: \n");
            fgets(pais1, sizeof(pais1), stdin);
            pais1[strcspn(pais1, "\n")] = 0;

            // Nome estado1
            printf("Digite o nome do Primeiro Estado: \n");
            fgets(estado1, sizeof(estado1), stdin);
            estado1[strcspn(estado1, "\n")] = 0;

            // Escolha do atributo  Opção 2
            printf("A- Escolha Um Atributo: \n");
            printf("1. População \n");
            printf("2. Área \n");
            printf("3. PIB \n");
            printf("4. Pontos Turísticos \n");
            scanf("%d", &opcao2);
            while (getchar() != '\n');

            // Definir o primeiro atributo escolhido
            float atributo1_value = 0;
            char atributo1_nome[50];

            switch (opcao2) {
                case 1:  // População1
                    printf("Digite a População do Primeiro Estado: \n");
                    scanf("%f", &populacao1);
                    while (getchar() != '\n');  
                    strcpy(atributo1_nome, "População");
                    atributo1_value = populacao1;
                    densidade1 = populacao1;
                    resultadoDensidade1 = densidade1 / densidade2;
                    break;
                case 2:  // Área1
                    printf("Digite a área deste estado: \n");
                    scanf("%f", &area1);
                    while (getchar() != '\n'); 
                    strcpy(atributo1_nome, "Área");
                    atributo1_value = area1;
                    densidade2 = area1;
                    resultadoDensidade1 = densidade1 / densidade2;
                    break;
                case 3:  // PIB1
                    printf("Digite o PIB deste Estado: \n");
                    scanf("%f", &pib1);
                    while (getchar() != '\n'); 
                    strcpy(atributo1_nome, "PIB");
                    atributo1_value = pib1;
                    break;
                case 4:  // Pontos Turísticos1
                    printf("Digite o número de Pontos Turísticos: \n");
                    scanf("%d", &pontoTuristicos1);
                    while (getchar() != '\n');  
                    strcpy(atributo1_nome, "Pontos Turísticos");
                    atributo1_value = pontoTuristicos1;
                    break;
                default:
                    printf("Opção Inválida\n");
            }

            // Escolha do segundo atributo  Opção 3
            do {
                printf("B- Escolha outro Atributo: \n");
                printf("1. População \n");
                printf("2. Área \n");
                printf("3. PIB \n");
                printf("4. Pontos Turísticos \n");
                scanf("%d", &opcao3);
                if (opcao2 == opcao3) {
                    printf("Você não pode repetir atributos. \n");
                }
            } while (opcao2 == opcao3);

            // Definir o segundo atributo escolhido
            float atributo2_value = 0;
            char atributo2_nome[50];

            switch (opcao3) {
                case 1:  // População
                    printf("Digite a População do Primeiro Estado: \n");
                    scanf("%f", &populacao1);
                    while (getchar() != '\n');
                    strcpy(atributo2_nome, "População");
                    atributo2_value = populacao1;
                    densidade1 = populacao1;
                    resultadoDensidade1 = densidade1 / densidade2;
                    break;
                case 2:  // Área
                    printf("Digite a área deste estado: \n");
                    scanf("%f", &area1);
                    while (getchar() != '\n'); 
                    strcpy(atributo2_nome, "Área");
                    atributo2_value = area1;
                    densidade2 = area1;
                    resultadoDensidade1 = densidade1 / densidade2;
                    break;
                case 3:  // PIB
                    printf("Digite o PIB deste Estado: \n");
                    scanf("%f", &pib1);
                    while (getchar() != '\n');  
                    strcpy(atributo2_nome, "PIB");
                    atributo2_value = pib1;
                    break;
                case 4:  // Pontos Turísticos
                    printf("Digite o número de Pontos Turísticos: \n");
                    scanf("%d", &pontoTuristicos1);
                    while (getchar() != '\n');  
                    strcpy(atributo2_nome, "Pontos Turísticos");
                    atributo2_value = pontoTuristicos1;
                    break;
                default:
                    printf("Opção Inválida\n");
            }

            // Opção 4 para o Segundo País
            printf("Digite o Nome do País: \n");
            fgets(pais2, sizeof(pais2), stdin);
            pais2[strcspn(pais2, "\n")] = 0;

            printf("Digite o nome do Segundo Estado: \n");
            fgets(estado2, sizeof(estado2), stdin);
            estado2[strcspn(estado2, "\n")] = 0;

            // Escolha Atributo Opção 4
            printf("C- Escolha Um Atributo: \n");
            printf("1. População \n");
            printf("2. Área \n");
            printf("3. PIB \n");
            printf("4. Pontos Turísticos \n");
            scanf("%d", &opcao4);

            // Resultados da opção 4
            float atributo1_2_value = 0;
            float atributo2_2_value = 0;

            switch (opcao4) {
                case 1:
                    printf("Digite a População do Segundo Estado: \n");
                    scanf("%f", &populacao2);
                    while (getchar() != '\n');  
                    atributo1_2_value = populacao2;
                    break;
                case 2:
                    printf("Digite a área deste estado: \n");
                    scanf("%f", &area2);
                    while (getchar() != '\n');  
                    atributo1_2_value = area2;
                    break;
                case 3:
                    printf("Digite o PIB deste Estado: \n");
                    scanf("%f", &pib2);
                    while (getchar() != '\n');  
                    atributo1_2_value = pib2;
                    break;
                case 4:
                    printf("Digite o número de Pontos Turísticos: \n");
                    scanf("%d", &pontoTuristicos2);
                    while (getchar() != '\n');  
                    atributo1_2_value = pontoTuristicos2;
                    break;
                default:
                    printf("Opção Inválida\n");
            }

            // Finalize o segundo atributo escolhido
            // Opcao 5 para o segundo Atributo do País 2
            printf("Escolha o segundo atributo do Segundo País:\n");
            // ... repetindo o mesmo processo como acima

            // Aqui, pode incluir os testes para quem venceu comparando os valores, 
            // e mostrar os vencedores dos dois atributos.

            break;
        case 'B':
        case 'b':
            printf("Distribuição: As cartas são distribuídas igualmente entre os jogadores. \n");
            break;

        case 'C':
        case 'c':
            printf("Saindo...\n");
            break;
    }

    return 0;
}
