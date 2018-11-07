/* Ler 4 valores (N1, N2, N3 e N4) referentes às quatro notas de um aluno. A seguir, se
a média ponderada com pesos 2,3,4 e 1, para as respectivas provas, for maior ou igual
a 7,0, mostre uma mensagem: "Aluno foi aprovado". Se a nota for inferior a 3,5, mostrar
uma mensagem: "Aluno foi reprovado". Se a média ficou maior que 3,5 e menor que
7,0, fazer a leitura de uma variável (G2) correspondente a nota de G2 e mostrar se o
aluno foi ou não aprovado (se a nota do G2 for maior ou igual a 6,0). */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float n1,n2,n3,n4,mp,g2;

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	
	printf("Digite a quarta nota: ");
	scanf("%f", &n4);
	
	
	mp = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / (2 + 3 + 4 + 1); 
	
	if(mp >= 7)
	{
		printf("\n Aprovado!!!");
	} else if (mp > 3.5 && mp < 7)
	{
		printf("\n Digite a nota da G2: ");
		scanf("%f", &g2);
		
		if(g2 >= 6)
		{
			printf("\n Aprovado!!! ");
		} else
			printf("\n Reprovado... ");
		
	} else 
		printf("\n Reprovado");
	
	
	
	system("pause");
	return 0;
}
