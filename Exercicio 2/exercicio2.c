/*
Elabore uma função, com retorno, que calcula a área de uma circunferência. Para
isto, utilize a seguinte fórmula:

A = πr2

Obs.: o valor do raio deve ser fornecido pelo usuário e deve ser passado como
argumento para a função. A função main deve receber e exibir o resultado do
cálculo.
*/
#include <stdio.h>
#include<locale.h>
#include<math.h>

float pi = 3.14;

float valorarea(float p);

int main() {
  setlocale(LC_ALL, "Portuguese");
  float raio,r;
  printf("Informe a raio ");
  scanf("%f",&raio);
  r = valorarea(raio);
  printf("\nResultado é: %.2f\n",r);
  
   return (0);
}

float valorarea(float p){
  
  return(pi * pow(p,2));
  
}