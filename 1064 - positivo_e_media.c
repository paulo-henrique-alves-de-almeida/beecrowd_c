#include <stdio.h>
 
int main() {
	int qtd_positivo = 0, i = 1;
	float num, soma_positivo = 0, media_positivo;
	
	for (i; i <= 6; i++) {
		scanf("%f", &num);
		
		if (num > 0) {
			qtd_positivo++;
			soma_positivo += num;
		}
	}
	
	printf("%d valores positivos\n", qtd_positivo);
	media_positivo = (float) soma_positivo / qtd_positivo;
	printf("%.1f\n", media_positivo);
	
    return 0;
}
