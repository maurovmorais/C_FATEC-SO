#include <stdio.h>
#include <stdlib.h>
int main(){
  char ch;
  int a,b;
  printf("Digite uma operação Matemática: ");
  ch = getchar();
  printf("Digite dois números inteiros:\n");
  scanf("%d%d",&a,&b);
  switch(ch){
    case'+':{
      int c = a + b;
      printf("Soma: %d\n",c);}
      break;
    case'-':{
      int c = a - b;
      printf("Subtração: %d\n",c);}
      break; 

    case'*':{
      int c = a * b;
      printf("Multiplicação %d\n",c);}
      break;
    case'/':{
      float c = a / b;
      printf("Divisão %.2f\n",c);}
      break;  

    default : printf("Não é uma  operação.\n");
  }  
  
  return 0;  
}
