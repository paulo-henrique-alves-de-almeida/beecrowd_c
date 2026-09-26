#include <stdio.h>
 
int main() {
	int n, menor, posicao, i = 0;
	scanf("%d", &n);
	int x[n];
	
	for (i; i < n; i++) {
		scanf("%d", &x[i]);
	}
	
	i = 1;
	menor = x[0];
	posicao = 0;
	
	for (i; i < n; i++) {
		if (x[i] < menor) {
			menor = x[i];
			posicao = i;
		}
	}
	
	printf("Menor valor: %d\n", menor);
	printf("Posicao: %d\n", posicao);
 
    return 0;
}
