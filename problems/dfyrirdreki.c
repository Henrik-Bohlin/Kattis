#include <stdio.h>

int main () {
    int a,b,c;
    scanf("%d\n%d\n%d", &a, &b, &c);
    if(b*b-4*a*c > 0) {
        printf("2");
    } else if (b*b-4*a*c == 0) {
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}
