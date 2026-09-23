#include <stdio.h>
 
int main() {
	float a, b, c, calculo;
	scanf("%f %f %f", &a, &b, &c);
	
	if (a < b + c && b < a + c && c < a + b) {
		calculo = a + b + c;
		printf("Perimetro = %.1f\n", calculo);
	} else {
		calculo = ((a + b) * c) / 2;
		printf("Area = %.1f\n", calculo);
	}
 
    return 0;
}
