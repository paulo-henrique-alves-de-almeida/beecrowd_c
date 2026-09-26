#include <stdio.h>
 
int main() {
	int n, x, y, i = 1;
	scanf("%d", &n);
	
	for (i; i <= n; i++) {
		scanf("%d %d", &x, &y);
		if (x % 2 == 0) {
			x++;
		}
		
		printf("%d\n", y * x + y * (y - 1));
	}
 
    return 0;
}
