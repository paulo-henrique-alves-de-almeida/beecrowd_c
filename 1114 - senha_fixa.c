#include <stdio.h>
 
int main() {
	int senha, pin = 2002;
	
	do {
		scanf("%d", &senha);
		if (senha == pin) {
			printf("Acesso Permitido\n");
			break;
		} else {
			printf("Senha Invalida\n");
		}
	} while (senha != pin);
 
    return 0;
}
