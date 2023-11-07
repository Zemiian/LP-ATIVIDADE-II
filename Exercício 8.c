#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL,"portuguese");
    int numero;

printf("Digite um número inteiro positivo: ");
scanf("%d", &numero);


while (numero >= 0) {
	
switch (numero) {
	
case 0:
	
 printf("0 - Nada \n");
break;

case 1:
printf("1 - One \n");
break;

case 2:
printf("2 - Two \n");
break;

case 3:
printf("3 - Three \n");
break;

case 4:
printf("4 - Four \n");
break;

case 5:
printf("5 - Five \n");
break;

case 6:
printf("6 - Six \n");
break;

case 7:
printf("7 - Seven \n");
break;

case 8:
printf("8 - Eight \n");
break;

case 9:
printf("9 - Nine \n");
break;

case 10:
printf("10 - Ten \n");
break;

default:
printf("%d...\n", numero);
break;
}
numero--;
}

return 0;
}

