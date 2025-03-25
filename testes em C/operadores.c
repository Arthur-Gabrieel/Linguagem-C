#include <stdio.h>

int main (){

    int nota1,nota2, nota3;
    float media;
    printf("-----Programa de Calculo de Média-----\n");

    printf("Digite a Primeira Nota: \n");
    scanf("%d", &nota1);
    getchar();
    printf("Digite a Segunda Nota: \n");
    scanf("%d", &nota2);
    getchar();

    printf("Digite a Segunda Nota: \n");
    scanf("%d", &nota3);
    getchar();

    media =(float) (nota1 + nota2 + nota3) / 3;
    printf("A media é: %.1f\n", media);


return 0;
}
