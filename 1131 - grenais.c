#include <stdio.h>
 
int main() {
	int gol_inter, gol_gremio, vitoria_inter = 0, vitoria_gremio = 0, novo_grenal, qtd_grenais = 0;
	
	do {
		scanf("%d %d", &gol_inter, &gol_gremio);
		if (gol_inter > gol_gremio) {
			vitoria_inter++;
		} else if (gol_inter < gol_gremio) {
			vitoria_gremio++;
		}
		qtd_grenais++;
		
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &novo_grenal);
	} while (novo_grenal == 1);
	
	printf("%d grenais\n", qtd_grenais);
	printf("Inter:%d\n", vitoria_inter);
	printf("Gremio:%d\n", vitoria_gremio);
	printf("Empates:%d\n", qtd_grenais - vitoria_inter - vitoria_gremio);
	if (vitoria_inter > vitoria_gremio) {
		printf("Inter venceu mais\n");
	} else if (vitoria_inter < vitoria_gremio) {
		printf("Gremio venceu mais\n");
	} else {
		printf("Nao houve vencedor\n");
	}
	
    return 0;
}
