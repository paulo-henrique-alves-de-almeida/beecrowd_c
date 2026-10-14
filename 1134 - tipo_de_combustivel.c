#include <stdio.h>
 
int main() {
	int preferencia, alcool = 0, gasolina = 0, diesel = 0;
	
	do {
		scanf("%d", &preferencia);
		
		switch (preferencia) {
			case 1:
				alcool++;
				break;
			case 2:
				gasolina++;
				break;
			case 3:
				diesel++;
				break;
			case 4:
				break;
		}
	} while (preferencia != 4);
	
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", alcool);
	printf("Gasolina: %d\n", gasolina);
	printf("Diesel: %d\n", diesel);
 
    return 0;
}
