#include <stdio.h>
#include <string.h>
 
int main() {
	char g[12];
	int n, h, i, p = 0, bonecos = 0, arquitetos = 0, musicos = 0, desenhistas = 0;
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		scanf("%*s %11s %d", &g, &h);
		
		
		if (strcmp(g, "bonecos") == 0) {
			bonecos += h;
		} else if (strcmp(g, "arquitetos") == 0) {
			arquitetos += h;
		} else if (strcmp(g, "musicos") == 0) {
			musicos += h;
		} else if (strcmp(g, "desenhistas") == 0) {
			desenhistas += h;
		}
	}
	
	p = bonecos / 8 + arquitetos / 4 + musicos / 6 + desenhistas / 12;
	printf("%d\n", p);
 
    return 0;
}
