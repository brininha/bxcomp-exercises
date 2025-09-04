#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int d, maior = 0;
        char vencedor[100];
        scanf("%d", &d);
        for (int j = 0; j < d; j++) {
            int poder;
            char nome[100];
            scanf("%s", nome);
            scanf("%d", &poder);
            if (poder > maior) {
                maior = poder;
                strcpy(vencedor, nome);
            }
        }
        printf("%s %d\n", vencedor, maior);
    }
}