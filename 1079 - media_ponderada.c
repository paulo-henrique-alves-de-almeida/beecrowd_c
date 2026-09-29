#include <stdio.h>
 
int main() {
	int n, i = 1;
	float nota1, nota2, nota3, media;
	scanf("%d", &n);
	
	for (i; i <= n; i++) {
		scanf("%f %f %f", &nota1, &nota2, &nota3);
		media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / (2 + 3 + 5);
		
		printf("%.1f\n", media);
	}
 
    return 0;
}
