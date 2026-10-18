#include <stdio.h>
 
int main() {
	char linha[100][51];
	int n, i, l, j, k;
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		int hash = 0;
		
		scanf("%d", &l);
		
		for (j = 0; j < l; j++) {
			scanf("%50s", linha[j]);
		}
		
		for (j = 0; j < l; j++) {
			for (k = 0; linha[j][k] != '\0'; k++) {
				hash += linha[j][k] - 'A' + j + k;
			}
		}
		
		printf("%d\n", hash);
	}
 
    return 0;
}
