#include <stdio.h>
 
int main() {
	char t;
	int n, i, c, total = 0;
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		scanf(" %c %d", &t, &c);
		
		if (t == 'G') {
			total -= c;
			continue;
		}
		
		total += c;
	}
	
	if (total < 0) {
		printf("NAO VAI TER CORTE, VAI TER LUTA!\n");
		return 0;
	}
	
	printf("A greve vai parar.\n");
 
    return 0;
}
