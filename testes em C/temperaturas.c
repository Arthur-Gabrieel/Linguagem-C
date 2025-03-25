 #include <stdio.h>

 int main() {
    float temperatura, umidade;
    unsigned int estoque, estoqueM = 1000;

    printf("Entre com a temperatura: \n");
    scanf("%f", &temperatura);
    printf("Entre com umidade: \n");
    scanf("%f", &umidade);
    printf("entre com estoque: \n");
    scanf("%u", &estoque);

    if (temperatura > 60) {
      printf("Temperatura está muito alta.\n");
    } else {
      printf("Temperatura está normal.\n");
    }

    if (umidade > 30) {
      printf("Umidade está muito alta.\n");
    } else {
      printf("Umidade está normal.\n");
    }

    if (estoque > estoqueM) {
      printf("Estoque CHEIO!!!!\n");
    } else {
      printf("O estoque teemm espaço ainda.\n");
    }



  

  return 0;
  }


 
