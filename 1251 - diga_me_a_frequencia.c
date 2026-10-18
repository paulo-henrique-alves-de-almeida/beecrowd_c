#include <stdio.h>
 
int main() {
	char texto[1001];
	int i, j = 0, k;
	
	while (scanf("%1000s", &texto) != EOF) {
		if (j == 1) {
			printf("\n");
		} else {
			j = 1;
		}
		
		int frequencia[128] = {0};
		
		for (i = 0; texto[i] != '\0'; i++) {
			frequencia[texto[i]]++;
		}
		
		for (i = 1; i <= 1000; i++) {
		    for (k = 127; k >= 0; k--) {
		        if (frequencia[k] == i) {
		            printf("%d %d\n", k, i);
		        }
		    }
		}
	}
 
    return 0;
}
