#include <stdio.h>
 
int main() {
	int n, i = 2;
	scanf("%d", &n);
	
	if (n % 2 == 1) {
		n--;
	}
	
	for (i; i <= n; i += 2) {
		printf("%d^2 = %d\n", i, i * i);
	}
 
    return 0;
}
