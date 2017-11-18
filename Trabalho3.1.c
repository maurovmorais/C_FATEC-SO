#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

void main(void){
	
	int idade,masc,fem,oti,bom,reg,maior,menor,maiorotimo,menorreg;
	char sexo, op, continua;
	float percfem,cont;
	
	masc = 0;
	fem = 0;
	oti = 0;
	bom = 0;
	reg = 0;
	maior = 0;
	menor = 200;
	cont = 0;
	
	do
	{
		printf("\n\nQual seu sexo [M] ou [F] ?\nsexo : ");
		sexo = getche();
	
		if(sexo =='M' || sexo == 'm')
			masc = masc + 1;
		if(sexo == 'F' || sexo == 'f')
			fem = fem + 1;
		
		printf("\n\nQual sua opniao sobre o filme?\n[O]-Otimo [B]-Bom  [R]-Regular\nopniao: ");
		op = getche();
		
		if(op == 'O' || op == 'o')
			oti = oti + 1;
		if(op == 'B' || op == 'b')
			bom = bom + 1;
		if(op == 'R' || op == 'r')
			reg = reg + 1;
		
		printf("\n\nQual sua idade? ");
		scanf("%i",&idade);
		
		if (idade > maior)
			maior = idade;
		if (idade < menor)
			menor = idade;
		
		if((sexo == 'F' || sexo == 'f') && (op == 'R' || op == 'r') && (idade > 18) && (idade < 25))
			
			cont = cont + 1;
			
		if(op == 'O' || op == 'o')
		{	
			if(idade > maior)
				maiorotimo = idade;
			else
				maiorotimo = maior;
		}
		if(op == 'R' || op == 'r')
		{	
			if(idade < menor)
				menorreg = idade;
			else
				menorreg = menor;
		}
		printf("\nDeseja Continuar(s/N)?");
	    continua = getche();
	}while(continua == 'S' || continua == 's');
	
	percfem = cont/fem*100;
	
	printf("\n\nA quantidade de Respostas 'Bom' = %i\n",bom);
	printf("Percentual sexo feminino acima de 18 e abaixo de 25 que responderam Regular = %.1f\n", percfem);
	printf("Maior Idade que respondeu otimo  = %i\n",maiorotimo);
	printf("Menor Idade que respondeu regular = %i\n\n",menorreg);
	
	system("pause");
	system("cls");
}



