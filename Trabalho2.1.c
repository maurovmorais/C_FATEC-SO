#include<stdio.h>

void main(void){
	
	int codfunc,setor,minutos,min,hr;
	float sal,VhT;
	
	sal = 0;
	
	printf("Informe o codigo do funcionario: ");
	scanf("%i",&codfunc);
	printf("Informe a quantidade de horas trabalhadas [0~1000 ]: ");
	scanf("%i",&hr);
	printf("Informe a quantidade de minutos trabalhados [0~59]: ");
	scanf("%i",&minutos);
	
	if (hr <= 1000 && minutos <= 59)
	{
		min = (hr * 60) + minutos;
		setor = codfunc / 1000;
		
		if(setor == 0 || setor > 3)
			printf("Codigo funcionario nao existe !\n");
		if (setor == 1)
			VhT = 7.80;
		if (setor == 2)
			VhT = 11.50;
		if (setor == 3)
			VhT = 18.50;
		if (min > (400*60))
			sal = (400*VhT)+((min-(400*60))*(VhT*1.10)/60);
		else
			sal = (min*VhT/60);
			printf("Valor do Salario eh: %.2f",sal);
	}
	else
	{
		printf("Informe novamente!!\n");
	}
}