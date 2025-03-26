#include <stdio.h>

int main() {
 /*   int i = 0;
while (i <= 10)
{
    if( i % 2 != 0) {
        printf("o número %d é ímpar\n", i);
    }
    i ++;
}*/
/*int num;
do {
    printf("Digite um número par: \n");
    scanf("%d", &num);
    if (num % 2 == 0){
        printf("%d é par \n", num);
    } else {
        printf("%d é impar \n", num);
    }
} while(num % 2 != 0);
printf("você digitou um número par Saindo do programa...\n"); */

int num, i;

    printf("Digite um número para tabuada: \n");
    scanf("%d \n", &num);

    for(i = 0; i <= 10; i++) {
        printf("%d x %d = %d ", i, num, i * num);
    }
   return 0; 

   
}