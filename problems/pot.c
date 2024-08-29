#include <stdio.h>
#include <math.h>

int main () {
    int n,i,a,base,ex,sum=0;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &a);
        ex = a % 10;
        base = a/10;
        sum += pow(base,ex);
    }
    printf("%d", sum);
    return 0;
}
