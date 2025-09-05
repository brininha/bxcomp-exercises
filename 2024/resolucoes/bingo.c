#include <stdio.h>
#include <string.h>

int comparar(int *v1, int *v2, int n) {
    for (int i = 0; i < n; i++) {
        if (v1[i] != v2[i]) return 0;
    }
    return 1;
}

int main() {
    int n;
    char resposta[1000] = "";
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int v[6] = {0};
        int cp[6] = {0};
        for (int j = 0; j < 9; j++) {
            int pos;
            scanf("%d", &pos);
            v[pos-1] += 1;
        }

        char frase[30];
        getchar();
        for (int j = 0; j < 9; j++) {
            fgets(frase, sizeof(frase), stdin);
            frase[strcspn(frase, "\n")] = '\0';
            if (strcmp(frase, "Sem novas mensagens") != 0) {
                int num = frase[7] - '0';
                if (v[num-1] > 0) v[num-1]--;
            }
        }
        if (comparar(v, cp, 6) == 1) {
            strcat(resposta, "Bingoo\n");
        } else {
            for (int i = 0; i < 6; i++) {
                char c[10];
                sprintf(c, "%d", v[i]);
                strcat(resposta, c);
                strcat(resposta, "\n");
            }
            strcat(resposta, "Ih, sobrou pra depois\n");
        }
    }
    printf("%s", resposta);
}