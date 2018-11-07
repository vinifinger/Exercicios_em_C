/*
  * Programa: Calculadora
  * Data de criação: [30/08/2018]
  * Autor: Vinicius M. Finger & Guilherme R. Filippini
  * Versão: 3.0
  * Última atualização: [05/10/2018] feita por Vinicius M. Finger
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float num1, num2, resultado;

int menu;

int main() {
   setlocale(LC_ALL,"portuguese");
   printf(" ===== BEM - VINDO AO SOFTWARE!!! ===== \n\n");
   
   system("color 0E");
   
   // Início do Menu utilizando um while (Looping)
	do{
   		// Setando um valor para a condição do menu
   		menu = 99;
   		
   		// Limpando as váriaveis para realizar a operação evitando que após o looping não fique com dados da antiga operação
   		num1, num2 = 0;
   		
	   	printf("  _________________________________________________\n");
	   	printf(" |============= MENU DE OPERAÇÕES!!!! =============|\n");
	   	printf(" |                                                 |\n");
	   	printf(" | DIGITE 1 PARA REALIZAR A OPERAÇÃO DE SOMA       |\n");
	   	printf(" | DIGITE 2 PARA REALIZAR A OPERAÇÃO DE SUBTRAIR   |\n");
	   	printf(" | DIGITE 3 PARA REALIZAR A OPERAÇÃO DE DIVIDIR    |\n");
	   	printf(" | DIGITE 4 PARA REALIZAR A OPERAÇÃO DE MULTIPLICAR|\n");
	   	printf(" | DIGITE 0 PARA SAIR                              |\n");
	   	printf(" |_________________________________________________|\n");
	   	printf("\n\n"); // salta 2 linhas em branco
	   	printf(" Qual operação você deseja realizar? ");
	   	fflush(stdin);
	    scanf("%i", &menu);
    
	    // Selecionando opções do menu utilizando um switch para as escolhas
	   	switch(menu){
	   		
	   		// Caso o usuário digite 0
	   		case 0:
	   			printf("\n\n MUITO OBRIGADO POR UTILIZAR O MEU SOFTWARE!!! === :D");
	   			printf("\n\n"); // salta 2 linhas em branco
	   			system("pause");
	   		break;	
	   		
	   		// Caso o usuário digite 1
	   		case 1:
	   		
			   	printf("\n\n Digite o primeiro número: ");
	   			fflush(stdin);
				scanf("%f", &num1);
		
	   			printf("\n Digite o segundo número: ");
	   			fflush(stdin);
				scanf("%f", &num2);
				
	 	    	resultado = num1 + num2;
	   			printf("\n %.2f + %.2f = %.2f", num1, num2, resultado);
	    		
	   			printf("\n\n"); // salta 2 linhas em branco
	   			system("pause"); // pausa o sistema
	   			system("cls"); // limpa a tela do prompt
	   			
	   		break;
	   		
	   		// Caso o usuário digite 2
	   		case 2:
	   			
			   printf("\n\n Digite o primeiro número: ");
	   			fflush(stdin);
				scanf("%f", &num1);
		
	   			printf("\n Digite o segundo número: ");
	   			fflush(stdin);	   			
				scanf("%f", &num2);
	   
	  			resultado = num1 - num2;
	   			printf("\n %.2f - %.2f = %.2f", num1, num2, resultado);
	    
	   			printf("\n\n"); // salta 2 linhas em branco
	   			system("pause"); // pausa o sistema
	   			system("cls"); // limpa a tela do prompt
	   			
	   		break;	
	   		
	   		// Caso o usuário digite 3
	   		case 3:
	   			
	   			printf("\n\n Digite o primeiro número: ");
	   			fflush(stdin);
				scanf("%f", &num1);
		
	   			printf("\n Digite o segundo número: ");
				fflush(stdin);
				scanf("%f", &num2);
	   
	  			resultado = num1 / num2;
	   			printf("\n %.2f / %.2f = %.2f", num1, num2, resultado);
	    
	   			printf("\n\n"); // salta 2 linhas em branco
	   			system("pause"); // pausa o sistema
	   			system("cls"); // limpa a tela do prompt
	   			
	   		break;	
	   		
	   		// Caso o usuário digite 4
	   		case 4:
	   			
	   			printf("\n\n Digite o primeiro número: ");
	   			fflush(stdin);
				scanf("%f", &num1);
		
	   			printf("\n Digite o segundo número: ");
	   			fflush(stdin);
	   			scanf("%f", &num2);
	   			
	  			resultado = num1 * num2;
	   			printf("\n %.2f * %.2f = %.2f", num1, num2, resultado);
	    
	   			printf("\n\n"); // salta 2 linhas em branco
	   			system("pause"); // pausa o sistema
	   			system("cls"); // limpa a tela do prompt
	   			
	   		break;	
			   
			// Caso o usuário digite alguma opção não marcada anteriormente   
			default:
				
			printf("\n OPÇÃO INVÁLIDA"); 
			printf("\n\n"); // salta 2 linhas em branco
	   		system("pause"); // pausa o sistema
	   		system("cls"); // limpa a tela do prompt  	
		}
	
	}while (menu!=0);
	return 0;
}
