#include <stdio.h>
 
int main() {
	char t;
	float valor, soma = 0;
	int i, j, area_verde;
	scanf(" %c", &t);

	for (i = 0; i < 12; i++) {
		for (j = 0; j < 12; j++) {
			if (j < 11 - i) {
				scanf("%f", &valor);
				soma += valor;
				continue;
			}
			
			scanf("%*f");
		}
	}
	
	if (t == 'S') {
		printf("%.1f\n", soma);
	} else if (t == 'M') {
		area_verde = 11 * (11 + 1) / 2;
		printf("%.1f\n", soma / area_verde);
	}
 
    return 0;
}
