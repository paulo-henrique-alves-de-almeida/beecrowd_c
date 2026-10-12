#include <stdio.h>
 
int main() {
	int x, y, troca;
	scanf("%d %d", &x, &y);
	
	if (x > y) {
		troca = x;
		x = y;
		y = troca;
	}
	
	for (x++; x < y; x++) {
		if (x % 5 == 2 || x % 5 == 3) {
			printf("%d\n", x);
		}
	}
 
    return 0;
}
