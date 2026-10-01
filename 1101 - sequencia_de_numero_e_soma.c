#include <stdio.h>
 
int main() {
	int m, n, soma, troca;
	
	while (1) {
		scanf("%d %d", &m, &n);
		
		if (m <= 0 || n <= 0) {
			break;
		}
		
		soma = 0;
		
		if (m > n) {
			troca = m;
			m = n;
			n = troca;
		}
		
		for (m; m <= n; m++) {
			printf("%d ", m);
			soma += m;
		}
		
		printf("Sum=%d\n", soma);
	}
 
    return 0;
}
