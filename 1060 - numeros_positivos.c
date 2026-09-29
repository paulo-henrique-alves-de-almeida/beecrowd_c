#include <stdio.h>
 
int main() {
	int i = 1, positivos = 0;
	float num;
	
	for (i; i <= 6; i++) {
		scanf("%f", &num);
		
		if (num > 0) {
			positivos++;
		}
	}
	
	printf("%d valores positivos\n", positivos);
 
    return 0;
}
