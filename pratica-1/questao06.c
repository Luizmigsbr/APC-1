#include <stdio.h>
#include <math.h>

int main() {

int x;
int y;
int z;
  
printf("Entre com o valor de x: ");
int deu_certo = scanf("%i", &x);

printf("Entre com o valor de y: ");
deu_certo = scanf("%i", &y);
  
printf("Entre com o valor de z: ");
 deu_certo = scanf("%i", &z);

  
    float a1 = (-y + sqrt(y*y - 4*x*z))/(2*x);
    float a2 = (-y - sqrt(y*y - 4*x*z))/(2*x);
    printf("a1 = %f\n" , a1);
    printf("a2 = %f\n" , a2); 

  return 0;
}
