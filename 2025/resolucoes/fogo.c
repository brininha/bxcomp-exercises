#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        int matriz[n][n];
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                matriz[j][k] = 0;
            }
        }
        int meio = n/2;
        int x = meio, y = meio;
        int count = 1;
        int dir = 1, esq = 0, cim = 0, bai = 0;
        while (1) {
            matriz[x][y] = count;
            if (dir == 1 && y+1 < n) {
                y++;
                if (x-1 >= 0) {
                    if (matriz[x-1][y] == 0) {
                        dir = 0;
                        cim = 1;
                    }
                }
            } else if (cim == 1 && x-1 >= 0) {
                x--;
                if (y-1 >= 0) {
                    if (matriz[x][y-1] == 0) {
                        cim = 0;
                        esq = 1;
                    }
                }
            } else if (esq == 1 && y-1 >= 0) {
                y--;
                if (x+1 < n) {
                    if (matriz[x+1][y] == 0) {
                        esq = 0;
                        bai = 1;
                    }
                }
            } else if (bai == 1 && x+1 < n) {
                x++;
                if (y+1 < n) {
                    if (matriz[x][y+1] == 0) {
                        bai = 0;
                        dir = 1;
                    }
                }
            } else {
                break;
            }
            count++;
        }

        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                printf("%d ", matriz[j][k]);
            }
            printf("\n");
        }
    }
}