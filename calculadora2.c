#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float soma(float n1, float n2)
{
	return n1 + n2;
}

float subtracao(float n1, float n2)
{
	return n1 - n2;
}

float multiplicacao(float n1, float n2)
{
	return n1 * n2;
}

float divisao(float n1, float n2) 
{
	return n1 / n2;
}

int main()
{
	float n1;
	
	float n2;
	
	char Operacao;
	
	float Resultado;
	
	printf(" Digite  a operação \n");
	
	scanf("%c", &Operacao);
	
	
	printf("Digite o primeiro número \n");
	
	scanf("%f", &n1);
	
	printf("Digite o segundo número \n");
	
	scanf("%f", &n2);
	
	
	switch(Operacao)
	{
		case '+':
		
		   Resultado = soma(n1, n2);
		
		break;
		
		case '-':
		
		  Resultado = subtracao(n1, n2);
		
		break;
		
		case '*':
		
		  multiplicacao(n1, n2);
		
		break;
		
		case '/':
		
		 Resultado = divisao(n1, n2);
		  
		 break;
	}
	
	printf("O resultado da operação é %f", Resultado);
	
	
}


