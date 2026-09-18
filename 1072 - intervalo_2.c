#include <stdio.h>
 
int main() {
	int n, x, i = 1, dentro = 0, fora = 0;
	scanf("%d", &n);
	
	for (i; i <= n; i++) {
		scanf("%d", &x);
		
		if (x >= 10 && x <= 20) {
			dentro++;
		} else {
			fora++;
		}
	}
	
	printf("%d in\n", dentro);
	printf("%d out\n", fora);
	
    return 0;
}
