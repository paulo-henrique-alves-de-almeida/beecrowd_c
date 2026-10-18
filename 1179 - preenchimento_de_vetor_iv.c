#include <stdio.h>
 
int main() {
	int numero, par[5], impar[5], qtd_par = 0, qtd_impar = 0, i, j;
	
	for (i = 1; i <= 15; i++) {
		scanf("%d", &numero);
		
		if (numero % 2 == 0) {
			par[qtd_par] = numero;
			qtd_par++;
			
			if (qtd_par == 5) {
				for (j = 0; j < 5; j++) {
					printf("par[%d] = %d\n", j, par[j]);
					par[j] = 0;
				}
				
				qtd_par = 0;
				continue;
			}
			
			continue;
		}
		
		impar[qtd_impar] = numero;
		qtd_impar++;
		
		if (qtd_impar == 5) {
			for (j = 0; j < 5; j++) {
				printf("impar[%d] = %d\n", j, impar[j]);
				impar[j] = 0;
			}
			
			qtd_impar = 0;	
			continue;
		}
	}
	
	for (i = 0; i < qtd_impar; i++) {
		printf("impar[%d] = %d\n", i, impar[i]);
	}
	
	for (i = 0; i < qtd_par; i++) {
		printf("par[%d] = %d\n", i, par[i]);
	}
	
    return 0;
}
