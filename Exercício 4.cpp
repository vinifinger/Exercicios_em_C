/*
  * Programa: Ordem de Duplas
  * Data de criação: [06/11/2018]
  * Autor: Vinicius M. Finger
  * Versão: 1.0
  * Última atualização: [06/11/2018] feita por Vinicius M. Finger
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int num1, num2;
	
	do{
		printf(" Bem - vindo ao Software");
		printf("\n _______________________");
		
		printf("\n\n Digite dois dígitos: (Ex.: 1 2) ");
		scanf("%i %i", &num1, &num2);
		
		printf("\n\n _________________________________");
		
		if(num1 > num2){
			
			printf("\n\n Decrescente |\n\n");
			system("pause");
		} else if(num2 > num1){
			
			printf("\n\n Crescente \n\n");
			system("pause");
		} else if(num1==num2){
			
			printf("\n\n Muito obrigado por utilizar o Software! =D \n\n");
			system("pause");
		} else{
			
			printf("\n\n Erro \n\n");
			system("pause");
		} 
		
		system("cls");
	}while(num1!=num2);	
	
	return 0;
}
