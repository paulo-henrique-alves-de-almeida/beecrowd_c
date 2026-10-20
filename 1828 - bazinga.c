#include <stdio.h>
#include <string.h>
 
int main() {
	char escolha[2][10];
	int t, i, j;
	scanf("%d", &t);
	
	for (i = 1; i <= t; i++) {
		int escolhas[2][5] = {0};
		
		scanf("%9s %9s", escolha[0], escolha[1]);
		
		printf("Caso #%d: ", i);
		
		for (j = 0; j < 2; j++) {
			if (strcmp(escolha[j], "pedra") == 0) {
				escolhas[j][0] = 1;
			} else if (strcmp(escolha[j], "papel") == 0) {
				escolhas[j][1] = 1;
			} else if (strcmp(escolha[j], "tesoura") == 0) {
				escolhas[j][2] = 1;
			} else if (strcmp(escolha[j], "lagarto") == 0) {
				escolhas[j][3] = 1;
			} else if (strcmp(escolha[j], "Spock") == 0) {
				escolhas[j][4] = 1;
			}
		}
		
		if ((escolhas[0][2] && escolhas[1][1]) || (escolhas[0][1] && escolhas[1][0]) || (escolhas[0][0] && escolhas[1][3]) || (escolhas[0][3] && escolhas[1][4]) || (escolhas[0][4] && escolhas[1][2]) || (escolhas[0][2] && escolhas[1][3]) || (escolhas[0][3] && escolhas[1][1]) || (escolhas[0][1] && escolhas[1][4]) || (escolhas[0][4] && escolhas[1][0]) || (escolhas[0][0] && escolhas[1][2])) {
			printf("Bazinga!\n");
		} else if ((escolhas[0][0] && escolhas[1][0]) || (escolhas[0][1] && escolhas[1][1]) || (escolhas[0][2] && escolhas[1][2]) || (escolhas[0][3] && escolhas[1][3]) || (escolhas[0][4] && escolhas[1][4])) {
			printf("De novo!\n");
		} else {
			printf("Raj trapaceou!\n");
		}
	}
 
    return 0;
}
