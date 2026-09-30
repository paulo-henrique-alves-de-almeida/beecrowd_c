#include <stdio.h>
 
int main() {
	int x, y, qtd_impar, soma_impar, n, i = 1, troca;
	scanf("%d", &n);
	
	for (i; i <= n; i++) {
		scanf("%d %d", &x, &y);
		
		if (x < y) {
			troca = x;
			x = y;
			y = troca;
		}
		
		if (x % 2 == 0) {
			x--;
		} else {
			x -= 2;
		}
		
		if (y % 2 == 0) {
			y++;
		} else {
			y += 2;
		}
		
		qtd_impar = ((x - y) / 2) + 1;
		soma_impar = qtd_impar * ((x + y) / 2);
		
		printf("%d\n", soma_impar);
	}
 
    return 0;
}
