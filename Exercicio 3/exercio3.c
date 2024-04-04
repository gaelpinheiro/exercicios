/*
Construa uma função, sem retorno, que recebe um valor inteiro por parâmetro e
informa se ele é, ou não, múltiplo de 5.
*/

#include <stdio.h>
#include<locale.h>

void valorinteiro(int k);

int main() {
  setlocale(LC_ALL, "Portuguese");
  int n;
  printf("Informe o valor inteiro ");
  scanf("%i", &n);
  valorinteiro(n);
  return 0;
}

void valorinteiro(int k){
  if(k % 5==0){
    printf("%i Ele é múltiplo de 5",k);
  }
  else{
    printf("%i Ele não e múltiplo de 5",k);
  }
}