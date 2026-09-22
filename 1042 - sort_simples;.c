#include <stdio.h>
 
int main() {
	int num1, num2, num3, menor, medio, maior;
	scanf("%d %d %d", &num1, &num2, &num3);
	
	if (num1 < num2 && num1 < num3) {
		menor = num1;
		if (num2 < num3) {
			medio = num2;
			maior = num3;
		} else {
			medio = num3;
			maior = num2;
		}
	} else if (num2 < num1 && num2 < num3) {
		menor = num2;
		if (num1 < num3) {
			medio = num1;
			maior = num3;
		} else {
			medio = num3;
			maior = num1;
		}
	} else {
		menor = num3;
		if (num1 < num2) {
			medio = num1;
			maior = num2;
		} else {
			medio = num2;
			maior = num1;
		}
	}
	
	printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", menor, medio, maior, num1, num2, num3);
 
    return 0;
}
