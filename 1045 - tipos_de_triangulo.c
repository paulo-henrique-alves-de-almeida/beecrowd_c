#include <stdio.h>
 
int main() {
	double a, b, c, troca;
	scanf("%lf %lf %lf", &a, &b, &c);
	
	if (a < b) {
		troca = a;
		a = b;
		b = troca;
	}
	if (a < c) {
		troca = a;
		a = c;
		c = troca;
	}
	
	if (a >= b + c) {
		printf("NAO FORMA TRIANGULO\n");
	} else if (a * a == b * b + c * c) {
		printf("TRIANGULO RETANGULO\n");
	} else if (a * a > b * b + c * c) {
		printf("TRIANGULO OBTUSANGULO\n");
	} else if (a * a < b * b + c * c) {
		printf("TRIANGULO ACUTANGULO\n");
	}
	
	if (a == b && b == c) {
		printf("TRIANGULO EQUILATERO\n");
	} else if ((a == b && b != c) || (b == c && a != b) || (a == c && a != b)) {
		printf("TRIANGULO ISOSCELES\n");
	}
	
    return 0;
}
