#include <stdio.h>
 
int main() {
	int hi, mi, hf, mf, inicio_min, fim_min, duracao;
	scanf("%d %d %d %d", &hi, &mi, &hf, &mf);
	inicio_min = hi * 60 + mi;
	fim_min = hf * 60 + mf;
	
	if (fim_min == inicio_min) {
		duracao = 24 * 60;
	} else if (fim_min < inicio_min) {
		duracao = fim_min + (24 * 60) - inicio_min;
	} else {
		duracao = fim_min - inicio_min;
	}
	
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracao / 60, duracao % 60);
 
    return 0;
}
