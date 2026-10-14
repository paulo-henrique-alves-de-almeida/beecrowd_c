#include <stdio.h>
 
int main() {
	int i;
	char palavra[20];
	scanf("%s", &palavra);
	
	for (i = 0; i < 20; i++) {
		if (palavra[i] == '\0') {
			break;
		}
	}
	
	if (i >= 10) {
		printf("palavrao\n");
		return 0;
	}
	
	printf("palavrinha\n");
 
    return 0;
}
