#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int compara(const void *a, const void *b) {
    return *(char*)a - *(char*)b;
}

int main() {
    int n;
    char frase[1005];
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        int pangrama = 0;
        char alfabeto[27] = "abcdefghijklmnopqrstuvwxyz";
        fgets(frase, sizeof(frase), stdin);
        for (int j = 0; j < strlen(frase); j++) {
            for (int k = 0; k < strlen(alfabeto); k++) {
                int f = tolower(frase[j]);
                if (f == alfabeto[k]) {
                    alfabeto[k] = '1';
                    pangrama++;
                    break;
                }
            }
        }
        if (pangrama == 26) {
            printf("Verdadeiro\n");
        } else {
            printf("Falso\n");
        }
    }
    return 0;
}