#include<stdio.h>

void main(void){
	
	int cont20, cont50;
	int valor;
	
	cont20 = 0;
	cont50 = 0;
	
	printf("Digite o valor do saque: ");
	scanf("%i",&valor);
	
	if (valor > 1000)
		printf("\nValor maximo de saque permitido R$ 1000.00\n");
	else
	if (valor % 2 != 0)
			printf("\nO valor do saque deve ser feito em notas de R$ 20.00 e R$ 50.00\n");
	else
		while (valor>0){
			if(valor >=50 && valor % 50 == 0){
				valor = valor - 50;
				cont50 = cont50 + 1;		
			}
			else
				if (valor > 0){
					valor = valor - 20;
					cont20 = cont20 + 1;
				}
		}
		printf("\n%i Nota(s) R$50,00 e %i Nota(s) R$20,00\n",cont50,cont20);
	}