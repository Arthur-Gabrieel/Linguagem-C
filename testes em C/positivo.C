#include <stdio.h>

int main() {

int num;


printf("Digite um número: \n");
scanf("%d", &num);

if (num > 0) {
    printf("número positivo. \n");
} else if (num == 0) {
    printf("Esse número é igual a zero. \n");
} else {
    printf("Número Negativo. \n");
}


}