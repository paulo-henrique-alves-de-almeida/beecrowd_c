#include <stdio.h>
 
int main() {
	int c, n, i;
	scanf("%d", &c);
	
	for (i = 1; i <= c; i++) {
		scanf("%d", &n);
		
		printf("%d\n", n % 2); 
	}
 
    return 0;
}
