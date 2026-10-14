#include <stdio.h>
 
int main() {
	int e, f, c;
	scanf("%d %d %d", &e, &f, &c);
	
	if (e + f < c) {
		printf("0\n");
		return 0;
	}
	
	printf("%d\n", (e + f - 1) / (c - 1));
 
    return 0;
}
