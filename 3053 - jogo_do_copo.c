#include <stdio.h>
 
int main() {
	char posicao[2], copos[4] = {0};
	int n, i, movimento;
	scanf("%d", &n);
	scanf(" %c", &posicao[0]);
	copos[posicao[0] - 'A'] = 1;
	
	for (i = 1; i <= n; i++) {
		scanf("%d", &movimento);
		
		switch (movimento) {
			case 1:
				copos[3] = copos[0];
				copos[0] = copos[1];
				copos[1] = copos[3];
				break;
			case 2:
				copos[3] = copos[1];
				copos[1] = copos[2];
				copos[2] = copos[3];
				break;
			case 3:
				copos[3] = copos[0];
				copos[0] = copos[2];
				copos[2] = copos[3];
				break;
		}
	}
	
	if (copos[0]) {
		printf("A\n");
	} else if (copos[1]) {
		printf("B\n");
	} else if (copos[2]) {
		printf("C\n");
	}
 
    return 0;
}
