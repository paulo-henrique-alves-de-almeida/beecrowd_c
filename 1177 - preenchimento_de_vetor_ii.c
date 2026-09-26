#include <stdio.h>
 
int main() {
	int t, n[1000], i = 0, contador = 0;
	scanf("%d", &t);
	
	for (i; i < 1000; i++) {
		n[i] = contador;
		printf("N[%d] = %d\n", i, contador);
		
		if (contador < t - 1) {
			contador++;
		} else {
			contador = 0;
		}
	}
 
    return 0;
}
