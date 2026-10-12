#include <stdio.h>
 
int main() {
	int n, x, i, j, eh_primo;
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		scanf("%d", &x);
		eh_primo = 1;
		
		if (x < 2) {
			eh_primo = 0;
			continue;
		}
		
		for (j = 2; j * j <= x; j++) {
			if (x % j == 0) {
				eh_primo = 0;
				break;
			}
		}
		
		if (eh_primo) {
			printf("Prime\n");
			continue;
		}
		
		printf("Not Prime\n");
	}
 
    return 0;
}
