#include<stdio.h>
#include<stdlib.h>
int main(){
  int num = 0;
  int d0,d1,d2,d3,d4,d5,d6,d7,d8,d9;
  printf("Digite um numero de 0 a 1023 : ");
  scanf("%d",&num);
  if (num%2==0){
    d0 = 0;
 }
  else{
    d0 = 1;
  }
  num = num / 2;
  if (num%2==0){
    d1 = 0;
  }
  else{
    d1 = 1;
  }
  num = num / 2;
  if (num%2==0){
    d2 = 0;
  }
  else{
    d2 = 1;
  }
  num = num / 2;
  if (num%2==0){
    d3 = 0;
  }
  else{
    d3 = 1;
  }
  num = num / 2;
  if (num%2==0){
    d4 = 0;
  }
  else{
    d4 = 1;
  }
  num = num / 2;
  if (num%2==0){
    d5 = 0;
  }
  else{
    d5 = 1;
  }
  num = num /2;
  if(num%2==0){
    d6 = 0;
  }
  else{
    d6 = 1;
  }
  num = num /2;
  if (num%2==0){
    d7=0;
  }
  else{
    d7=1;
  }
  num = num / 2;
  if (num % 2==0){
    d8 = 0;
  }
  else{
    d8 = 1;
  }
  num = num / 2;
  if (num%2==0){
    d9 = 0;
  }
  else{
    d9 = 1;
  }
  printf("O binario é : %d %d %d %d %d %d %d %d %d %d\n",d9,d8,d7,d6,d5,d4,d3,d2,d1,d0);
  return 0;
}
