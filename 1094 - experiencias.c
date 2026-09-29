#include <stdio.h>
 
int main() {
	int n, i = 1, quantia, qtd_cobaia = 0, qtd_rato = 0, qtd_sapo = 0, qtd_coelho = 0;
	char tipo;
	float porcentagem_rato, porcentagem_sapo, porcentagem_coelho;
	scanf("%d", &n);
	
	for (i; i <= n; i++) {
		scanf("%d %c", &quantia, &tipo);
		
		qtd_cobaia += quantia;
		
		switch (tipo) {
			case 'R':
				qtd_rato += quantia;
				break;
			case 'S':
				qtd_sapo += quantia;
				break;
			case 'C':
				qtd_coelho += quantia;
				break;
			default:
				printf("Tipo incorreto.");
		}
	}
	
	porcentagem_rato = (float) qtd_rato / qtd_cobaia * 100;
	porcentagem_sapo = (float) qtd_sapo / qtd_cobaia * 100;
	porcentagem_coelho = (float) qtd_coelho / qtd_cobaia * 100;
	
	printf("Total: %d cobaias\n", qtd_cobaia);
	printf("Total de coelhos: %d\n", qtd_coelho);
	printf("Total de ratos: %d\n", qtd_rato);
	printf("Total de sapos: %d\n", qtd_sapo);
	printf("Percentual de coelhos: %.2f %%\n", porcentagem_coelho);
	printf("Percentual de ratos: %.2f %%\n", porcentagem_rato);
	printf("Percentual de sapos: %.2f %%\n", porcentagem_sapo);
 
    return 0;
}
