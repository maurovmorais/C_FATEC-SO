#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main(void){
	
	float quilo, gramas;
	int mm,ss,tempo;
	
	tempo = 0;
	
	printf("Informe a massa do elemento em [Kg]: ");
	scanf("%f",&quilo);
	
	gramas = quilo*1000;
	
	while(gramas > 0.50)
	{	
		gramas = gramas / 2;
		tempo = tempo + 50;
	}	
	mm = tempo / 60;
	ss = tempo % 60;
	printf("Tempo necessario: %imm%iss\n\n",mm,ss);
	
	system("pause");
	system("cls");
}