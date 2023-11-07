#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

int valorCompra;
int diaCompra;
float desconto;
float valorFinal;

printf("\t\t\t\tDias da semana:    ");
printf("\n 1 - Domingo  ");
printf("\n 2 - Segunda  ");
printf("\n 3 - Terça  ");
printf("\n 4 - Quarta  ");
printf("\n 5 - Quinta  ");
printf("\n 6 - Sexta  ");
printf("\n 7 - Sábado  ");
//printf("\n -------------------------------------------------------------------------------");
//printf("Compras acima de R$ 100,00 = deconto de 10%");
//printf("Compras acima de R$ 100,00 = deconto de 15%");

printf("\n \n \n Digite o valor da compra: ");
scanf("%i" ,&valorCompra);

printf("\n Digite o dia da compra: ");
scanf("%i" ,&diaCompra);

switch (diaCompra){
	
case 1:

if(valorCompra > 100){
desconto = (valorCompra * 0.15);
valorFinal = valorCompra - desconto;
printf("\n Valor da compra após o desconto: %.2f" ,valorFinal);	
} else {
printf("Valor da compra: %i" ,valorCompra);	
}
break;		

case 2:
if(valorCompra > 100){
desconto = (valorCompra * 0.10);
valorFinal = valorCompra - desconto;
printf("\n Valor da compra após o desconto: %.2f" ,valorFinal);		
} else {
printf("Valor da compra: %i" ,valorCompra);	
}
break;

case 3:
if(valorCompra > 100){
desconto = (valorCompra * 0.10);
valorFinal = valorCompra - desconto;
printf("\n Valor da compra após o desconto: %.2f" ,valorFinal);		
} else {
printf("Valor da compra: %i" ,valorCompra);	
}
break;

case 4:
if(valorCompra > 100){
desconto = (valorCompra * 0.10);
valorFinal = valorCompra - desconto;
printf("\n Valor da compra após o desconto: %.2f" ,valorFinal);		
} else {
printf("Valor da compra: %i" ,valorCompra);	
}
break;

case 5:
if(valorCompra > 100){
desconto = (valorCompra * 0.10);
valorFinal = valorCompra - desconto;
printf("\n Valor da compra após o desconto: %.2f" ,valorFinal);		
} else {
printf("Valor da compra: %i" ,valorCompra);	
}
break;

case 6:
if(valorCompra > 100){
desconto = (valorCompra * 0.10);
valorFinal = valorCompra - desconto;
printf("\n Valor da compra após o desconto: %.2f" ,valorFinal);		
} else {
printf("Valor da compra: %i" ,valorCompra);	
}
break;

case 7:
if(valorCompra > 100){
desconto = (valorCompra * 0.15);
valorFinal = valorCompra - desconto;
printf("\n Valor da compra após o desconto: %.2f" ,valorFinal);		
} else {
printf("Valor da compra: %i" ,valorCompra);	
}
break;

default:
printf("\n Opção inválida");
if(valorCompra <= 100){
printf("\n Valor da compra: %i" ,valorCompra);	
} else {
printf("Valor da compra: %i" ,valorCompra);	
}

return 0;
}
}
