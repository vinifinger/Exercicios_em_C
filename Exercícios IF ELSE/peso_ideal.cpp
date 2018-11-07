/*  O peso ideal de um homem pode ser calculado pela f�rmula PIH = 0,727*h - 57 e o
de uma mulher pela f�rmula PIM = 0,621*h - 44, onde a altura (h) � dada em
cent�metros. Escrever um algoritmo que l� o nome, o sexo, a altura e o peso de uma
pessoa e que fornece, como sa�da, uma das tr�s mensagens:
? Voc� necessita emagrecer "x" quilos;
? Voc� est� no peso ideal;
? Voc� pode aumentar o seu peso em at� "x" quilos, onde �x� � a diferen�a do
peso da pessoa e seu peso ideal.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char nome[40], sexo;
float altura, peso, pih,pim, calc;

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	
	
	printf("\n Digite seu nome: ");
	scanf("%s", &nome);

	printf("\n Digite seu sexo (F/M):");
	scanf("%s", &sexo);
	printf("%",sexo);
	
	printf("\n Informe sua altura (m): ");
	scanf("%f", &altura);
	altura = altura * 100;
	
		
	printf("\n Informe seu peso: ");
	scanf("%f", &peso);
	system("cls");
	
	
	if(sexo == 'F' || sexo == 'f')
	{
		pim = (0.621*altura)- 44;
		//printf("%f", pim);
		if(pim < peso){
			calc = peso - pim;
			printf("\n Seu nome: %s", nome);
			printf("\n Sua altura: %0.1f", altura);
			printf("\n Seu peso: %0.1f", peso);
			printf("\n %s, voc� necessita emagrecer %0.1fkg\n\n", nome, calc);
			system("pause");
		} else if(pim > peso){
			calc = pim - peso; 
			printf("\n Seu nome: %s", nome);
			printf("\n Sua altura: %0.1f", altura);
			printf("\n Seu peso: %0.1f", peso);
			printf("\n %s, voc� precisa engordar %0.1fkg\n\n", nome, calc);
			system("pause");
		} else if(pim == peso){
			printf("\n Seu nome: %s", nome);
			printf("\n Sua altura: %0.1f", altura);
			printf("\n Seu peso: %0.1f", peso);
			printf("\n %s, voc� est� no peso ideal!!! PARAB�NS\n\n", nome);
			system("pause");
		} else {
			printf("ERRO\n");
			system("pause");
		}
		
	} else if (sexo == 'M' || sexo == 'm')
	{
	
		pih = (0.727*altura) - 57;
		//printf("%f", pih);
		if(pih < peso){
			calc = peso - pih;
			printf("\n Seu nome: %s", nome);
			printf("\n Sua altura: %0.1f", altura);
			printf("\n Seu peso: %0.1f", peso);
			printf("\n %s, voc� necessita emagrecer %0.1fkg\n\n", nome ,calc);
			system("pause");
		} else if(pih > peso){
			calc = pih - peso; 
			printf("\n Seu nome: %s", nome);
			printf("\n Sua altura: %0.1f", altura);
			printf("\n Seu peso: %0.1f", peso);
			printf("\n %s, voc� precisa engordar %0.1fkg\n\n", nome, calc);
			system("pause");
		} else if(pih == peso){
			printf("\n Seu nome: %s", nome);
			printf("\n Sua altura: %0.1f", altura);
			printf("\n Seu peso: %0.1f", peso);
			printf("\n %s, voc� est� no peso ideal!!! PARAB�NS\n\n", nome);
			system("pause");
		} else {
			printf("ERRO\n");
			system("pause");
		}

	} else {
		printf(" %s, VOC� � UM RETARDADO QUE N�O SABE DIGITAR H OU M! ", nome);
		system("pause");
	}	

	
	return 0;

}
