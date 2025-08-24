#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int x;
        char palavra[105];
        scanf("%d", &x);
        getchar();
        fgets(palavra, sizeof(palavra), stdin);
        palavra[strcspn(palavra, "\n")] = '\0';
        for (int j = 0; j < strlen(palavra); j++) {
            int p = (int) palavra[j];
            int count = 0;
            
            while (count < x) {
                p++;
                if (p > 90) {
                    p = 65;
                }
                count++;
            }

            palavra[j] = (char) p;
        }
        puts(palavra);
    }
}