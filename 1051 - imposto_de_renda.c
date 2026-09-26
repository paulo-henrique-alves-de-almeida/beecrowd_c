#include <stdio.h>
 
int main() {
	float salario, imposto;
	scanf("%f", &salario);
	
	if (salario < 2000) {
		printf("Isento\n");
	} else {
		salario -= 2000;
		
		if (salario <= 1000) {
			imposto = salario * 0.08;
		} else {
			imposto = 1000 * 0.08;
			salario -= 1000;
			
			if (salario <= 1500) {
				imposto += salario * 0.18;
			} else {
				imposto += 1500 * 0.18;
				salario -= 1500;
				
				if (salario > 0) {
					imposto += salario * 0.28;
				}
			}
		}
		
		printf("R$ %.2f\n", imposto);
	}
 
    return 0;
}
