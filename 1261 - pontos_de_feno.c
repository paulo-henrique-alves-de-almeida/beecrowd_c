#include <stdio.h>
#include <string.h>

typedef struct {
	char palavra[50];
	double dolar;
} Ponto_de_Feno;

int main() {
	int m, n, i, j;
	scanf("%d %d", &m, &n);
	
	Ponto_de_Feno pontos_de_feno[m];
	char descricao[100];
	
	for (i = 0; i < m; i++) {
		scanf("%49s %lf", &pontos_de_feno[i].palavra, &pontos_de_feno[i].dolar);
	}
	
	for (i = 0; i < n; i++) {
		double pontuacao = 0;
		while (1) {
			scanf("%99s", &descricao);
			
			if (descricao[0] == '.') {
				break;
			}
			
			for (j = 0; j < m; j++) {
				if (strcmp(descricao, pontos_de_feno[j].palavra) == 0) {
					pontuacao += pontos_de_feno[j].dolar;
				}
			}
		}
		
		printf("%.0lf\n", pontuacao);
	}

    return 0;
}
