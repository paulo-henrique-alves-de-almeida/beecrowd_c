#include <stdio.h>
 
int main() {
	int n, i = 1;
	scanf("%d", &n);
	
	for (i; i <= n * 4; i++) {
		if (i % 4 == 0) {
			printf("PUM\n");	
		} else {
			printf("%d ", i);
		}
	}
 
    return 0;
}
