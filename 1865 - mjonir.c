#include <stdio.h>
#include <string.h>
 
int main() {
	char nome[50];
	int n, i;
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		scanf("%49s %*d", nome);
		
		if (strcmp(nome, "Thor") == 0) {
			printf("Y\n");
			continue;
		}
		
		printf("N\n");
	}
 
    return 0;
}
