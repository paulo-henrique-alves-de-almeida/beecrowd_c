#include <stdio.h>

int main() {
    char t;
    double valor, soma = 0;
    int i, j, area_verde;

    scanf(" %c", &t);

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            if (j < i && j > 11 - i) {
                scanf("%lf", &valor);
                soma += valor;
                continue;
            }

            scanf("%*lf");
        }
    }

    if (t == 'S') {
        printf("%.1lf\n", soma);
    } else if (t == 'M') {
        area_verde = (5 * (5 + 1) / 2) * 2;
        printf("%.1lf\n", soma / area_verde);
    }

    return 0;
}
