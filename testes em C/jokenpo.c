# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main() {
    int escolha_player, escolha_computer;
    srand(time(0));

    printf("--- Jogo de Jokenpô --- \n");
    printf("Escolha uma Opção: \n");
    printf("1- Pedra \n");
    printf("2- Papel \n");
    printf("3- Tesoura \n");
    printf("Escolha: \n");
    scanf("%d", &escolha_player);

    escolha_computer = rand() % 3 + 1;

switch (escolha_player)
{
case 1:
    printf("Player: Pedra - ");
break;
case 2:
    printf("Player: Papel - ");
break;
case 3:
    printf("Player: Tesoura - ");
break;
default:
    printf("Inválido!!!");
}


switch (escolha_computer)
{
case 1:
    printf("Computer: Pedra  \n");
break;
case 2:
    printf("Computer: Papel  \n");
break;
case 3:
    printf("Computer: Tesoura  \n");
break;

}

if (escolha_computer == escolha_player) {
    printf("### Empate ###");
} else if ((escolha_player == 1) && (escolha_computer == 3) ||
            (escolha_player == 2) && (escolha_computer == 1) ||
                (escolha_player == 3) && (escolha_computer == 2))
    {
        printf("Você ganhou, Parabéns!!!");
    }else {
        printf("Você perdeu!!!");
    }


    return 0;


}