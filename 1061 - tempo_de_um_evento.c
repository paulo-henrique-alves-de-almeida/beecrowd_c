#include <stdio.h>
 
int main() {
	int dia[3], hora[3], minuto[3], segundo[3], total[3], i;
	
	for (i = 0; i < 2; i++) {
		scanf("%*s %d %d %*c %d %*c %d", &dia[i], &hora[i], &minuto[i], &segundo[i]);
		
		total[i] = dia[i] * 60 * 60 * 24 + hora[i] * 60 * 60 + minuto[i] * 60 + segundo[i];
	}
	
	total[2] = total[1] - total[0];
	
	printf("%d dia(s)\n", total[2] / (60 * 60 * 24));
	printf("%d hora(s)\n", (total[2] % (60 * 60 * 24) / (60 * 60)));
	printf("%d minuto(s)\n", (total[2] % (60 * 60)) / 60);
	printf("%d segundo(s)\n", total[2] % 60);
	
    return 0;
}
