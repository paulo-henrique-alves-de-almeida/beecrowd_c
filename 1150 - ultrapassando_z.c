#include <stdio.h>
 
int main() {
	int x, z, i, qtd_num = 1, soma;
	scanf("%d", &x);
	soma = x;
	
	while (1) {
		scanf("%d", &z);
		
		if (z > x) {
			break;
		}
	}
	
	for (i = x; soma <= z; i++) {
		soma += i + 1;
		qtd_num++;
	}
	
	printf("%d\n", qtd_num);
 
    return 0;
}
