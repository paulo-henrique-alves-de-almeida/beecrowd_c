#include <stdio.h>
 
int main() {
	int x[10], i = 0;
	
	for (i; i < 10; i++) {
		scanf("%d", &x[i]);
		
		if (x[i] < 1) {
			x[i] = 1;
		}
		
		printf("X[%d] = %d\n", i, x[i]);
	}
 
    return 0;
}
