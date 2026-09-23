#include <stdio.h>
 
int main() {
	float salario, novo_salario;
	int percentual;
	scanf("%f", &salario);
	
	if (salario <= 400) { 
		percentual = 15;
	} else if (salario <= 800) {
		percentual = 12;
	} else if (salario <= 1200) {
		percentual = 10;
	} else if (salario <= 2000) {
		percentual = 7;
	} else {
		percentual = 4;
	}
	
	novo_salario = salario * (1 + (float) percentual / 100);
	printf("Novo salario: %.2f\n", novo_salario);
	printf("Reajuste ganho: %.2f\n", novo_salario - salario);
	printf("Em percentual: %d %%\n", percentual);
 
    return 0;
}
