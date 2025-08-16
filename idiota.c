#include <stdio.h>
#include <string.h>

int main() {
    int t;
    char frase[255];
    
    scanf("%d", &t);
    getchar();
    for (int i = 0; i < t; i++) {
        int counter = 0;
        fgets(frase, sizeof(frase), stdin);
        for (int j = 0; j < 255; j++) {
            if (frase[j] == '\0') {
                break;
            }
            counter++;
        }
        int result = counter % 3;
        if (result == 1) {
            printf("Que desejo mais interessante, Timmy\n");
        } else {
            printf("Haha, gostei desse desejo\n");
        }
    }
}
