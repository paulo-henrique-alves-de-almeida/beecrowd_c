#include <stdio.h>
 
int main() {
	int qtd, i;
	float valor, total;
	total = 0;
	
	for (i = 1; i <= 2; i++) {
		scanf("%*d %d %f", &qtd, &valor);
		total = total + valor * qtd;
	}
	
	printf("VALOR A PAGAR: R$ %.2f\n", total);
 
    return 0;
}
