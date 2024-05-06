#include <stdio.h>
int main() {
  int numero;
  prinft("Entre com o numero de 1 a 10: "); 
  int leu_certo= scanf("%i", &numero);

  if (leu_certo&&numero >0 && numero <=11) {
    prinft("A  tabuada de %i é:\n", numero);
    // printf("1 x %i = %i\n", numero,1 * numero);
    // printf("2 x %i = %i\n", numero, 2 * numero);
    // printf("3 x %i = %i\n", numero,3 * numero);
    // printf("4 x %i = %i\n", numero,4 * numero);
    // printf("5 x %i = %i\n", numero,5 * numero);
    // printf("7 x %i = %i\n", numero,7 * numero);
    // printf("8 x %i = %i\n", numero,8 * numero);
    // printf("9 x %i = %i\n", numero,9 * numero);
    // printf("10 x %i = %i\n", numero,10 * numero);
    for (int i=1; i<=10; i++) 
    prinft(" %i x %i = %i\n", numero, i, numero * i);
  }
    prinft("a tabuada invertida de %i é:\n", numero");
    for (int i=10 ; i> 0; i--){
      prinft(" %i x %i = %i\n", numero, i, numero * i);
    }
  } else{
    prinft("numero invalido. Tente novamente\n");
  }
 return 0;
}