#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

int idioma;


printf("\t\t\t\tIdiomas:    ");
printf("\n 1 - Ingl�s  ");
printf("\n 2 - Espanhol  ");
printf("\n 3 - Franc�s  ");

printf("\n \n Escolha seu idioma de prefer�ncia: ");
scanf("%i" ,&idioma);

switch (idioma){
	
case 1:
printf("Welcome");
break;

case 2:
printf("Bienvenido");
break;	

case 3:
printf("Accueillir");
break;	

return 0;

}
}
