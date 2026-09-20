#include <stdio.h>
 
int main() {
	int duracao, hora, minuto, segundo;
	scanf("%d", &duracao);
	
	hora = duracao / (60 * 60);
	minuto = (duracao % (60 * 60)) / 60;
	segundo = duracao % 60;
	
	printf("%d:%d:%d\n", hora, minuto, segundo);
 
    return 0;
}
