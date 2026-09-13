#include <stdio.h>
 
int main() {
	int valor, cem, cinquenta, vinte, dez, cinco, dois;
	scanf("%d", &valor);
	printf("%d\n", valor);
	
	cem = valor / 100;
	valor -= cem * 100;
	cinquenta = valor / 50;
	valor -= cinquenta * 50;
	vinte = valor / 20;
	valor -= vinte * 20;
	dez = valor / 10;
	valor -= dez * 10;
	cinco = valor / 5;
	valor -= cinco * 5;
	dois = valor / 2;
	valor -= dois * 2;
	
	printf("%d nota(s) de R$ 100,00\n", cem);	
	printf("%d nota(s) de R$ 50,00\n", cinquenta);
	printf("%d nota(s) de R$ 20,00\n", vinte);
	printf("%d nota(s) de R$ 10,00\n", dez);
	printf("%d nota(s) de R$ 5,00\n", cinco);
	printf("%d nota(s) de R$ 2,00\n", dois);
	printf("%d nota(s) de R$ 1,00\n", valor);
	
    return 0;
}
