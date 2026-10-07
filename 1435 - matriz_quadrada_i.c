#include <stdio.h>
 
int main() {
	int n, i, j, menor;
	
	while (1) {
		scanf("%d", &n);
		
		if (n <= 0) {
			break;
		}
		
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				menor = i;
				
				if (j < menor) {
                    menor = j;
                }
				
				if (n - i - 1 < menor) {
                    menor = n - i - 1;
                }
				
				if (n - j - 1 < menor) {
                    menor = n - j - 1;
                }
				
				if (j == n - 1) {
					printf("%3d\n", menor + 1);
					continue;
				}
				
				printf("%3d ", menor + 1);
			}
		}
		
		printf("\n");
	}
 
    return 0;
}
