#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    
int num1, num2;
int resultado;
char conta;

printf("Digite o primeiro n�mero: ");
scanf("%i", &num1);

printf("Digite o segundo n�mero: ");
scanf("%i", &num2);

printf("Digite a conta desejada '+' para soma e '-' para subtra��o: ");
scanf(" %c", &conta);

switch (conta) {
case '+':
resultado = num1 + num2;
printf("\n O resultado da soma �: %i", resultado);
break;
case '-':
resultado = num1 - num2;
printf("\n O resultado da subtra��o �: %i", resultado);
break;
default:
printf("\n Opera��o inv�lida. Por favor, escolha + ou -");
break;
}

return 0;

}


