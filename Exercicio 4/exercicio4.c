/*
Escreva uma função, com retorno, que recebe dois números inteiros por parâmetro,
verifica e retorna o maior valor.
Obs.: a função main deve receber e exibir o resultado.
*/
#include <stdio.h>

int numeros(int n1,int n2);

int main(void) {
  int n1,n2,r;
  printf("Informe o primeiro numero ");
  scanf("%i",&n1);
  printf("Informe o segundo numero ");
  scanf("%i",&n2);
  r = numeros(n1,n2);
  printf("resultado = %i\n",r);
  return 0;
}

int numeros(int n1,int n2){
  if(n1>n2){
    printf("n1 É o maior:\n");
    return(n1);
  }
  else{
    printf("n2 É o maior:\n");
   return (n2);
  }
}