#include <stdio.h>
 
int main() {
	int num, maior = 0, posicao_maior, i = 0;
	
	for (i; i < 100; i++) {
		scanf("%d", &num);
		
		if (num > maior) {
			maior = num;
			posicao_maior = i + 1;
		}
	}
	
	printf("%d\n%d\n", maior, posicao_maior);
 
    return 0;
}
