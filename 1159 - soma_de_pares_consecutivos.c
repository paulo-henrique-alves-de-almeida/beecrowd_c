#include <stdio.h>
 
int main() {
	int n;
	
	while (1) {
		scanf("%d", &n);
		
		if (n % 2 != 0) {
			n++;
		} else if (n == 0) {
			break;
		} 
		
		int soma = n * 5 + 5 * (5 - 1);
		printf("%d\n", soma);
	};
 
    return 0;
}
