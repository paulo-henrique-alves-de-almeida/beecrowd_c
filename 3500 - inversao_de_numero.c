#include <stdio.h>
 
int main() {
	int i;
	char num[4];
	scanf("%3s", &num);
	
	printf("Invertido = ");
	for (i = 2; i >= 0; i--) {
		printf("%c", num[i]);
	}
	
	printf("\n");
 
    return 0;
}
