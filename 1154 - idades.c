#include <stdio.h>
 
int main() {
	int idade, soma, qtd_idade = 0;
	float media;
	
	while (1) {
		scanf("%d", &idade);
		
		if (idade < 0) {
			break;
		}
		
		soma += idade;
		qtd_idade++;
	}
	
	media = (float) soma / qtd_idade;
	printf("%.2f\n", media);
 
    return 0;
}
