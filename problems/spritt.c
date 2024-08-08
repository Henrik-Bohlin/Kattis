#include <stdio.h>

int main () {
    int n, x, y, sum=0;
    scanf("%d %d", &n, &x);
    for (int i=0;i<n;i++) {
        scanf("%d",&y);
        sum += y;
    }
    if (sum > x) {
        printf("Neibb");
    } else {
        printf("Jebb");
    }
    return 0;
}
