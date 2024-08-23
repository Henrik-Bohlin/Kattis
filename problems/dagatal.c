#include <stdio.h>

int main () {
    int m;
    scanf("%d", &m);
    if (m==2) {
        printf("28");
    } else if ((m % 2)!= 0 && m < 8) {
        printf("31");
    } else if ((m % 2)== 0 && m < 8) {
        printf("30");
    } else if ((m % 2)== 0 && m >= 8) {
        printf("31");
    } else if ((m % 2)!= 0 && m >= 8) {
        printf("30");
    }
    return 0;
}
