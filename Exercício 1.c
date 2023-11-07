#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
int temperatura;

printf("\n Qual a temperatura externa? ");
scanf("%i" ,&temperatura);
	
if(temperatura > 25){
printf("Clima ensolarado");	
} else if(temperatura < 15){
printf("Clima chuvoso");
} else{
printf("Clima nublado");
}
	
return 0;	
	
}
