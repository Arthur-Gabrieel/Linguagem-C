#include <stdio.h>
#include <math.h> // Para usar a função fabs()
#include <string.h>
#include <stdlib.h>

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
    float populaçao1, populaçao2;
    float area1, area2;
    float pib1, pib2, densidade1, densidade2;
    int opcao, atributo, pontoTuristicos1, pontoTuristicos2;
    

    //Menu do Jogo
  
    printf("Bem Vindo ao Jogo Super Trunfo Países.\n");
    printf("Digite o uma opção: \n");
    printf("1- Iniciar Jogo \n");
    printf("2- Regras do jogo\n");
    printf("3- Sair \n");
    scanf("%d", &opcao);
   getchar ();


switch (opcao)              {
case 1:             //começo do jogo

  //Estado 1 
printf("Digite o Nome do País: \n");
fgets(pais1, sizeof(pais1), stdin);
pais1[strcspn(pais1, "\n")] = 0;


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
printf("Digite o número de Pontos Turísticos: \n");
scanf("%d", &pontoTuristicos1);
while ( getchar () != '\n');


//Estado 2

printf("Digite o Nome do País: \n");
fgets(pais2, sizeof(pais2), stdin);
pais2[strcspn(pais2, "\n")] = 0;


printf("Digite o nome do Segundo Estado: \n");
fgets(estado2, sizeof(estado2), stdin);
estado2[strcspn(estado2, "\n")] = 0;


printf("Digite a População do Segundo Estado: \n");
scanf("%f", &populaçao2);
while ( getchar () != '\n');

printf("Digite a área deste estado: \n");
scanf("%f", &area2);
while ( getchar () != '\n');

printf("Digite o PIB deste Estado: \n");
scanf("%f", &pib2);
while ( getchar () != '\n');

printf("Digite o número de Pontos Turísticos: \n");
scanf("%d", &pontoTuristicos2);
while ( getchar () != '\n');


densidade1 = populaçao1 / area1;
densidade2 = populaçao2 / area2;

//Menu de Comparação

printf("Escolha o Atributo para Comparação: \n");
printf("1- População \n");
printf("2- Área \n");
printf("3- PIB \n");
printf("4- Pontos Turísticos\n");
printf("5- Densidade Demográfica \n");
printf("6- Todos \n");
scanf("%d", &atributo);

//População

if(atributo == 1) {
    if (populaçao1 > populaçao2) {
printf("%s Venceu com  Maior População .\n", estado1); 
} else if (populaçao1 < populaçao2)  {
printf("%s Venceu com Maior População. \n", estado2);
} else {
    printf("Os dois possuem a mesma População!!!\n");
}

//Área

}else if(atributo == 2) {
if ( area1 > area2) {
printf("%s Venceu com a Maior Área. \n", estado1);
} else if ( area1 < area2){
printf("%s Venceu com Maior Área. \n", estado2);
} else {
    printf("Os dois possuem a mesma Área!!!\n");
}

//PIB

} else if (atributo == 3) {
if (pib1 > pib2) {
printf("%s Venceu com Maior PIB. \n", estado1);
} else if (pib1 < pib2){
printf("%s Venceu com Maior PIB. \n", estado2);
}else {
    printf("Os dois possuem a mesmo PIB!!!\n");
}

//Pontos Turisticos

} else if (atributo == 4) {
if (pontoTuristicos1 > pontoTuristicos2) {
printf("%s Venceu com Maiores Pontos Turísticos. \n", estado1);
} else if (pontoTuristicos1 < pontoTuristicos2) {
printf("%s Venceu com Maiores Pontos Turísticos. \n", estado2);
} else {
    printf("Os dois possuem a mesma quantidades de Pontos Turíscos!!!\n");
}

// Densidade Demográfica


}else if (atributo == 5) {
    if (densidade1 < densidade2) {
        printf("%s Venceu com maior Densidade Demográfica de %f pessoas por km². \n", estado1, densidade1);
    } else if (densidade1 > densidade2) {
        printf("%s Venceu com Maior Densidade Demográfica de %f pessoas por km². \n", estado2, densidade2);
    } else {
        printf("Os dois possuem a mesma Densidade Demográfica!!! \n");
    }


//Todos Juntos

} else if (atributo == 6) {
    if (populaçao1 > populaçao2) {
    printf("%s Venceu com  Maior População .\n", estado1); 
    } else if (populaçao1 < populaçao2)  {
    printf("%s Venceu com Maior População. \n", estado2);
    } else {
        printf("Os dois possuem a mesma População!!!\n");
    }

    printf("------------------\n");

    if ( area1 > area2) {
    printf("%s Venceu com a Maior Área. \n", estado1);
    } else if ( area1 < area2){
    printf("%s Venceu com Maior Área. \n", estado2);
    } else {
    printf("Os dois possuem a mesma Área!!! \n");
    }
    
    printf("------------------\n");

    if (pib1 > pib2) {
    printf("%s Venceu com Maior PIB. \n", estado1);
    } else if (pib1 < pib2){
    printf("%s Venceu com Maior PIB. \n", estado2);
    } else {
    printf("Os dois possuem a mesmo PIB!!!\n");
    }

printf("País: %s \n", pais1);
printf("Estado: %s \n", estado1);
printf("População: %f \n", populaçao1);   
printf("Área: %f \n", area1);
printf("PIB: %f \n", pib1);
printf("Pontos Turísticos: %d \n",  pontoTuristicos1);


printf("---------------------------\n");

printf("País: %s \n", pais2);
printf("Estado: %s \n", estado2);
printf("População: %f \n", populaçao2);   
printf("Área: %f \n", area2);
printf("PIB: %f \n", pib2);
printf("Pontos Turísticos: %d \n", pontoTuristicos2);

//Fim do Jogo
break;
case 2:             //começo das regras


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
case 3:
printf("Saindo...\n");
printf("Obrigado Por Jogar!!!\n");
printf("By: --- Arthut Gabriel ---");

break;
default:
printf("Opção Inválida!!!!");
    
}

    return 0;
}

}
