#include <stdio.h>

int main () {
    int a,b;
    scanf("%d\n%d", &a, &b);
    if (b > a) {
        printf("FAKE NEWS!");
    } else if (b == a) {
        printf("WORLD WAR 3!");
    } else {
        printf("MAGA!");
    }
    return 0;
}
