#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
int idade;

printf("\nDigite sua idade: ");	
scanf("%i" ,&idade);	
	

if(idade >= 18){
printf("\n Acesso permitido");	
} else{
printf("\n Acesso negado");	
}
	

return 0;	
	
}
