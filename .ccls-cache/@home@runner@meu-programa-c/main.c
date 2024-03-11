#include <stdio.h>

int main() {
    float pi = 3.14;
    float raio = 0.0;

  printf("Entre com valor do raio da pizza: ");
  scanf("%f", &raio);

  float area_da_pizza = pi*raio*raio;

  printf("A área da pizza é %f\n", area_da_pizza);
    
  return 0; 
   }

