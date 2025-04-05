#include <stdio.h>

int main() {
            //criação das variáveis
    int torre, bispo, rainha, opcaoM;
    char opcaox[25];
    

    printf("---Bem Vindo aao jogo Xadrez--- \n");
    printf("escolha uma peça: \n");
    printf("1- Torre \n");
    printf("2- Bispo \n");
    printf("3- Rainha \n");
    scanf("%d", &opcaoM);

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
default:
    printf("Opção Inválida");
break;

    
}
 return 0; 
                    //Fim do Código
}