#include <stdio.h>
#include <stdlib.h>

int compara(const void *a, const void *b) {
    return (*(int*) a - *(int*) b);
}

int main() {
    int n;
    scanf("%d", &n);
    int elementos[n][16];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 16; j++) {
            scanf("%d", &elementos[i][j]);
        }
        qsort(elementos[i], 16, sizeof(int), compara);
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 16; j++) {
            printf("%d ", elementos[i][j]);
        }
        printf("\n");
    }
}