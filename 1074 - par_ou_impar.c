#include <stdio.h>
 
int main() {
	int n, x, i = 1;
	scanf("%d", &n);
	
	for (i; i <= n; i++) {
		scanf("%d", &x);
		
		if (x == 0) {
			printf("NULL\n");
		} else {
			if (x % 2 == 0) {
				printf("EVEN ");
			} else {
				printf("ODD ");
			}
			
			if (x > 0) {
				printf("POSITIVE\n");
			} else {
				printf("NEGATIVE\n");
			}
		}
	}
 
    return 0;
}
