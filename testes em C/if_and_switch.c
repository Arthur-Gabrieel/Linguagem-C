#include <stdio.h>

int main() {
    
    int dia;



printf("Entre com o Dia: \n");
scanf("%d", &dia);

switch (dia) {
case 1:
    printf("domingo");
break;
case 2:
    printf("segunda");
break;
case 3:
    printf("Terça");
break;
case 4:
    printf("Quarta");
break;
case 5:
    printf("Quinta");
break;
case 6:
    printf("Sexta");
break;
case 7:
    printf("Sábado");
break;
default:
    printf("Números Somente de 1 á 7!!!!");

}




 /* 
    if (dia == 1){
        printf("Domingo");
    } else if (dia == 2 ) {
        printf("Sábado");
    } else if (dia == 3) {
        printf("Segunda");
    } else if (dia == 4) {
        printf("Terça");
    } else if (dia == 5) {
        printf("Quarta");
    } else if (dia == 6) {
        printf("Quinta");
    } else if (dia == 7) {
        printf("Sexta");
    } else {
        printf("Números Somente de 1 á 7!!!!");
    } */
    

    
}