#include <stdio.h>
#include <string.h>


int main () {
    float renda;
    int idade, depedentes;



    printf("Digite sua Idade: \n");
    scanf("%d", &idade);

    printf("Digite sua Renda: \n");
    scanf("%f", &renda);

    printf("Digite o números de Depedentes: \n");
    scanf("%d", &depedentes);

    if (idade >= 18 && idade < 65) {
      if (renda < 3000) 
        if (depedentes > 2) 
        
        printf("Você atende a todos os críterios. \n");

    } else {
        printf("você não tem idade suficiente. \n");
       
    } else {
        printf("Você não atende aos críterios de renda. \n");
    }
     else {
         printf("Dependentes insuficientes. \n");
    }

}
   
