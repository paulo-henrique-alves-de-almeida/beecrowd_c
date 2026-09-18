#include <stdio.h>
 
int main() {
	int n, x, y, i;
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		scanf("%d %d", &x, &y);
		
		if (y != 0) {
			printf("%.1f\n", (float) x / y);
		} else {
			printf("divisao impossivel\n");
		}
	}
 
    return 0;
}
