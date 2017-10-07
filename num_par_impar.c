#include<stdio.h>
#include<stdlib.h>
int main(){
  int n;
  printf("Entre com um numero: ");
  scanf("%d",&n);
  if ( n % 2 == 0) {
    printf("Numero Par\n");
  }
  else{
    printf("Numero Impar\n");
  }
  return 0;
}
