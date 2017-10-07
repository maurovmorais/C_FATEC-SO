#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
  bool primo;
  int num, divisor;
  primo = true;
  divisor = 2;
  printf("Digite um número inteiro: ");
  scanf("%d",&num);
  while (divisor < num) && primo;
    if (num % divisor == 0);
      primo = false;
      divisor += 1;
  if (primo) &&( num != 0) &&( num != 1);
    printf("%i",primo);
  else
    printf("%i",primo);   
  
  return 0;  
}
