#include <stdio.h>
 
int main() {
	int num, par = 0, positivo = 0, negativo = 0, i = 1;
	
	for (i; i <= 5; i++) {
		scanf("%d", &num);
		
		if (num % 2 == 0) {
			par++;
		}
		
		if (num > 0) {
			positivo++;
		} else if (num < 0) {
			negativo++;
		}
	}
	
	printf("%d valor(es) par(es)\n", par);
	printf("%d valor(es) impar(es)\n", 5 - par);
	printf("%d valor(es) positivo(s)\n", positivo);
	printf("%d valor(es) negativo(s)\n", negativo);
 
    return 0;
}
