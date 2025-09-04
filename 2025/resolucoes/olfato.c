#include <stdio.h>
#include <string.h>

int main() {
    int n, achou;
    char mensagem[1000] = "";
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int x, y;
        achou = 0;
        char matriz[7][10];

        for (int j = 0; j < 7; j++) {
            for (int k = 0; k < 10; k++) {
                char c;
                scanf(" %c", &matriz[j][k]);
                if (matriz[j][k] == 'C') {
                    x = j;
                    y = k;
                }
            }
        }

        for (int j = x-2; j < x+3; j++) {
            for (int k = y-2; k < y+3; k++) {
                if (j > -1 && j < 7) {
                    if (matriz[j][k] == 'T') {
                        strcat(mensagem, "Xi, ele me notou, preciso fugir antes que eu vire KFC de dinossauro!\n");
                        achou = 1;
                        break;
                    }
                }
            }
            if (achou == 1) break;
        }

        if (achou == 0) strcat(mensagem, "Nao fui notada ainda hehehe\n");
    }
    puts(mensagem);
}