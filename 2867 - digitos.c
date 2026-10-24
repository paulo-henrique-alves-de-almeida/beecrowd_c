#include <stdio.h>
#include <math.h>

int main() {
	double digitos;
	int c, i, n, m;
	scanf("%d", &c);
	
	for (i = 1; i <= c; i++) {
		scanf("%d %d", &n, &m);
		digitos = floor(m * log10(n)) + 1;
		
		printf("%.0lf\n", digitos);
	}
 
    return 0;
}
