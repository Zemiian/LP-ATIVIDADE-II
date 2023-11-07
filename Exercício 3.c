#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
int nota;

printf("\nDigite sua nota: ");	
scanf("%i" ,&nota);	
	

if(nota >= 9){
printf("\n Excelente");	
} else if(nota >= 7 && nota < 9){
printf("\n Bom");	
} else if(nota >= 5 && nota < 7){
printf("\n Razoável");	
}else if(nota < 5){
printf("\n Insuficiente");	
}	

return 0;	
	
}
