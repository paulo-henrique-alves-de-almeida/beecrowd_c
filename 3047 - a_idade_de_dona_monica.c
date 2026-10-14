#include <stdio.h>
 
int main() {
	int m, a, b, terceiro, maior;
	scanf("%d %d %d", &m, &a, &b);
	terceiro = m - (a + b);
	
	if (a > b && a > terceiro) {
		maior = a;
	} else if (b > a && b > terceiro) {
		maior = b;
	} else {
		maior = terceiro;
	}
	
	printf("%d\n", maior);
 
    return 0;
}
