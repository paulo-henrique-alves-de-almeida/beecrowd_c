#include <stdio.h>
 
int main() {
	int x, i = 0;
	scanf("%d", &x);
	if (x % 2 == 0) {
		x++;
	}
	
	for (i; i < (6 * 2); i += 2) {
		printf("%d\n", x + i);
	}
 
    return 0;
}
