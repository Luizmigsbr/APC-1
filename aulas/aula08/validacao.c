#include <stdio.h>

int main() {

  int numero;
  int numero_valido = 0;
  int numero_eh_valido = 0;

  while(numero_valido == 0){
    printf("Entre com um numero entre 1 e 10: ");
     int leu_certo = scanf("%i", &numero);

  numero_eh_valido = numero >= 0 && numero <= 10;

  if(numero_eh_valido){
    printf("Algp de  errado que naum ta certo!\n");
    getchar(); // limpar o buffer 
  }
} while(numero_eh_valido == 0);
  
printf("Faz que da certo!\n");
  
  return 0;
}