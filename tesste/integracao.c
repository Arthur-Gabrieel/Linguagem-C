#include <stdio.h>

int main () {
 
float nota1, nota2, media;
 int opcao;

 printf("----Menu de Gerenciamento de Estudantes---- \n");
 printf("1- Calcular Média \n");
 printf("2- Verificar Status \n");
 printf("3- Sair \n");
 scanf("%d", &opcao);

 switch (opcao)
 {
 case 1:
    printf("Calcular média \n");
    printf("Digite a Primeira nota: \n");
    scanf("%f", &nota1);

    printf("Digite a Segunda  nota: \n");
    scanf("%f", &nota2);

    if ( (nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10) ){
        media = ( nota1 + nota2) / 2;
        printf(" A média é %.2f \n", media);
    } else {
        printf("Entrada com valores errado!! \n");
    }
break;
case 2:
    printf("Verificar Status \n");
    printf("Entrar com média: \n");
    scanf("%f", &media);

    //media >= 5 ? printf("Aprovado\n") : printf("Reprovado \n");
    if ( media >= 7){
        printf("Aprovado\n");
    } else if (media >= 5) {
        printf("recuperação\n");
    } else {
        printf("Reprovado \n");
    }
 break;
 case 3:
    printf("Saindo... \n");
 break;
default:
    printf("Ocorreu algum ERRO digite as Opções Válidas!!!! \n");

break;
 }

    return 0;
}