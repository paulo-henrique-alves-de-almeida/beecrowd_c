#include <stdio.h>
#include <string.h>
 
int main() {
	char perna[10];
	
	while (scanf("%9s", perna) != EOF) {
		if (strcmp(perna, "esquerda") == 0) {
			printf("ingles\n");
			continue;
		}
		
		if (strcmp(perna, "direita") == 0) {
			printf("frances\n");
			continue;
		}
		
		if (strcmp(perna, "nenhuma") == 0) {
			printf("portugues\n");
			continue;
		}
		
		if (strcmp(perna, "as") == 0) {
			scanf("%5s", perna);
			
			if (strcmp(perna, "duas") == 0) {
				printf("caiu\n");
			}
		}
	}
 
    return 0;
}
