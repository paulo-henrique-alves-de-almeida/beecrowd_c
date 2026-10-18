#include <stdio.h>
#include <math.h>

#define GAMMA 0.5772156649015329 // Constante de Euler-Mascheroni

int main() {
	int n = 100;
	double s;
	
	s = log(n) + GAMMA;
	printf("%.2lf\n", ceil(s * 100) / 100);
 
    return 0;
}
