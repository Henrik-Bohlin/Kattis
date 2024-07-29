#include <stdio.h>

int main () {
    float x,dec;
    int n;
    scanf("%f", &x);
    n = (int)x;
    dec = x-n;
    if (dec>0.5) {
        printf("%d",n+1);
    } else {
        printf("%d",n);
    }
}
