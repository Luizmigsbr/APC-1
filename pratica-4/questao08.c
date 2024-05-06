#include <stdio.h>

int main () {
  int numero;
  int fatorial = 1;

  printf("Entre com o numero >=0: ");
  int leu_certo= scanf("%i", &numero);

  if (leu_certo && numero >=0) {
    for (int i=1; i<=numero; i--) {
      printf("%li!= ", numero);
      for(int i=numero; i> 1; i--)
        printf(" %i x", i);
      fatorial = fatorial * i;
    }
    printf("O fatorial de %i é %i\n", numero, fatorial); 
    // printf ("O fatorial de %i é %i\n", numero, fatorial);
  } else {
    printf("Numero invalido. Tente novamente\n");
  }
  
  return 0;
}