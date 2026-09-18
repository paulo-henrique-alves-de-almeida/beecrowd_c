#include <stdio.h>
 
int main() {
	int codigo, quantidade;
	float preco;
	scanf("%d %d", &codigo, &quantidade);
	
	switch (codigo) {
		case 1:
			preco = 4.0;
			break;
		case 2:
			preco = 4.5;
			break;
		case 3:
			preco = 5.0;
			break;
		case 4:
			preco = 2.0;
			break;
		case 5:
			preco = 1.5;
			break;
	}
	
	printf("Total: R$ %.2f\n", preco * quantidade);
	
    return 0;
}
