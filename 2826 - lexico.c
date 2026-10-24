#include <stdio.h>
#include <string.h>

int main() {
	char palavras[2][21];
	int i, j;
	
	scanf("%20s %20s", palavras[0], palavras[1]);
	
	if (strcmp(palavras[0], palavras[1]) < 0) {
		printf("%s\n%s\n", palavras[0], palavras[1]);
		return 0;
	}
	
	printf("%s\n%s\n", palavras[1], palavras[0]);
 
    return 0;
}
