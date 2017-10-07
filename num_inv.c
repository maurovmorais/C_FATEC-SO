#include<stdio.h>
#include<stdlib.h>
int main(){
  int x,c,d,u = 0;
  printf("Digite um numero com 3 digitos: ");
  scanf("%d",&x);
  c = x / 100;
  d = (x % 100) / 10;
  u = x % 100 % 10;
  printf("O numero invertido eh %d%d%d\n",u,d,c);
  return 0;
}
