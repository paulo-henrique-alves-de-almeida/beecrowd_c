#include <stdio.h>
#include <string.h>
 
int main() {
	char palavra[20];
	scanf("%19s", &palavra);
	
	if (strcmp(palavra, "vertebrado") == 0) {
		scanf("%19s", &palavra);
		
		if (strcmp(palavra, "ave") == 0) {
			scanf("%19s", &palavra);
			if (strcmp(palavra, "onivoro") == 0) {
				printf("pomba\n");
			} else {
				printf("aguia\n");
			}
		} else {
			scanf("%19s", &palavra);
			if (strcmp(palavra, "onivoro") == 0) {
				printf("homem\n");
			} else {
				printf("vaca\n");
			}
		}
	} else {
		scanf("%19s", &palavra);
		if (strcmp(palavra, "inseto") == 0) {
			scanf("%19s", &palavra);
			if (strcmp(palavra, "herbivoro") == 0) {
				printf("lagarta\n");
			} else {
				printf("pulga\n");
			}
		} else {
			scanf("%19s", &palavra);
			if (strcmp(palavra, "onivoro") == 0) {
				printf("minhoca\n");
			} else {
				printf("sanguessuga\n");
			}
		}
	}
 
    return 0;
}
