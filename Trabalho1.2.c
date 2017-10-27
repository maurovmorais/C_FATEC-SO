#include<stdio.h>

void main(void){
	
	int cont20, cont50, valor;
	
	cont20 = 0;
	cont50 = 0;
	
	printf("Digite o valor do saque: ");
	scanf("%i",&valor);
	
	if (valor > 1000)
		printf("\nValor maximo de saque permitido R$ 1000.00\n");
	else
		if(valor % 2 == 1 || valor == 30 || valor % 10 == 2 || valor % 10 == 4 || valor % 10 == 6 || valor % 10 == 8 || valor < 20)
			printf("\nO valor do saque deve ser feito em notas de R$ 20.00 e R$ 50.00\n");
		else		
			if((valor % 50)% 20 == 0)
			{
				cont50 = valor / 50;
				cont20 = (valor % 50) / 20;
				printf("\n%i Nota(s) R$20,00\n",cont20);
				printf("\n%i Nota(s) R$50,00\n",cont50);
			}	
				else
					if(((valor%50+50)%20) == 0)
					{
						cont50 = valor / 50-1;
						cont20 = ((valor % 50)+50) / 20;
						printf("\n%i Nota(s) R$20,00\n",cont20);
						printf("\n%i Nota(s) R$50,00\n",cont50);
					}		
}
