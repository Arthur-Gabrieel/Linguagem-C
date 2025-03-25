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
    //variável Paíss e Estado
    char estado1[100], estado2[100], pais1[100], pais2[100];

    //Variável opcao1 == menu do jogo e  resultados
    char opcao1, resultado1[100], resultado2[100], resultado3[100], resultado4[100], resultado5[100];

    // Variável População
    float populacao1  = -1, populacao2  = -1 , populacao3, populacao4; 

    //Variável Área
    float area1  = 0, area2  = 0, area3, area4;

    // Variável PIB
    float pib1  = 0, pib2  = 0, pib3, pib4;

    //Variável Densidades
    float densidade1  = 0, densidade2  = 0, densidade3, densidade4, resultadoDensidade1, resultadoDensidade2;
    float resultadoDensidade3, resultadoDensidade4;

    //Variável Ponto Turísticos
    int pontoTuristicos1 = 0, pontoTuristicos2 = 0;

    //Variáveis Opções
    int opcao2, opcao3, opcao4, opcao5;

    //somas
    float soma1, soma2, soma3, soma4;


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

            switch (opcao2) {
                case 1:  // População1
                    printf("Digite a População do Primeiro Estado: \n");
                    scanf("%f", &populacao1);
                    while (getchar() != '\n');
                    
                    densidade1 = populacao1;
                    resultadoDensidade1 = densidade1 / densidade2;
                    break;
                case 2:  // Área1
                    printf("Digite a área deste estado: \n");
                    scanf("%f", &area1);
                    while (getchar() != '\n'); 
                  
                    densidade2 =  area1;
                    resultadoDensidade1 = densidade1 / densidade2;
                    break;
                case 3:  // PIB1
                    printf("Digite o PIB deste Estado: \n");
                    scanf("%f", &pib1);
                    while (getchar() != '\n'); 
                    break;
                case 4:  // Pontos Turísticos1
                    printf("Digite o número de Pontos Turísticos: \n");
                    scanf("%d", &pontoTuristicos1);
                    while (getchar() != '\n');  
                    break;
                default:
                    printf("Opção Inválida\n");
            }

            // Escolha de atributo  Opção 3
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
            } while (opcao2 == opcao3); //loop

            switch (opcao3) {
                case 1:  // População
                    printf("Digite a População do Primeiro Estado: \n");
                    scanf("%f", &populacao1);
                    while (getchar() != '\n');
                    densidade1 = populacao1;
                    resultadoDensidade1 = densidade1 / densidade2;
                   
                    break;
                case 2:  // Área
                    printf("Digite a área deste estado: \n");
                    scanf("%f", &area1);
                    while (getchar() != '\n'); 
                    densidade2 =  area1;
                    resultadoDensidade1 = densidade1 / densidade2;
                    break;
                case 3:  // PIB
                    printf("Digite o PIB deste Estado: \n");
                    scanf("%f", &pib1);
                    while (getchar() != '\n');  
                    break;
                case 4:  // Pontos Turísticos
                    printf("Digite o número de Pontos Turísticos: \n");
                    scanf("%d", &pontoTuristicos1);
                    while (getchar() != '\n');
                    break;
                default:
                    printf("Opção Inválida\n");
            }

           

           
            // Opção 4
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
            switch (opcao4) {
                case 1:
                    printf("Digite a População do Segundo Estado: \n");
                    scanf("%f", &populacao2);
                    while (getchar() != '\n');  
                    densidade3 = populacao2;
                    resultadoDensidade2 = densidade3 / densidade4;
                    break;
                case 2:
                    printf("Digite a área deste estado: \n");
                    scanf("%f", &area2);
                    while (getchar() != '\n');  
                    densidade4 = area2;
                    resultadoDensidade2 = densidade3 / densidade4;
                   
                    break;
                case 3:
                    printf("Digite o PIB deste Estado: \n");
                    scanf("%f", &pib2);
                    while (getchar() != '\n');  
                    break;
                case 4:
                    printf("Digite o número de Pontos Turísticos: \n");
                    scanf("%d", &pontoTuristicos2);
                    while (getchar() != '\n');  
                    break;
                default:
                    printf("Opção Inválida\n");
            }

            do {
                //OPÇAO 5
                printf("D- Escolha outro Atributo: \n");
                printf("1. População \n");
                printf("2. Área \n");
                printf("3. PIB \n");
                printf("4. Pontos Turísticos \n");
                scanf("%d", &opcao5);
                if (opcao4 == opcao5) {
                    printf("Você não pode repetir atributos. \n");
                }
            } while (opcao4 == opcao5);  //loop

            switch (opcao5) {
                case 1: //População 2
                    printf("Digite a População do Segundo Estado: \n");
                    scanf("%f", &populacao2);
                    while (getchar() != '\n'); 
                    densidade3 = populacao2;
                    resultadoDensidade2 = densidade3 / densidade4;
                    break;
                case 2: // Área 2
                    printf("Digite a área deste estado: \n");
                    scanf("%f", &area2);
                    while (getchar() != '\n'); 
                    densidade4 = area2;
                    resultadoDensidade2 = densidade3 / densidade4;
                    break;
                case 3: // PIB 2
                    printf("Digite o PIB deste Estado: \n");
                    scanf("%f", &pib2);
                    while (getchar() != '\n');  
                    break;
                case 4: // Pontos Turísticos 2
                    printf("Digite o número de Pontos Turísticos: \n");
                    scanf("%d", &pontoTuristicos2);
                    while (getchar() != '\n');  
                    break;
                default:
                    printf("Opção Inválida\n");
     
            }

            soma1 = populacao1 + area1;
            soma2 = populacao2 + area2;
            soma3 = pib1 + pontoTuristicos1;
            soma4 = pib2 + pontoTuristicos2;

             
            //Estruturas if e else 
            printf("---------------------------\n");
            printf("Quem Maior? \n");
            //Populações
            if (populacao1 > populacao2) {
                printf("População: %s Maior!!! \n", pais1);
            } else if (populacao1 < populacao2) {
                printf("População: %s Maior!!!\n",pais2 );
            }  else if (populacao1 == -1 || populacao2 == -1) {  // Considera empate se não for digitado
                printf("População: Empatou (não informado)\n");
            } else {
                printf("Empatou\n");
            }
          

            //Áreas
            if (area1 > area2) {
                printf("Área 1 %s Maior!!! \n", pais1);
            } else if (area1 < area2) {
                printf("Área 2 %s Maior!!! \n",pais2 );
            } else if (area1 == 0 || area2 == 0) {  
                printf("Área: Empatou (não informado)\n");
            } else {
                printf("Empatou\n");
            }
        
            //PIBS
            if (pib1 > pib2) {
                printf("PIB: %s Maior!!!\n", pais1);
            } else if (pib1 < pib2) {
                printf("PIB: %s Maior!!!\n",pais2 );
            } else if (pib1 == 0 || pib2 == 0) {  
                printf("PIB: Empatou (não informado)\n");
            } else {
                printf("Empatou\n");
            }
        

            //Pontos Turísticos
            if (pontoTuristicos1 > pontoTuristicos2) {
                printf("Ponto Turístico: %s Maior!!!\n", pais1);
            } else if (pontoTuristicos1 < pontoTuristicos2) {
                printf("Ponto Turístico: %s Maior!!!\n",pais2 );
            } else if (pontoTuristicos1 == 0 || pontoTuristicos2 == 0) {  
                printf("Ponto Turístico: Empatou (não informado)\n");
            } else {
                printf("Empatou\n");
            }
                //Densidades
            if (densidade1 > densidade2) {
                printf("Densidade: %s Menor!!!\n", pais1);
            } else if (densidade1 < densidade2) {
                printf("Densidade: %s Menor!!!\n",pais2 );
            } else if (densidade1 == 0 || densidade2 == 0) {  
                printf("Densidade: Empatou (não informado)\n");
            } else {
                printf("Empatou\n");
            }

            printf("---------------------------\n");
            printf("Quem Ganhou? \n");
            if ( soma1 > soma2) {   // População é Área
                printf("Soma 1:  %s Ganhou com %.2f pts e %s perdeu com %.2f\n", pais1, soma1, pais2, soma2);
            } else if (soma1 < soma2) {
                printf("Soma 2:  %s Ganhou com %.2f pts e %s perdeu com %.2f\n", pais2, soma2, pais1, soma1);
            }  else {
                printf("Empatou\n");
            }
                //PIB é Ponto Turísticos
            if (soma3 > soma4) {
                printf("Soma 3  %s Ganhou com %.2f pts e %s perdeu com %.2f\n", pais1, soma3, pais2, soma4);
            } else if (soma3 < soma4){
                printf("Soma 4  %s Ganhou com %.2f pts e %s perdeu com %.2f\n", pais2, soma4, pais1, soma3);
            }  else {
                printf("Empatou\n");
            }


            // Fim do Jogo
            printf("---------------------------\n"); 

            //Exibição de Resultados
            printf("Exibição de Resultados: \n");
            printf("País: %s \n", pais1);
            printf("Estado: %s \n", estado1);
            printf("População: %.2f \n", populacao1);
            printf("Área: %.2f \n", area1);
            printf("PIB: %.2f \n", pib1);
            printf("Pontos Turísticos: %d \n", pontoTuristicos1);
            printf("Densidade Demográfica: %.2f \n", resultadoDensidade1);
            printf("---------------------------\n");
            printf("País: %s \n", pais2);
            printf("Estado: %s \n", estado2);
            printf("População: %.2f \n", populacao2);
            printf("Área: %.2f \n", area2);
            printf("PIB: %.2f \n", pib2);
            printf("Pontos Turísticos: %d \n", pontoTuristicos2);
            printf("Densidade Demográfica: %.2f \n", resultadoDensidade2);
            break;

        case 'B':
        case 'b':
        //Regras
            printf("Distribuição: As cartas são distribuídas igualmente entre os jogadores. \n");
            printf("------------------------------------------------------------------------------------------\n");
            printf("Escolha da característica: O jogador escolhe uma característica (ex: população, área) e anuncia seu valor.\n");
            printf("------------------------------------------------------------------------------------------------------------------\n");
            printf("Comparação: Os outros jogadores escolhem uma carta e comparam o valor da mesma característica. \n");
            printf("------------------------------------------------------------------------------------------\n");
            printf("Vencedor da rodada: O jogador com o maior valor vence e pega as cartas dos outros. \n");
            printf("------------------------------------------------------------------------------------------\n");
            printf("Fim do jogo: Quando um jogador tiver todas as cartas ou após um tempo determinado. O vencedor é quem tiver mais cartas. \n");
            break;

        case 'C':
        case 'c':
            //Saindo do jogo
            printf("Saindo...\n");
            printf("Obrigado Por Jogar!!!\n");
            printf("By: --- Arthut Gabriel ---\n");
            break;

        default:
            printf("Opção Inválida!!!!\n");
    }

    return 0;
    }

