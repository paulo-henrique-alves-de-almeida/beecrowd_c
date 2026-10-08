#include <stdio.h>

int main() {
    int n, i, a = 0, b = 1;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("%d%s", a, i == n - 1 ? "\n" : " ");
        int temp = a + b;
        a = b;
        b = temp;
    }
}
