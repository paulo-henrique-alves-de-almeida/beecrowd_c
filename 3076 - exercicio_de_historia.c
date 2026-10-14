#include <stdio.h>
 
int main() {
	int n, seculo;
	
	while (scanf("%d", &n) != EOF) {
		
		seculo = n / 100;
		
		if (n % 100 != 0) {
			seculo++;
		}
		
		printf("%d\n", seculo);
	}
 
    return 0;
}
