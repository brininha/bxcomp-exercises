#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int ingredientes[4] = {0};
        for (int j = 0; j < 4; j++) {
            char palavra[1000];
            scanf("%s", palavra);
            if (strcmp(palavra, "acucar") == 0) {
                ingredientes[0] = 1;
            } else if (strcmp(palavra, "tempero") == 0) {
                ingredientes[1] = 1;
            } else if (strcmp(palavra, "tudoquehadebom") == 0) {
                ingredientes[2] = 1;
            } else if (strcmp(palavra, "x") == 0) {
                ingredientes[3] = 1;
            }
        }
        if (ingredientes[0] == 1 && ingredientes[1] == 1 && ingredientes[2] == 1 && ingredientes[3] == 1) {
            printf("E assim nasceram as meninas Superpoderosas, usando seus ultra-super poderes - Florzinha, Lindinha e Docinho, tem dedicado suas vidas Combatendo o crime, e as forcas do mal!\n");
        }
    }
}