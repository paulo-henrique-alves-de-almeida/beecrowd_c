#include <stdio.h>
 
int main() {
	int i = 0, novo_calculo;
	float notas[2], media;
	
	do {
		while (i < 2) {
			scanf("%f", &notas[i]);
			
			if (notas[i] < 0 || notas[i] > 10) {
				printf("nota invalida\n");
				continue;
			}
			
			i++;
		}
		
		media = (notas[0] + notas[1]) / 2;
		printf("media = %.2f\n", media);
		
		do {
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &novo_calculo);
		} while (novo_calculo != 1 && novo_calculo != 2);
		
	} while (novo_calculo == 1);
 
    return 0;
}
