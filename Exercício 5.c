#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

int idioma;


printf("\t\t\t\tIdiomas:    ");
printf("\n 1 - Inglês  ");
printf("\n 2 - Espanhol  ");
printf("\n 3 - Francês  ");

printf("\n \n Escolha seu idioma de preferência: ");
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
