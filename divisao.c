#include <stdio.h>
#include <stdlib.h>
int main(){
  int x,x1,z;
  float y,y1;
  printf("Digite x \"int\": ");
  scanf("%d",&x);
  printf("Digite y \"float\": ");
  scanf("%f",&y);
  x1 = x / 2;
  y1 = y / 2;
  z =  x % 2;
  printf("Numero inteiro %d\n",x1);
  printf("Numero ponto decimal %.2f\n",y1);
  printf("Resto divisao %d\n",z);
  return 0;
}
