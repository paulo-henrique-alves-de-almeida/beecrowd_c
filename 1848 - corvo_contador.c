#include <stdio.h>
#include <string.h>
#include <math.h>
 
int main() {
	char corvo[4];
	int qtd_gritos = 0, soma = 0, i;
	
	while (qtd_gritos < 3) {
		scanf("%3s", corvo);
		
		if (strcmp(corvo, "caw") == 0) {
			scanf("%*s");
			
			printf("%d\n", soma);
			qtd_gritos++;
			soma = 0;
			continue;
		}
		
		for (i = 0; i < 3; i++) {
		    if (corvo[i] == '*') {
		        soma += pow(2, 2 - i);
		    }
		}
	}
 
    return 0;
}
