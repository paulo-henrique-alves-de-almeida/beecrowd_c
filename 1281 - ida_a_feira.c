#include <stdio.h>
#include <string.h>

typedef struct {
	char nome[100];
	double valor;
} Produto;

int main() {
	int n, m, i, j, p, k;
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		char nome_produto[100];
		int quantidade;
		double total = 0;
		Produto produto[100];
	
		scanf("%d", &m);
		
		for (j = 0; j < m; j++) {
			scanf("%99s %lf", &produto[j].nome, &produto[j].valor);
		}
		
		scanf("%d", &p);
		
		for (j = 0; j < p; j++) {
			scanf("%99s %d", &nome_produto, &quantidade);
			
			for (k = 0; k < m; k++) {
				if (strcmp(produto[k].nome, nome_produto) == 0) {
					total += produto[k].valor * quantidade;
					break;
				}
			}
		}
		
		printf("R$ %.2lf\n", total);
	}
 
    return 0;
}
