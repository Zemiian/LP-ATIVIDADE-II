#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL,"portuguese");

int numero;
int pares = 0,impares = 0;
int quantidadeGeral = 0;
int somaGeral = 0;
int somaPares = 0;
float mediaGeral;
float mediaPares;

do {
printf("Digite o %dº número: ", quantidadeGeral + 1);
scanf("%d",&numero);    

if (numero > 0) {
somaGeral += numero;
quantidadeGeral++;

if (numero % 2 == 0) {
somaPares += numero;
pares++;
} else {
impares++;
}
           
}
} while (numero != 0);

  
mediaGeral = somaGeral / quantidadeGeral;
mediaPares = somaPares / pares;

printf("Quantidade números pares: %d \n", pares);
printf("Quantidade números ímpares: %d \n", impares);
printf("Média de números pares: %.1f \n", mediaPares);

   
return 0;
}
