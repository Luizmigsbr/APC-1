#include <stdio.h>

int main() {
  int quantidade;

  printf("Entre com a quantidade de numeros a serem lidos: ");
  int leu_certo = scanf("%i", &quantidade);  

  if(leucerto && quantidade > 0) {
    for(int i= 1; i <= quantidade; i++){
      int numero;
      printf("Entre com o %i numero: ", i); 
      leu_certo = scanf("%i", &numero);
      if (leu_certo){

      } else {
        printf("Numero invalido. Tente novamente\n");
        getchar(); // limpar o \n
        i--;//volta 1 repetiçao
        } 
      }
  float media_aritmerica = soma *1.0f / quantidade;
    printf("A medis aritmetica eh %f\n", media_aritmetica);
  }else{
    printf("Quantidade invalida. Tente novamente\n");
  }
  return 0;
}