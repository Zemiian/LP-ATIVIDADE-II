#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
int soma = 0;
int numero;
int contador = 0;
float media;

do{

printf("Digite um numero: ");
scanf("%i" ,&numero);
	
if(numero >0){
soma += numero;
contador++;	
		
}
}while(numero > 0);	
	
media = soma / contador;
   
printf("Media: %.2f" ,media);
   
return 0;	
	
	
	
	
	
	
}	
