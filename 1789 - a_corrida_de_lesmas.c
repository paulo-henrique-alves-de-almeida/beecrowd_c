#include <stdio.h>
 
int main() {
	int l, v, i;
	
	while (scanf("%d", &l) != EOF) {
		int niveis[3] = {0};
		
		for (i = 0; i < l; i++) {
			scanf("%d", &v);
			
			if (v < 10) {
				niveis[0] = 1;
			} else if (v < 20) {
				niveis[1] = 1;
			} else {
				niveis[2] = 1;
			}
		}
		
		if (niveis[2]) {
			printf("3\n");
		} else if (niveis[1]) {
			printf("2\n");
		} else {
			printf("1\n");
		}
	}
 
    return 0;
}
