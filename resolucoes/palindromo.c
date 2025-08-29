#include <stdio.h>
#include <string.h>
// maior tamanho possivel de um int: 2 147 483 647

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char agente[100];
        scanf("%s", agente);
        char copia[100];

        int tam = strlen(agente);

        for (int i = 0; i < tam; i++) {
            copia[i] = agente[tam - 1 - i];
        }

        copia[tam] = '\0';

        if (strcmp(copia, agente) == 0) {
            printf("EH CLONE, CUIDADO\n");
        } else {
            printf("Bem vindos, agentes\n");
        }
    }
}