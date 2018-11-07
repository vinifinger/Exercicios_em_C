/*
  * Programa: Simulador de investimento
  * Data de cria��o: [17/10/2018]
  * Autor: Vinicius M. Finger & Alexandre Carlos G. Junior & Guilherme R. Filippini
  * Vers�o: 2.0
  * �ltima atualiza��o: [25/10/2018] feita por Vinicius M. Finger
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float valor_inicial,valor_mensal,valor_juros,valor_juros_calc,valor_total,rendimento_mensal, rendimento_total, valor_deposito;
int tempo, menu1, menu2, menu3, vetor, resposta;

int main ()
{
	setlocale(LC_ALL,"portuguese");
	system("color 0E");
	
	menu1 = 99;
	menu2 = 99;
	
	printf("\n");
	printf(" ================= BEM - VINDO AO SOFTWARE DE INVESTIMENTO ================= ");
	printf("\n\n\n");
	while(menu1 != 0){
	menu1 = 99;
	menu2 = 99;
	valor_inicial = 0;
	valor_mensal = 0; 
	valor_juros = 0;
	valor_total = 0; 
	rendimento_mensal = 0;
	rendimento_total = 0;
	tempo = 0; 
	
		printf("  _________________________________________________________\n");
	   	printf(" |================= MENU DE OPERA��ES!!!! =================|\n");
	   	printf(" |                                                         |\n");
	   	printf(" | DIGITE 1 PARA REALIZAR A SIMULA��O DE INVESTIMENTO      |\n");
	   	printf(" | DIGITE 2 PARA REALIZAR O PLANEJAMENTO DE INVESTIMENTO   |\n");
	   	printf(" | DIGITE 0 PARA SAIR                                      |\n");
	   	printf(" |_________________________________________________________|\n");
	   	printf("\n\n"); // salta 2 linhas em branco
	   	printf(" Qual opera��o voc� deseja realizar? ");
	   	fflush(stdin);
	    scanf("%i", &menu1);
		
		system("cls");
		
		switch(menu1){
		
			case 0:
				
				printf(" MUITO OBRIGADO POR UTILIZAR O SOFTWARE!!! =D");
				
				printf("\n\n");
				printf("\n\n ");
			break;
			
			case 1:	
			
				printf(" ===== BEM - VINDO AO SIMULADOR DE INVESTIMENTO ===== ");
				
				printf("\n\n\n Informe o investimento inicial: R$ ");
				scanf("%f", &valor_inicial);
			
				printf("\n Informe o investimento mensal: R$ ");
				scanf("%f", &valor_mensal);
			
				printf("\n Informe a porcentagem de juros anual:  ");
				scanf("%f", &valor_juros);
			
				printf("\n Quantos meses de investimento: ");
				scanf("%i", &tempo);
			
				
				valor_juros_calc = valor_juros / 100;
				printf("valor_juros 1: %f\n", valor_juros_calc);
				
				valor_juros_calc = valor_juros_calc / 12;
				printf("valor_juros 2: %f\n", valor_juros_calc);
			
				rendimento_mensal = valor_inicial * valor_juros_calc;
				valor_total = valor_inicial + rendimento_mensal;
				printf("valor_total: %f\n", valor_total);
				
				rendimento_total = rendimento_mensal;
				for(int cont = 1; cont < tempo; cont++){
					
					rendimento_mensal = (valor_total + valor_mensal) * valor_juros_calc;
					
					valor_total = valor_total + rendimento_mensal + valor_mensal;
					
					rendimento_total = rendimento_total + rendimento_mensal;
					printf("%f , %f , %f , %i\n",rendimento_mensal, valor_total, rendimento_total, cont);
				
				}
				
				printf("=======================================================");	
			
				printf("\n\n Seu dinheiro final ser�: R$%0.2f", valor_total);
				printf("\n\n Seu rendimento total ser�: R$%0.2f", rendimento_total);
				
				printf("\n\n ");
				system("pause");
				system("cls");
			break;
			
			case 2:
				
				printf(" ===== BEM - VINDO AO PLANEJAMENTO DE INVESTIMENTO ===== ");
				
				printf("\n\n\n Informe o investimento inicial: R$ ");
				scanf("%f", &valor_inicial);
			
				printf("\n Informe o investimento mensal: R$ ");
				scanf("%f", &valor_mensal);
			
				printf("\n Informe a porcentagem de juros anual:  ");
				scanf("%f", &valor_juros);
			
				printf("\n Quantos meses de investimento: ");
				scanf("%i", &tempo);
				
				valor_juros_calc = valor_juros / 100;
				printf("valor_juros 1: %f\n", valor_juros_calc);
				
				valor_juros_calc = valor_juros_calc / 12;
				printf("valor_juros 2: %f\n", valor_juros_calc);
				
				rendimento_mensal = valor_inicial * valor_juros_calc;
				valor_total = valor_inicial + rendimento_mensal;
				printf("valor_total: %f\n", valor_total);
				
				rendimento_total = rendimento_mensal;
				for(int cont = 1; cont < tempo; cont++){
					
					rendimento_mensal = (valor_total  + valor_mensal) * valor_juros_calc;
					
					valor_total = valor_total + rendimento_mensal + valor_mensal;
					
					rendimento_total = rendimento_total + rendimento_mensal;
					printf("%f , %f , %f,  %i\n",rendimento_mensal, valor_total, rendimento_total, cont);
					
				}
				
				printf("=======================================================");	
			
				printf("\n\n Seu dinheiro final ser�: R$%0.2f", valor_total);
				printf("\n\n Seu rendimento total ser�: R$%0.2f", rendimento_total);
			
				printf("\n=======================================================\n\n\n");	
					
				while(menu2 != 0){
					
					printf("(Se SIM Digite 1. Para SAIR Digite 0) ");
					
					printf("\n\n Gostaria de fazer altera��es no seu planejamento? ");
					scanf("%i", &menu2);
					
					
						switch(menu2){
					
							case 1:
								
								while(menu3 != 2){
									
									menu3 = 0;
									
									system("cls");
									printf("(Se SIM Digite 1, se N�O Digite 2)");
								
									printf("\n\n Gostaria de alterar o valor mensal? ");
									fflush(stdin);
									scanf("%i", &menu3);
									
									switch(menu3){
								
										case 1: 
									
											system("cls");
									
											printf(" Seu valor atual � de R$ %0.2f", valor_mensal);
											printf("\n\n Qual o novo valor mensal: R$");
											scanf("%f", &valor_mensal);
											
											menu3 = 2;
										
										break; 	
								
										case 2:
											
										break;	
								
										default:
									
											printf(" OP��O INV�LIDA! TENTE NOVAMENTE COM OUTRO VALOR OU SOLICITE AJUDA!");
									
											printf("\n\n ");
											system("pause");
											system("cls");
											
										break;
									}
								}
								
								while(menu3 != 2){
								
									menu3 = 0;
								
									system("cls");
								
									printf("(Se SIM Digite 1, se N�O Digite 2)");
								
									printf("\n\n Gostaria de alterar a porcentagem de juros anual? ");
									fflush(stdin);
									scanf("%i", &menu3);
							
								
									switch(menu3){
									
										case 1: 
											system("cls");
										
											printf(" A porcentagem de juros atual � de %0.2f%%", valor_juros);
										
											printf("\n\n Qual a nova porcentagem de juros anual: ");
											scanf("%f", &valor_juros);	
										
											menu3 = 2;
										break; 	
									
										case 2:
											
										break;
									
										default:
										
											printf(" OP��O INV�LIDA! TENTE NOVAMENTE COM OUTRO VALOR OU SOLICITE AJUDA!");
										
											printf("\n\n ");
											system("pause");
											system("cls");
												
										break;
									}
								}
								
								while(menu3 != 2){
									
									menu3 = 0;
							
									system("cls");
									printf("(Se SIM Digite 1, se N�O Digite 2)");
									
									printf("\n\n Gostaria de realizar um deposito extra no seu investimento? ");
									fflush(stdin);
									scanf("%i", &menu3);
									
									switch(menu3){
										
										case 1: 
											
											system("cls");
											
											printf("\n\n Digite o valor do deposito: R$");
											scanf("%f", &valor_deposito);	
											
											menu3 = 2;
											
										break; 	
										
										case 2:
											
										break;
										
										default:
											
											printf(" OP��O INV�LIDA! TENTE NOVAMENTE COM OUTRO VALOR OU SOLICITE AJUDA!");
											
											printf("\n\n ");
											system("pause");
											system("cls");
													
										break;
									}
								}
							
								system("cls");
								
								printf("\n Por quantos meses gostaria de fazer o investimento? ");
								scanf("%i", &tempo);
								
								system("cls");
								
								if(resposta > 0){
												
									valor_juros_calc = valor_juros / 100;
									printf("valor_juros 1: %f\n", valor_juros_calc);
									
									valor_juros_calc = valor_juros_calc / 12;
									printf("valor_juros 2: %f\n", valor_juros_calc);
									
									rendimento_mensal = (valor_total + valor_deposito) * valor_juros_calc;
									printf("rendimento_mensal: %f\n", rendimento_mensal);
									
									valor_total = valor_total + rendimento_mensal + valor_deposito;
									printf("valor_total: %f\n", valor_total);
									
									rendimento_total = rendimento_total + rendimento_mensal;
									printf("rendimento_total %f\n", rendimento_total);
									
									for(int cont = 1; cont < tempo; cont++){
										
										rendimento_mensal = (valor_total + valor_mensal) * valor_juros_calc;
										
										valor_total = valor_total + rendimento_mensal + valor_mensal;
										
										rendimento_total = rendimento_total + rendimento_mensal;
										printf("%f , %f , %f,  %i\n",rendimento_mensal, valor_total, rendimento_total, cont);
										
									}
							
									printf("=======================================================");	
					
									printf("\n\n Seu dinheiro final ser�: R$%0.2f", valor_total);
									printf("\n\n Seu rendimento total ser�: R$%0.2f", rendimento_total);
						
								
								}
						
							break;
					
							case 0:
							
							break;	
					
							default: 
					
								printf(" OP��O INV�LIDA! TENTE NOVAMENTE COM OUTRO VALOR OU SOLICITE AJUDA!");
						
								printf("\n\n ");
								system("pause");
								system("cls");
							
							break;	
						}
				}
				//printf(" Ainda n�o configurado :c");
				
				printf("\n\n ");
				system("pause");
				system("cls");
			break; 	
			
			default:
				printf(" OP��O INV�LIDA! TENTE NOVAMENTE COM OUTRO VALOR OU SOLICITE AJUDA!");
				
				printf("\n\n ");
				system("pause");
				system("cls");
			break; 	
		}
	}
	return 0;
}

