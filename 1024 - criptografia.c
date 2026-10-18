
#include <stdio.h>

int main() {
    char mensagem[1001], troca;
    int n, i, j, qtd_caracteres;

    scanf("%d", &n);
    getchar();

    for (i = 1; i <= n; i++) {
        fgets(mensagem, sizeof(mensagem), stdin);

        for (j = 0; j < 1001; j++) {
            if (mensagem[j] == '\n' || mensagem[j] == '\0') {
                mensagem[j] = '\0';
                qtd_caracteres = j;
                break;
            }
        }

        for (j = 0; j < qtd_caracteres; j++) {
            if ((mensagem[j] >= 'A' && mensagem[j] <= 'Z') ||
                (mensagem[j] >= 'a' && mensagem[j] <= 'z')) {
                mensagem[j] += 3;
            }
        }

        for (j = 0; j < qtd_caracteres / 2; j++) {
            troca = mensagem[j];
            mensagem[j] = mensagem[qtd_caracteres - 1 - j];
            mensagem[qtd_caracteres - 1 - j] = troca;
        }

        for (j = qtd_caracteres / 2; j < qtd_caracteres; j++) {
            mensagem[j] -= 1;
        }

        printf("%s\n", mensagem);
    }

    return 0;
}

