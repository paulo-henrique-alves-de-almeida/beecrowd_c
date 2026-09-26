#include <stdio.h>
 
int main() {
	int t, pa, pb, ano, i = 1;
	double g1, g2;
	scanf("%d", &t);
	
	for (i; i <= t; i++) {
		scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
		g1 /= 100;
		g2 /= 100;
		ano = 0;
		
		while (ano <= 101 && pa <= pb) {
			pa *= 1 + g1;
			pb *= 1 + g2;
			ano++;
		}
		
		if (ano > 100) {
			printf("Mais de 1 seculo.\n");
		} else {
			printf("%d anos.\n", ano);
		}
	}
 
    return 0;
}
