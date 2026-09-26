#include <stdio.h>
#include <math.h>
 
int main() {
	int i = 0;
	double x, n[100];
	scanf("%lf", &x);
	
	for (i; i < 100; i++) {
		n[i] = x / pow(2, i);
		printf("N[%d] = %.4lf\n", i, n[i]);
	}
 
    return 0;
}
