#include  <stdio.h>

int main() {
  float valor_da_hora_de_tabalho = 150.00f;
  float total_de_horas_trabalhadas = 100.0f;

  const float IR = 0.25f;
  const float INSS = 0.11f;

  float salario_bruto = valor_da_hora_de_tabalho * total_de_horas_trabalhadas;
  float imposto_renda = salario_bruto * IR;
  float imposto_previ = salario_bruto * INSS;
  float salario_liquido = salario_bruto - imposto_renda - imposto_previ;

  printf("-----------------------------\n");
  printf("   C O N T R A C H E Q U E   \n");
  printf("-----------------------------\n");
  printf("Salario Bruto....: R$ %8.2f\n", salario_bruto);
  printf("Imposto Renda....: R$ %8.2f\n", imposto_renda);
  printf("Imposto Previ....: R$ %8.2f\n", imposto_previ);
  printf("Salario Liquido..: R$ %8.2f\n", salario_liquido);

  return 0;
}