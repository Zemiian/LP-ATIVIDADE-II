#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

int opcao;


printf("\t\t\t\tProdutos:    ");
printf("\n 1 - Novo jogo  ");
printf("\n 2 - Carregar jogo ");
printf("\n 3 - Configura��es  ");

printf("\n \n Escolha uma op��o: ");
scanf("%i" ,&opcao);

switch (opcao){
	
case 1:
printf("Jogo iniciado");
break;

case 2:
printf("Jogo carregado");
break;	

case 3:
printf("\n Menu de configura��o: ");
printf("\n V�deo");
printf("\n �udio");
printf("\n Legenda");
break;	

return 0;

}
}
