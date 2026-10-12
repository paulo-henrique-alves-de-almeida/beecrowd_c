#include <stdio.h>
 
int main() {
	int i = 0;
	float notas[2], media;
	
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
 
    return 0;
}
