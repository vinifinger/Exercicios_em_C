/* ) Elabore um algoritmo que dada a idade de um nadador classifique-o em uma das
seguintes categorias:
Infantil A 5 a 7 anos
Infantil B 8 a 11 anos
Juvenil A 12 a 13 anos
Juvenil B 14 a 17 anos
Adultos Maiores de 18 anos */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int idade;

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	printf("\n Informe a idade: ");
	scanf("%i", &idade);
	
	if(idade >= 5 && idade <= 7)
	{
		printf("\n Categoria: Infantil A \n");
	} else if ( idade >= 8 && idade <= 11)
	{
		printf("\n Categoria: Infantil B \n");
	} else if ( idade >= 12 && idade <= 13)
	{
		printf("\n Categoria: Juvenil A \n");
	} else if ( idade >= 14 && idade <= 17)
	{
		printf("\n Categoria: Juvenil B \n");
	} else if ( idade >= 18)
	{
		printf("\n Categoria: Adulto \n");
	} else
		printf("\n Não temos categoria para essa idade \n");
	
	
	system("pause");
	return 0;
}
