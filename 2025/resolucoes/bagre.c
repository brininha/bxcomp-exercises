#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    char mensagem[1000] = "";

    for (int i = 0; i < n; i++) {
        int m, invalido = 0;
        char palavra[500] = "";
        scanf("%d", &m);
        getchar();
        for (int j = 0; j < m; j++) {
            char tunel[500];
            fgets(tunel, sizeof(tunel), stdin);
            if ((strstr(tunel, "ESQUERDA") != NULL && strstr(tunel, "DIREITA") != NULL) || (strstr(tunel, "ESQUERDA") == NULL && strstr(tunel, "DIREITA") == NULL)) {
                invalido = 1;
            } else if (strstr(tunel, "ESQUERDA") != NULL) {
                strcat(palavra, "ESQUERDA ");
            } else {
                strcat(palavra, "DIREITA ");
            }
        }
        if (invalido != 1) {
            strcat(palavra, "ESPERE POR NOS CORUJINHA!!!\n");
        } else {
            strcpy(palavra, "");
            strcat(palavra, "Ahn? Acho que escolhemos o tunel errado...\n");
        }
        strcat(mensagem, palavra);
    }
    printf("%s", mensagem);
}