#include <stdio.h>

//void Rainha
void moveRainha(int passos, char direcao[50]){
    if (passos <= 0) {
        return;
    }

    
    moveRainha(passos - 1, direcao);

  
}

//void Bispo
void moveBispo(int passos2, char direcao2[50]){
    if (passos2 >= 0 && passos2 <= 5) {
        return;
    }
    for(int vert; vert < 1 || vert > 5 ;) {
        for (int hori; hori < 1 || hori > 5;) {
          if (vert == hori) {
            printf("Movimento %d: Bispo andou uma casa na diagonal %s\n", vert, direcao2);
          }   
        }

    }
    
    moveBispo(passos2 - 1, direcao2);
}

//void Cavalo
void moveCavalo(int passos3, char direcao3[25]){
    if (passos3 == 0) {
        return;
    }
  
    moveCavalo(passos3 - 1, direcao3);
}       


//Começo do Int main
int main() {
            //criação das variáveis
    int torre, bispo, rainha, opcaoM;
    char opcaox[25];
    int cavalo, cavaloC = -1, cavaloD = -1;
    

    printf("---Bem Vindo aao jogo Xadrez--- \n");
    printf("escolha uma peça: \n");
    printf("1- Torre \n");
    printf("2- Bispo \n");
    printf("3- Rainha \n");
    printf("4- Cavalo\n");
    scanf("%d", &opcaoM);
    while (getchar() != '\n');

switch (opcaoM){
case 1:     // Torre com while
    printf("Escolha a Direção \n");
    printf("Cima \n");
    printf("Direita \n");
    printf("Esquerda\n");
    scanf(" %s", &opcaox);
        //Escolha da quantidade dos movimentos da Torre
    printf("Quantas pesças desejá mover: (máximo até 5)\n");
    scanf("%d", &torre);

while (torre < 1 || torre > 5) {
    // Se o valor não for válido, pede novamente a entrada
    printf("Número inválido! Escolha entre 1 e 5 casas:\n");
    scanf("%d", &torre);
}

    //Resultado da Torre
    printf("Você moveu para %d casas na direção %s \n", torre, opcaox);
break;
case 2:
    // Bispo com Do-While
    printf("Escolha a Direção \n");
    printf("Diagonal Cima \n");
    printf("Diagonal Direita \n");
    scanf(" %s", &opcaox);

   
    printf("Quantas peças deseja mover: (máximo até 5)\n");
    scanf("%d", &bispo);
    do {
        printf("Quantas peças deseja mover: (máximo até 5)\n");
        scanf("%d", &bispo);

        if (bispo < 1 || bispo > 5) {
            printf("Número inválido! Digite entre 1 e 5.\n");
        }
    } while (bispo < 1 || bispo > 5);

//Resultado do Bispo
    moveBispo(bispo, opcaox);
    printf("Você moveu para %d casas na direção %s \n", bispo, opcaox);
    break;

break;
case 3:
//Rainha com For
    printf("Escolha a Direção \n");
    printf("Cima \n");
    printf("Direita \n");
    printf("Esquerda\n");
    scanf(" %s", &opcaox);

//Escolha da quantidade dos movimentos da Rainha
    printf("Quantas pesças desejá mover: (máximo até 8)\n");
    scanf("%d", &rainha);

    for (rainha; rainha < 0 || rainha > 8;) {
        printf("Quantas casas deseja mover(máximo até 8)?\n");
        scanf("%d", &rainha);

    }


    moveRainha(rainha, opcaox);
    printf("Você moveu para %d casas na direção %s.\n", rainha, opcaox);

break;
//Resultado da Rainha
    
break;
case 4:
printf("Escolha a Direção \n");
printf("Cima \n");
printf("Direita \n");
printf("Esquerda\n");
scanf(" %s", &opcaox);



//Loop for pro usuário digitar somente 0, 1 e 2
    for (cavaloC; cavaloC != 1 && cavaloC != 2 && cavaloC != 0;){
    printf("Quantas peças deseja mover para baixo (máximo até 2)?\n");
    scanf("%d", &cavaloC);
    while (getchar() != '\n');
    moveCavalo(cavaloC - 1, opcaox);
    
    } 
    //Loop while pro usuário digitar somente 0 e 1
    while (cavaloD != 1 && cavaloD!= 0)
    {
        printf("Quantas peças deseja mover para a esquerda (máximo até 1)?\n");
        scanf("%d", &cavaloD);
        moveCavalo(cavaloD - 1, opcaox);
    }
    
        //Soma de usuario digitar 2 e 1
        cavalo = cavaloC + cavaloD;
    
        //Resultados
        if (cavalo == 3) {
            printf("Você moveu fez o movimento L  %d moveu cavalo 2 vezes para cima e 1 pra direita.\n", cavalo);
        } else if (cavaloC == 2 && cavaloD == 0) {
            printf("Você moveu o cavalo %d vezes para cima.", cavaloC);
        } else if (cavaloC == 0 && cavaloD == 1) {
            printf("Você moveu cavalo %d vez pra Direita.", cavaloD);
        } else if (cavaloC == 1) {
            printf("Você moveu cavalo %d vez para cima. \n", cavaloC);
        } else {
            printf("Você não moveu nenhuma peça.");
        }

break;
default:
    printf("Opção Inválida.");
 return 0; 
                    //Fim do Código
 }
}