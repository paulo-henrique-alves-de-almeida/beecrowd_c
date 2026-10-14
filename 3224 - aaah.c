#include <stdio.h>
 
int main() {
	int tamanho[2] = {0}, i, j;
	char aaah[2][1001];
	scanf("%s %s", aaah[0], aaah[1]);
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j <= 1000; j++) {
			if (aaah[i][j] == 'a') {
				tamanho[i]++;
				continue;
			}
			
			break;
		}
	}
	
	if (tamanho[0] >= tamanho[1]) {
		printf("go\n");
		return 0;
	}
	
	printf("no\n");
 
    return 0;
}
