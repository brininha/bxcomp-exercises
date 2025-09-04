#include <stdio.h>
#include <string.h>

int fib(int num) {
    int ant = 0, atual = 1, prox = 0;
    while (prox < num)
    {
        prox = atual + ant;
        ant = atual;
        atual = prox;
        if (prox == num) return 1;
    }
    if (num == 0) {
        return 1;
    }
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    char respostas[1000] = "";

    for (int i = 0; i < n; i++) {
        int r, pts_cor = 0, pts_din = 0;
        scanf("%d", &r);
        for (int j = 0; j < r; j++) {
            int cor, din;
            char jog_cor, jog_din;
            scanf("%d", &cor);
            scanf("%d", &din);

            if (fib(cor) == 1) {
                jog_cor = 'P';
            } else if (cor % 2 == 0) {
                jog_cor = 'A';
            } else {
                jog_cor = 'T';
            }

            if (fib(din) == 1) {
                jog_din = 'P';
            } else if (din % 2 == 0) {
                jog_din = 'A';
            } else {
                jog_din = 'T';
            }

            if (jog_cor == 'P' && jog_din == 'T') {
                pts_cor++;
            } else if (jog_cor == 'T' && jog_din == 'A') {
                pts_cor++;
            } else if (jog_cor == 'A' && jog_din == 'P') {
                pts_cor++;
            } else if (jog_cor == jog_din) {
                pts_cor++;
                pts_din++;
            } else {
                pts_din++;
            }
        }
        if (pts_cor > pts_din) {
            strcat(respostas, "A CORUJA VOLTOU A PIAAAAAR!!!!!!\n");
        } else if (pts_din > pts_cor) {
            strcat(respostas, "NOOO, ACHO QUE OS DINOSSAUROS VAO TER CORUJA AO FORNO HOJE NA JANTA\n");
        } else {
            strcat(respostas, "Precisamos marcar uma revanche...\n");
        }
    }

    printf("%s", respostas);
}