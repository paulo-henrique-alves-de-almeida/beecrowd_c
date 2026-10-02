#include <stdio.h>
 
int main() {
	char t;
	float valor, soma = 0;
	int linha, i;	
	scanf("%d %c", &linha, &t);
	
	for (i = 1; i <= 12 * linha; i++) {
		scanf("%*f");
	}
	
	for (i = 1; i <= 12; i++) {
		scanf("%f", &valor);
		soma += valor;
	}
	
	for (i = 1; i <= 12 * (11 - linha); i++) {
		scanf("%*f");
	}
	
	if (t == 'S') {
		printf("%.1f\n", soma);
	} else if (t == 'M') {
		printf("%.1f\n", soma / 12);
	}
 
    return 0;
}
