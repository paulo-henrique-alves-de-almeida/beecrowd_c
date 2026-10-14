#include <stdio.h>
#include <math.h>
 
int main() {
	int n, i;
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		printf("%d %d %.0lf\n", i, i * i, pow(i, 2) * i);
		printf("%d %d %.0lf\n", i, i * i + 1, pow(i, 2) * i + 1);
	}
 
    return 0;
}
