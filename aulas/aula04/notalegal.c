#include <stdio.h>

int main() 
{
printf("--------------------\n");
printf("     NOTA LEGAL    \n");
printf("-------------------\n"); 
printf("ITEM    QTD   PRECO\n");

  char item[31]= "Banana prata";
  int qtde=16;
  float preco=15.99f;


  printf("%14 %3i %11.2\n,item1,qtde,preco");

   char item2[31]= "maca fuji";
   qtde=1;
   preco= 16.88f;

  printf("%14 %3i %11.2\n,item,qtde,preco");

   char item2[31]= "arroz";
   qtde=13;
   preco= 25.00f;

  printf("%14 %3i %11.2\n, item,qtde,preco");

  return 0;
  }