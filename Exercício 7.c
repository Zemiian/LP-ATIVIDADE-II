#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

int opcao;


printf("\t\t\t\tProdutos:    ");
printf("\n 1 - Novo jogo  ");
printf("\n 2 - Carregar jogo ");
printf("\n 3 - Configurações  ");

printf("\n \n Escolha uma opção: ");
scanf("%i" ,&opcao);

switch (opcao){
	
case 1:
printf("Jogo iniciado");
break;

case 2:
printf("Jogo carregado");
break;	

case 3:
printf("\n Menu de configuração: ");
printf("\n Vídeo");
printf("\n Áudio");
printf("\n Legenda");
break;	

return 0;

}
}
