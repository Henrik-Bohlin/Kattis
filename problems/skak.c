#include <stdio.h>

int main () {
    int Xh,Yh,Xp,Yp;
    scanf("%d %d\n%d %d", &Xh, &Yh, &Xp, &Yp);
    if (Xh == Xp || Yh == Yp) {
        printf("1");
    } else {
        printf("2");
    }
    return 0;
}
