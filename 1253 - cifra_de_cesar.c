#include <stdio.h>
 
int main() {
	char string[51];
	int n, i, j, chave;
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		scanf("%50s %d", &string, &chave);
		
		for (j = 0; string[j] != '\0'; j++) {
			string[j] = (string[j] - 'A' - chave + 26) % 26 + 'A';
		}
		
		printf("%s\n", string);
	}
 
    return 0;
}
