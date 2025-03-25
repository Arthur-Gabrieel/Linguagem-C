#include <stdio.h>

int main()  {

    int nota;

    printf("Digite a sua Nota: \n");
    scanf("%d", &nota);

   if ( nota <= 49) {
    printf("Tirou F estude mais. \n");
   } else if (nota >= 50) {
    printf("Conceito E!");
   } else if (nota >= 60) {
    printf("Conceito D!");
   } else if (nota >= 70) {
    printf("Conceito C!");
   } else if (nota >= 80) {
    printf("Conceito B!");
   } else if (nota >= 90) {
    printf("Conceito A!");
   }
   

}