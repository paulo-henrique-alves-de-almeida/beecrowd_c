#include <stdio.h>
 
int main() {
	int n[20], troca, i;
	
	for (i = 0; i < 20; i++) {
		scanf("%d", &n[i]);
	}
	
	for (i = 0; i < 20 / 2; i++) {
		troca = n[i];
		n[i] = n[20 - 1 - i];
		n[20 - 1 - i] = troca;
	}
	
	for (i = 0; i < 20; i++) {
		printf("N[%d] = %d\n", i, n[i]);
	}
 
    return 0;
}
