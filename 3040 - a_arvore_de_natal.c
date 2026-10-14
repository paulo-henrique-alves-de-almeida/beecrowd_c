#include <stdio.h>
 
int main() {
	int n, a, d, g, i;
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		scanf("%d %d %d", &a, &d, &g);
		
		if (a >= 200 && a <= 300 && d >= 50 && g >= 150) {
			printf("Sim\n");
			continue;
		}
		
		printf("Nao\n");
	}
 
    return 0;
}
