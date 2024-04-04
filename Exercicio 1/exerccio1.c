/*
Faça uma função, com retorno, para calcular o valor do volume de uma caixa
retangular, utilizando a seguinte fórmula:

volume = comprimento × largura × altura

Obs.: os valores do comprimento, da largura e da altura devem ser fornecidos pelo
usuário e devem ser passados como argumento para a função. A função main deve
receber e exibir o resultado do cálculo.
*/
#include<stdio.h>
#include<locale.h>

float volumedacaixa(float volume,float camp,float largura,float altura);

int main() {
  setlocale(LC_ALL, "Portuguese");
  float volume,altura,r;
  float camp,largura;
  printf("Informe o comprimento ");
  scanf("%f",&camp);
  printf("Informe a largura ");
  scanf("%f",&largura);
  printf("Informe a altura ");
  scanf("%f",&altura);
  r = volumedacaixa(volume,camp,largura,altura);
  printf("Resultado = %.3f",r);
  return 0;
}

float volumedacaixa(float volume,float camp,float largura,float altura){

  return(volume = camp * largura * altura);
}