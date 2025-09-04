#include <stdio.h>

int primo(int num) {
    if (num == 0 || num == 1)
        return 0;
    for(int i = 2; i < num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        
        int min = x / 60;
        int seg = x % 60;
        int hor = min / 60;
        min %= 60;
        
        if (primo(min) == 1 || primo(seg) == 1) {
            printf("%02d:%02d:%02d CORTA OS FIO FLASH AGORA BOMB HAS BEEN DEFUSED\n", hor, min, seg);
        } else {
            printf("%02d:%02d:%02d Segura a mao flash paciencia eh uma virtude nao seja precoce\n", hor, min, seg);
        }
    }
}
