#include <stdio.h>

int main() {
 float nota1;
 float nota2;

  printf("entre com a primeira nota");
  int deu_certo = scanf("%f", &nota1);

  printf("entre com a segunda nota");
  deu_certo = scanf("%f", &nota2);

  //0.0f<=nota1<=10.0f//
  if (nota1 <= 0.0f &&  nota1 <=10.0 && deu_certo) {
  printf("entre com a segunda nota: ");
  deu_certo = scanf("%f", &nota2);

  if (nota2 >= 0.0f && nota2<=10.0 && deu_certo){
    float media = 0.4f + nota1 +0.6f * nota2;
     printf("A media eh %f\n", media);
    
  } else {
    printf("A segunda nota é invalida\n");
  }
  } else {
    printf("A primeira nota é invalida\n");
      }
  
  return 0;
}