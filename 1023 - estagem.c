#include <stdio.h>

int main() {
    long long media;
    int n, i = 1, j, k, x, y;

    while (1) {
        scanf("%d", &n);

        if (n == 0) {
            return 0;
        }

        int total_moradores = 0;
        int total_consumo = 0;
        int consumo[201] = {0};
        k = 0;

        if (i > 1) {
            printf("\n");
        }

        printf("Cidade# %d:\n", i);

        for (j = 0; j < n; j++) {
            scanf("%d %d", &x, &y);

            total_moradores += x;
            total_consumo += y;
            consumo[y / x] += x;
        }

        for (j = 0; j <= 200; j++) {
            if (consumo[j] != 0) {
                if (k > 0) {
                    printf(" ");
                } else {
                    k = 1;
                }

                printf("%d-%d", consumo[j], j);
            }
        }

        media = (long long) total_consumo * 100 / total_moradores;

        printf("\nConsumo medio: %lld.%02lld m3.\n",
               media / 100, media % 100);

        i++;
    }
}
