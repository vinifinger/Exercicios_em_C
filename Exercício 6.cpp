/*
  * Programa: Alunos Aprovados
  * Data de cria��o: [06/11/2018]
  * Autor: Vinicius M. Finger
  * Vers�o: 1.0
  * �ltima atualiza��o: [06/11/2018] feita por Vinicius M. Finger
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");

	int total, resposta;
	float nota1, nota2, media;
	
	do{
		
		nota1 = 0;
		nota2 = 0;
		media = 0;
		resposta = 0;
		
		printf(" Bem - vindo ao Software");
		printf("\n _______________________");
		
		printf("\n\n Informe a nota 1 do aluno: ");
		scanf("%f", &nota1);
		
		printf("\n\n Informe a nota 2 do aluno: ");
		scanf("%f", &nota2);
		
		printf("\n\n _____________________");
		
		media = ((nota1 + nota2) / 2);
		
		
		if(media >= 7){
			
			total = total + 1;
			
		}
		
		printf("\n\n M�dia Final do aluno � de %.2f", media);
		printf("\n\n")
		
		while(resposta!=1 && resposta!=2){
			printf(" Calcular a m�dia de outro aluno 1.Sim 2.N�o? ");
			scanf("%i", &resposta);
			system("cls");
		}
	}while(resposta==1);
	
	printf(" Muito obrigado por utilizar o Software! =D");
	printf("\n\n O total de alunos aprovados foi de %i", total);
	
	return 0;
}
