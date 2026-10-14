#include <stdio.h>
 
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	
	if (a < b) {
		printf("ok\n");
		return 0;
	}
	
	printf("no\n");
 
    return 0;
}
