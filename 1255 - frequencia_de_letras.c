#include <stdio.h>
 
int main() {
	char texto[201];
	int n, i, j, letra;
	scanf("%d", &n);
	getchar();
	
	for (i = 1; i <= n; i++) {
		int maior_frequencia = 0, frequencia[26] = {0};
		fgets(texto, 201, stdin);
		
		for (j = 0; texto[j] != '\0'; j++) {
			if (texto[j] == '\n') {
				texto[j] = '\0';
				continue;
			}
			
			if (texto[j] >= 'a' && texto[j] <= 'z') {
				letra = texto[j] - 'a';
			} else if (texto[j] >= 'A' && texto[j] <= 'Z') {
				letra = texto[j] - 'A';
			} else {
				continue;
			}
			
			frequencia[letra]++;
		}
		
		for (j = 0; j < 26; j++) {
			if (frequencia[j] > maior_frequencia) {
				maior_frequencia = frequencia[j];
			}
		}
		
		for (j = 0; j < 26; j++) {
			if (frequencia[j] == maior_frequencia) {
				printf("%c", j + 'a');
			}
		}
		
		printf("\n");
	} 
 
    return 0;
}
