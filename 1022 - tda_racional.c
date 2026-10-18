#include <stdio.h>
#include <stdlib.h>

long long mdc(int a, int b) {
	long long resto;
	
	while (b != 0) {
		resto = a % b;
		a = b;
		b = resto;
	}
	
	return abs(a);
}

int main() {
	char operacao[2];
	int n, i, numerador_x, numerador_y, denominador_x, denominador_y;
	long long numerador, denominador;
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		scanf("%d / %d %c %d / %d", &numerador_x, &denominador_x, &operacao[0], &numerador_y, &denominador_y);
		
		if (operacao[0] == '+') {
			numerador = numerador_x * denominador_y + numerador_y * denominador_x;
			denominador = denominador_x * denominador_y;
		} else if (operacao[0] == '-') {
			numerador = numerador_x * denominador_y - numerador_y * denominador_x;
			denominador = denominador_x * denominador_y;
		} else if (operacao[0] == '*') {
			numerador = numerador_x * numerador_y;
			denominador = denominador_x * denominador_y;
		} else {
			numerador = numerador_x * denominador_y;
			denominador = denominador_x * numerador_y;
		}
		
		if (denominador < 0) {
			denominador *= -1;
			numerador *= -1;
		}
		
		printf("%lld/%lld = %lld/%lld\n", numerador, denominador, numerador / mdc(numerador, denominador), denominador / mdc(numerador, denominador));
	}
	
    return 0;
}
