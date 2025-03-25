#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main () {
    int numJogador, numComputador, resultado;
    char tipoComparativo;

    //gerar número  aleatório
    srand(time(0));
    numComputador = rand () % 100 + 1; // número entre 1 e 100

    //Início do jogo
    printf("----Bem vindo ao jogo Maior, Menor ou Igual----\n");
    printf("Você deve escolher um número e o tipo de comparação. \n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a Comparação: \n");
    scanf(" %c", &tipoComparativo);

    printf("Digite um número (entre 1 á 100): \n");
    scanf("%d", &numJogador);

    //exibir número do computador
    printf("O número do computador é %d\n", numComputador);

switch (tipoComparativo) {
    case 'M':
    case 'm':
        printf("Você escolheu a opção maior. \n");
        resultado = numJogador > numComputador ? 1 : 0;
    break;
    case 'N':
    case 'n':
        printf("Você escolheu a opção menor. \n");
        resultado = numJogador < numComputador ? 1 : 0;  
    break;
    case 'I':
    case 'i':
        printf("Você escolheu a opção igual. \n");
        resultado = numJogador == numComputador ? 1 : 0;  
    break;
    default:
    printf("Opção de Jogo Inválida!!");
    break;
}

printf("O número do computador é %d é do jogador é %d \n", numComputador, numJogador);

if (resultado == 1) {
    printf(" Parabéns você GANHOU!!!!");
} else {
    printf(" Infelizmente você perdeu!!!");
}
}