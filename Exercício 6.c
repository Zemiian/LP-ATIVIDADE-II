#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

int produto;


printf("\t\t\t\tProdutos:    ");
printf("\n 1 - Camiseta  ");
printf("\n 2 - Cal�a  ");
printf("\n 3 - Sapato  ");

printf("\n \n Escolha um produto: ");
scanf("%i" ,&produto);

switch (produto){
	
case 1:
printf("\n Camiseta");
printf("\n Pre�o : R$30,00");
break;

case 2:
printf("\n Cal�a");
printf("\n Pre�o : R$60,00");
break;	

case 3:
printf("\n Sapato");
printf("\n Pre�o : R$100,00");
break;	

return 0;

}
}
