#include <stdio.h>
 
int main() {
	int n, brancas;
	scanf("%d", &n);
	
	brancas = (n * n) / 2;
	
	if (n % 2 == 1) {
		brancas++;
	}
	
	printf("%d casas brancas e %d casas pretas\n", brancas, (n * n) - brancas);
 
    return 0;
}
