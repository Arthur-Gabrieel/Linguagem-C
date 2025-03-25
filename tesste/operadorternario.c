#include <stdio.h>
#include <string.h>

int main () {

/*int temperatura = 59;
int resultado;


resultado = temperatura >= 30 ? 1 : 0;

if ( resultado == 1) {
printf("Quente \n"); 
} else {
    printf(" Frio\n");
}*/

int num1 = 2230, num2 = 120;
int maior;

num1 > num2 ? (maior = num1) : (maior  =  num2); 
if (num1 > num2) {
printf("Maior e %d \n", num1);
} else {
    printf("O maior é %d  \n", num2);
}
    return 0;

}