#include <stdio.h>
 
int main() {
	int n, i, menor[2] = {0}, pessoa;
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		scanf("%d", &pessoa);
		
		if (i == 0 || pessoa < menor[1]) {
			menor[1] = pessoa;
			menor[0] = i;
		}
	}
	
	printf("%d\n", menor[0] + 1);
 
    return 0;
}
