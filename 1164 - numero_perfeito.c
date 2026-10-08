#include <stdio.h>
 
int main() {
	int n, x, i;
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &x);
		
		if (x == 6 || x == 28 || x == 496 || x == 8128 || x == 33550336) {
			printf("%d eh perfeito\n", x);
		} else {
			printf("%d nao eh perfeito\n", x);
		}
	}
 
    return 0;
}
