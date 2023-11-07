#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    
int num1, num2;
int resultado;
char conta;

printf("Digite o primeiro número: ");
scanf("%i", &num1);

printf("Digite o segundo número: ");
scanf("%i", &num2);

printf("Digite a conta desejada '+' para soma e '-' para subtração: ");
scanf(" %c", &conta);

switch (conta) {
case '+':
resultado = num1 + num2;
printf("\n O resultado da soma é: %i", resultado);
break;
case '-':
resultado = num1 - num2;
printf("\n O resultado da subtração é: %i", resultado);
break;
default:
printf("\n Operação inválida. Por favor, escolha + ou -");
break;
}

return 0;

}


