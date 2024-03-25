#include <stdio.h>
#include <math.h>

int main () {
  int numero1;
  int numero2;
   const double PI= 3.14;
  
  printf("Entre com o valor do numero1: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com o valor do numer2: ");
   deu_certo =scanf("%i", &numero2);

  int resultado = numero1 + numero2;
  printf("A soma dos numeros eh %i\n", resultado);

  resultado = numero1 - numero2;
  printf("A subtração dos numero eh %i\n", resultado);

  resultado = numero1 * numero2;
  printf("A multiplicação dos numeros eh %i\n", resultado);

  resultado = numero1 / numero2;
  printf("A divisão dos numero eh %i\n", resultado);

  float resultado2 = numero1 / numero2* 1.0;// conversao implicita
  printf("A divisão dos numero eh %f\n", resultado2);

  resultado = numero1 % numero2;
  printf("O resto da divisão dos numero eh %i\n", resultado);

 //numero1 = numero1 + 1;
 //numero1++;
 //++resultado; 

  printf("o incremento do numero1 eh %i\n", numero1++);
   printf("o  incremento da numero1 eh %i\n", ++numero1);

   //numero1 = numero1 - 1;
   //--numero1;
   //resultado--; 
   
  printf("o incremento do numero1 eh %i\n", numero1--);
   printf("o  incremento da numero1 eh %i\n", --numero1);

  double raiz= sqrt(numero1);
  printf("A raiz quadrada do numero1 eh %2f\n", raiz);
  
  double potenciacao = pow(numero1, 3); //numero1
  printf("A potencia do numero1 eh %2f\n", potenciacao);

  double logaritmo_base2= log2(numero1);
 printf("O logaritmo na base 2 do numero1 eh %2f\n",logaritmo_base2);
  
  double seno = sin(numero1 *(180/PI));
  printf("O seno do numero1 eh %2f\n", seno);
  
  return 0;
    }