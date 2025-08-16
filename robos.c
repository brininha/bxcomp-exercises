#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n, m, r, k, x, y, contratempo = 0;
        scanf("%d %d", &n, &m);
        scanf("%d %d", &r, &k);
        int grade[n][m];
        memset(grade, 0, sizeof(grade));
        for (int j = 0; j < r; j++) {
            scanf("%d %d", &x, &y);
            for (int l = 0; l < k; l++) {
                char mov;
                scanf(" %c", &mov);
                if (mov == 'E') {
                    x--;
                } else if (mov == 'D') {
                    x++;
                } else if (mov == 'C') {
                    y--;
                } else {
                    y++;
                }
            }
            grade[x][y]++;
            if (grade[x][y] > 1) {
                printf("Hmm, parece que tivemos um pequeno contratempo robótico. %d\n", grade[x][y]);
                contratempo = 1;
                break;
            }
        }
        if (!contratempo) {
            printf("Eureka! Eu sabia que minha programação era impecável.\n");
        }
    }
}