#include <stdio.h>
 
int main() {
	char genero[2];
	int n, i, masculino = 0, feminino = 0;
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		scanf("%*s %c", &genero[0]);
		
		if (genero[0] == 'M') {
			masculino++;
			continue;
		}
		
		feminino++;
	}
	
	printf("%d carrinhos\n", masculino);
	printf("%d bonecas\n", feminino);
 
    return 0;
}
