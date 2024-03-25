#include <stdio.h>

int main() { 
  float pi = 3.1416;
    float raio = 0.0;
    float perimetro= 0.0;

  printf("Entre com valor do  da pizza: ");
  scanf("%f", &raio);
  float area_da_pizza = pi*raio*raio;

  printf("A área da pizza é %f\n", area_da_pizza);
  
  scanf("%f", &perimetro);
  
    float  perimetro= 2*pi*raio;
  
  printf("A área da pizza é %f\n", perimetro);
  printf("A área da pizza é %f\n", area_da_pizza);

  return 0;
}