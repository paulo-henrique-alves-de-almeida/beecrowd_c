#include <stdio.h>
 
int main() {
	int tempo, velocidade, distancia;
	float gasto;
	scanf("%d %d", &tempo, &velocidade);
	distancia = velocidade * tempo;
	gasto = distancia / 12.0;
	
	printf("%.3f\n", gasto);
 
    return 0;
}
