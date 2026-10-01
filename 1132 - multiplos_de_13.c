#include <stdio.h>
 
int main() {
	int x, y, soma = 0, troca;
	scanf("%d %d", &x, &y);
	
	if (x > y) {
		troca = x;
		x = y;
		y = troca;
	}
	
	for (x; x <= y; x++) {
		if (x % 13 != 0) {
			soma += x;
		}
	}
	
	printf("%d\n", soma);
 
    return 0;
}
