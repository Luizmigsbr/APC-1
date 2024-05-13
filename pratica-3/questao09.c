#include <stdio.h>

int main(){
  int numero;
  int maior;
  int menor;
  int numero_eh_valido=0;

  do{
    printf("Entre com um numero: (0 vai parar): ");
    int leu_certo = scanf("%i", &numero);
    if(leu_certo==0){
      break;
    }
    if(maior< numero) {
      maior = numero;
    }
     if(menor> numero)
       menor= numero;
  }
    }while (numero_eh_valido);
  
  return 0;
}