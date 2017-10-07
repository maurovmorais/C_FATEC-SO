#include <stdio.h>
#include <stdlib.h>
int main(){
  int num;
  printf("Digite um número: ");
  scanf("%d",&num);
  if(num >= 10){
    printf("O número é maior ou igual a que 10\n");
  }
  else{
    printf("O número é menor do que 10\n");
  }  
  return 0;  
}
