#include<stdio.h>

void main(void){
	
	float vlrfrete,peso,Km;
	char TipoFrete;
	
	printf("Informe o tipo de frete: 'A' para aereo ou 'T' para terrestre: ");
	scanf("%c",&TipoFrete);
	printf("Informe o peso em quilos: ");
	scanf("%f",&peso);
	
	if (TipoFrete == 'A' || TipoFrete == 'a')
	{	
		if (peso <= 25)
			vlrfrete = peso * 10.50;
		else
			vlrfrete = (25 * 10.50)+((peso-25)*2.50);
	}
	else
	{
		if (TipoFrete == 'T' || TipoFrete == 't')
		{
			printf("Informe a distancia em quilometros: ");
			scanf("%f",&Km);
		}
		if (Km < 50)
			vlrfrete = peso * 3.50;
		else
			if(Km >=50 &&  Km <= 150)
				vlrfrete = peso * 4.50;
			else
				vlrfrete = peso * 6.00;
	}
	printf("O valor do frete eh %.2f\n",vlrfrete);
}