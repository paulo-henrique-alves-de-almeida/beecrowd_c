#include <stdio.h>
#include <math.h>

int main() {
	int n, i, j, maior, ordem, numero;
	
	while (1) {
		scanf("%d", &n);
		
		if (n == 0) {
			break;
		}
		
		
		maior = pow(2, 2 * (n - 1));
		numero = maior;
		ordem = 0;
		
		while (numero >= 10) {
		    numero /= 10;
		    ordem++;
		}
		
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				if (j == n - 1) {
					printf("%*.0lf\n", ordem + 1, pow(2, i + j));
					continue;
				}
				
				printf("%*.0lf ", ordem + 1, pow(2, i + j));
			}
		}
		
		printf("\n");
	}
 
    return 0;
}
