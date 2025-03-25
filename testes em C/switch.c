#include <stdio.h>

int main() {

int opçao;
float sake = 1000;

printf("Choose the option: \n");
printf("1- Check balance \n");
printf("2- Make deposit \n");
printf("3- Make sake \n");
scanf("%d", &opçao);

switch (opçao) {
case 1:
        printf("Your balance is: $ %.2f \n", sake);
break;
case 2:
        printf("Enter the bank you want deposit: \n");
        printf("Enter the agency you want deposit: \n");
        printf("Enter the account you want deposit: \n");
        
break;
case 3:
        printf("Enter the amount to withdraw: \n");
       
break;
default:
        printf("Option Invalid.!!!");

}
return 0;

}