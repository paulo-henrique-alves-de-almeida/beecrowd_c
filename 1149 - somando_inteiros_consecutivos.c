#include <stdio.h>
 
int main() {
	int a, n, i, total = 0;
	scanf("%d", &a);
	
	do {
		scanf("%d", &n);
	} while (n <= 0);
	
	for (i = 0; i <= n - 1; i++) {
		total += a + i;
	}
	
	printf("%d\n", total);
 
    return 0;
}
