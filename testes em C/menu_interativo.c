#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    int opcao;
    int num_secret, palpite, regras;

    printf("----Menu Principal---- \n");
    printf("1- Iniciar Jogo \n");
    printf("2- Ver Regras do Jogo \n");
    printf("3- Sair \n");
    printf("Escolha uma Opção: \n");
    scanf("%d", &opcao);

switch (opcao) {
case 1: 

    srand(time(0));
    num_secret = rand() % 10;
    printf("Digite um Número entre 0 é 9: \n");
    scanf("%d", &palpite);
    printf("numero secreto: %d \n",num_secret);

    if (num_secret == palpite) {
        printf("Você acertou\n");
    } else {
        printf("Você Errou!!!\n");
    }

break;
case 2:
    printf("Regras...\n");
    printf("Digite a opção de acordo com as regras do jogo: \n");
    scanf("%d", &regras);
switch (regras) {
case 1:
printf("regra 1");
break;
case 2: 
printf("regra 2");
break;
default:
printf("opção inválida!!!");
   
}

break;
case 3:
    
    printf("Obrigado Por Jogar!!!! \n");
    printf("By: --- Arthur Gabriel ---\n");

break;
default:
    
    printf("Opção Inválida!!!! \n");
   
    }


}