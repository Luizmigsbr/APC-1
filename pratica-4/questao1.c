   #include <stdio.h>

 int main() {

  int numero;
   printf("entre com um numero inteiro: ");
   int deu_certo = scanf("%i", &numero);
   if (deu_certo) {
     if(numero % 2 == 0)
     printf("O numero %i é par!\n", numero);

   } else {
     printf("O numero %i é ímpar!\n", numero);
    }  
   } else{
     printf("Não foi possivel ler o numero!\n");
    }

   return 0;

}