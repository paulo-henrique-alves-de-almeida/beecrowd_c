#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j;

    while (scanf("%d", &n) && n != 0) {

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                printf("%3d", abs(i - j) + 1);

                if (j < n - 1) {
                    printf(" ");
                }
            }

            printf("\n");
        }

        printf("\n");
    }

    return 0;
}
