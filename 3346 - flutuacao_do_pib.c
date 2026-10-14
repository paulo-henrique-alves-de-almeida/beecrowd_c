#include <stdio.h>
 
int main() {
	double f[2], percentual;
	scanf("%lf %lf", &f[0], &f[1]);
	
	percentual = ((100 + f[0]) * (100 + f[1]) / 100) - 100;
	
	printf("%.6f\n", percentual);
 
    return 0;
}
