#include <stdio.h>
#include <string.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    char buffer[200];
    fgets(buffer, sizeof(buffer), stdin);

    for (int i = 0; i < n; i++) {
        if (!fgets(buffer, sizeof(buffer), stdin)) break;

        buffer[strcspn(buffer, "\r\n")] = '\0';

        char s1[55] = {0}, s2[55] = {0};
        int parsed = sscanf(buffer, "%s %s", s1, s2);
        
        if (parsed < 2) continue;

        int j = 0;
        while (s1[j] != '\0' || s2[j] != '\0') {
            if (s1[j] != '\0') {
                putchar(s1[j]);
            }
            if (s2[j] != '\0') {
                putchar(s2[j]);
            }
            j++;
        }
        putchar('\n');
    }

    return 0;
}
