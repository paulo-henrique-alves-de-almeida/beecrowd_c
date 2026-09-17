#include <stdio.h>
 
int main() {
	double salario, vendas, total;
	scanf("%*50s %lf %lf", &salario, &vendas);
	total = salario + 0.15 * vendas;
	printf("TOTAL = R$ %.2lf\n", total);
	 
    return 0;
}
