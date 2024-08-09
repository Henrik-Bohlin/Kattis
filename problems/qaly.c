#include <stdio.h>

int main () {
    int n;
    float q,y, sum=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%f %f", &q, &y);
        sum += q*y;
    }
    printf("%f", sum);
    return 0;
}
