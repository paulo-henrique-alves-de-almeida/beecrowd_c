#include <stdio.h>
#include <string.h>

typedef struct {
	char nome[101];
	char par_ou_impar[6];
	int jogada;
} Jogador;

int main() {
	Jogador jogadores[2];
	int qt, i, par_ou_impar;
	scanf("%d", &qt);
	
	for (i = 0; i < qt; i++) {
		scanf("%100s %5s %100s %5s", &jogadores[0].nome, &jogadores[0].par_ou_impar, &jogadores[1].nome, &jogadores[1].par_ou_impar);
		scanf("%d %d", &jogadores[0].jogada, &jogadores[1].jogada);
		
		par_ou_impar = (jogadores[0].jogada + jogadores[1].jogada) % 2;
		
		if (par_ou_impar) {
			if (strcmp(jogadores[0].par_ou_impar, "IMPAR") == 0) {
				printf("%s\n", jogadores[0].nome);
				continue;
			}
			
			printf("%s\n", jogadores[1].nome);
			continue;
		}
		
		if (strcmp(jogadores[0].par_ou_impar, "PAR") == 0) {
			printf("%s\n", jogadores[0].nome);
			continue;
		}
		
		printf("%s\n", jogadores[1].nome);
	}
 
    return 0;
}
