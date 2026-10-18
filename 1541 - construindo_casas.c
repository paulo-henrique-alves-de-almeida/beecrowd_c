#include <stdio.h>
#include <math.h>
 
int main() {
	int a, b, c;
	double lado;
	
	while (1) {
		scanf("%d", &a);
		
		if (a == 0) {
			break;
		}
		
		scanf("%d %d", &b, &c);
		
		lado = sqrt((a * b) / ((double) c / 100));
		printf("%d\n", (int) lado);
	}
 
    return 0;
}
