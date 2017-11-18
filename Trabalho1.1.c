#include<stdio.h>

void main(void){
	
	float Qtlatas,custopin,alt,raio,Acil,Abase,Alateral;
	
	printf("Digite a altura do tanque: ");
	scanf("%f",&alt);
	printf("Digite o raio do cilindo: ");
	scanf("%f",&raio);
	Abase = 3.14 * raio * raio;
	Alateral = 2 * 3.14 * raio * alt ;
	Acil = 2*Abase+Alateral;
	Qtlatas = Acil/(18*3);
	custopin = Qtlatas * 86.50;
	printf("Quantidade aproximada de latas: %.1f",Qtlatas);
	printf("\nCusto de pintura para o tanque: %.2f",custopin);	
}