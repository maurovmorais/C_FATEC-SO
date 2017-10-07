#include <stdio.h>
#include <stdlib.h>
int main(){
  int n,fat,contador;
  printf("Digite o valor de n: ");
  scanf("%d",&n);
  fat = 1;
  contador = 1;
  while (contador <= n){
    fat = fat*contador;
    contador = contador + 1;
  }
  printf("O fatorial é: %d\n",fat);
  return 0;  
}
