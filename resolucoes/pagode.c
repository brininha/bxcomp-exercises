#include <stdio.h>

long id_fib(long x) {
    long id = 1;
    long prox = 0, ant1 = 0, ant2 = 1;
    while (prox < x) {
        prox = ant1 + ant2;
        ant1 = ant2;
        ant2 = prox;
        id++;
    }
    if (prox == 0) {
        return 0;
    }

    return id;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        if (num == 1) {
            printf("1 2\n");
            continue;
        }
        printf("%ld\n", id_fib(num));
    }
}