#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int tam, palindromo = 0;
        int metros = 0;
        scanf("%d", &tam);
        getchar();
        char lista[105];
        fgets(lista, sizeof(lista), stdin);
        for (int j = 0; j < strlen(lista); j++) {
            if (lista[j] == 'C' && lista[j+1] == 'F') {
                metros += 3;
            } else if (lista[j] == 'C' && lista[j+1] == 'D') {
                metros += 5;
            } else if (lista[j] == 'B' && lista[j+1] != 'D') {
                metros += 10;
            }
        }

        for (int j = 0; j < strlen(lista) - 2; j++) {
            if (lista[j] == lista[j+2]) {
                palindromo = 1;
            }
        }

        if (palindromo && metros >= tam) {
            printf("Capitao: Quem disse que pinguim nao voa? Haha! Sorriam e acenem rapazes\n");
        } else if (!palindromo && metros >= tam) {
            printf("Capitao: Sujou! Rapido, escondam nossa rota de fuga!... Voce nao viu nada...\n");
        } else {
            printf("Kowalski: Capitao, segundo meus calculos faltaram %d metros para escaparmos\n", (tam - metros));
        }
    }
}