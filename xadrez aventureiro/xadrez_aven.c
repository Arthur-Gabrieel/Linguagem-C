#include <stdio.h>

int main() {
            //criação das variáveis
    int torre, bispo, rainha, opcaoM;
    char opcaox[25];
    int cavalo, cavaloB = -1, cavaloE = -1;
    

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

do { // Usando o Do-While
    //Escolha da quantidade dos movimentos do Bispo
    printf("Quantas pesças desejá mover: (máximo até 5)\n");
    scanf("%d", &bispo);

} while (bispo < 1 || bispo > 5); 

//Resultado do Bispo
    printf("Você moveu para %d casas na direção %s \n", bispo, opcaox);

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

//Usando o for
for (rainha; rainha < 1 || rainha > 8; rainha) {
    printf("Número inválido! Escolha entre 1 e 8 casas:\n");
    scanf("%d", &rainha);
}
//Resultado da Rainha
    printf("Você moveu para %d casas na direção %s \n", rainha, opcaox);

break;
case 4:

//Loop for pro usuário digitar somente 0, 1 e 2
    for (cavaloB; cavaloB != 1 && cavaloB != 2 && cavaloB != 0;){
    printf("Quantas peças deseja mover para baixo (máximo até 2)?\n");
    scanf("%d", &cavaloB);
    while (getchar() != '\n');
    
    } 
    //Loop while pro usuário digitar somente 0 e 1
    while (cavaloE != 1 && cavaloE!= 0)
    {
        printf("Quantas peças deseja mover para a esquerda (máximo até 1)?\n");
        scanf("%d", &cavaloE);
    }
    
        //Soma de usuario digitar 2 e 1
        cavalo = cavaloB + cavaloE;
    
        //Resultados
        if (cavalo == 3) {
            printf("Você moveu fez o movimento L  %d moveu cavalo 2 vezes para traz e 1 pra esquerda.\n", cavalo);
        } else if (cavaloB == 2 && cavaloE == 0) {
            printf("Você moveu o cavalo %d vezes para traz.", cavaloB);
        } else if (cavaloB == 0 && cavaloE == 1) {
            printf("Você moveu cavalo %d vez pra Esquerda.", cavaloE);
        } else if (cavaloB == 1) {
            printf("Você moveu cavalo %d vez para traz. \n", cavaloB);
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