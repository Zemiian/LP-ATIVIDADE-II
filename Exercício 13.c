#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    printf("Digite o primeiro número\n");
    scanf("%i", &num1);

    //fflush()

    printf("Digite o segundo número\n");
    scanf("%i", &num2);

    if(num1 > num2){
    printf("\nMaior número: %i " ,num1);
    printf("\n Menor número: %i" ,num2);
    }

    if(num2 > num1){
    printf("\n Maior número: %i" ,num2);
	printf("\n Menor número: %i" ,num1);
    }

    
return 0;

}
