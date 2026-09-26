#include <stdio.h>
#include <math.h>
 
int main() {
	int t, n, i = 1;
	scanf("%d", &t);
	
	for (i; i <= t; i++) {
		scanf("%d", &n);
		
		printf("Fib(%d) = %.0f\n", n, round(pow(((1 + sqrt(5)) / 2), n) / sqrt(5)));
	}
 
    return 0;
}
