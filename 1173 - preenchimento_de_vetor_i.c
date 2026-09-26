#include <stdio.h>
#include <math.h>
 
int main() {
	int n[10], i = 1;
	scanf("%d", &n[0]);
	
	for (i; i < 10; i++) {
		n[i] = n[0] * pow(2, i);
	}
	
	i = 0;
	
	for (i; i <10; i++) {
		printf("N[%d] = %d\n", i, n[i]);
	}
 
    return 0;
}
