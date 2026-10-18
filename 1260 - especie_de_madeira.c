#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ARVORES 1000000
#define TAM_NOME 35

char especies[MAX_ARVORES][TAM_NOME];

int comparar(const void *a, const void *b) {
    return strcmp((const char *)a, (const char *)b);
}

int main() {
    char buffer[TAM_NOME];
    
    if (!fgets(buffer, sizeof(buffer), stdin)) return 0;
    int n = atoi(buffer);

    fgets(buffer, sizeof(buffer), stdin);

    for (int i = 0; i < n; i++) {
        int total_arvores = 0;

        while (fgets(buffer, sizeof(buffer), stdin) != NULL) {
            buffer[strcspn(buffer, "\r\n")] = '\0';
            
            if (strlen(buffer) == 0) {
                break;
            }
            
            strcpy(especies[total_arvores], buffer);
            total_arvores++;
        }

        if (total_arvores == 0) continue;

        qsort(especies, total_arvores, TAM_NOME, comparar);

        if (i > 0) {
            printf("\n");
        }

        int count = 1;
        for (int j = 1; j < total_arvores; j++) {
            if (strcmp(especies[j], especies[j - 1]) == 0) {
                count++;
            } else {
                double percentual = (count * 100.0) / total_arvores;
                printf("%s %.4f\n", especies[j - 1], percentual);
                count = 1;
            }
        }
        double percentual = (count * 100.0) / total_arvores;
        printf("%s %.4f\n", especies[total_arvores - 1], percentual);
    }

    return 0;
}
