#include <stdio.h>
 
int main() {
	int n, i, numero;
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		scanf("%d", &numero);
		printf("resposta %d: %d\n", i, numero);
	}
 
    return 0;
}
