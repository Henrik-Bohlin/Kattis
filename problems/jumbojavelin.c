#include <stdio.h>

int main () {
    int n, l, sum=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &l);
        sum += l;
    }
    printf("%d", sum-(n-1));
    return 0;
}
