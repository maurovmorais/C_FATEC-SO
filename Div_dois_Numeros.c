// Calcular quantos numeros divisiveis existe entre 1 e n-esimo, dado  2 numeros inteiros.

#include<stdio.h>
#include<math.h>

int main(){
	
	int a, b, aux,mmc,x,y, soma, div1, div2, div3,div4,lim,cont,x1,y1;
	char z;
	
	aux = 1;
	mmc = 0;
	x1 = 0;
	y1 = 0;
	cont = 1;
		
	printf("\nDigite o numero a: ");
	scanf("%i",&a);
	printf("Digite o numero b: ");
	scanf("%i",&b);
	printf("Digite o limite: ");
	scanf("%i",&lim);
	
	x = a;
	y = b;
	
	if (b==0)
	{
		div4 = lim / x;
	}
	else
		while(aux > 0) 
		{
			aux = a % b;
			a = b;
			b = aux;
		}
		mmc = abs(x * y) / a;
		
	if (x == 0)
	{
		div4 = lim / y;
	}
	else
		if (y == 0)
		{
			div4 = lim / x;
		}
		else
		{	
			div1 = lim / x;
			div2 = lim / y;
			soma = div1 + div2;
			div3 = lim / mmc;
			div4 = soma - div3;
		}
	printf("\nExistem %i Divisiveis por %i e %i de 1 a %i - incluso\n",div4,x,y,lim);
	printf("\n  %i |%i | %i | Div | \n", lim, x , y);
	printf("\n======================\n");
	
	for(cont=1; cont <= lim; cont++)
	{	
		if(cont % x == 0)
			x1 = 1;
		else
			x1 = 0;
		if(cont % y == 0)
			y1 = 1;
		else 
			y1 = 0;
		if(x1==1 || y1==1)
			z = 'x';
		else
			z = '  ';
		printf("\n   %i | %i| %i |  %c  |\n",cont,x1,y1,z);
	}
}
