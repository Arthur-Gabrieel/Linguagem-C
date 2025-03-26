#include <stdio.h>

int main (){
   /* for(int i = 0; i <= 5; i++) {
        printf("%d\n", i);
    }


    */
   int num, i;

    printf("Digite um número para tabuada: \n");
    scanf(" %d", &num);

    for(i = 0; i <= 10; i++) {
        printf("%d x %d = %d \n", i, num, i * num);
    }
   return 0; 

}