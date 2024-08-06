#include <stdio.h>

int main () {
    int x,y,i,j;
    char k;
    float dotcount=0;
    float sum=0;
    scanf("%d\n%d", &x, &y);
    for (i=0;i<x;i++) {
        for (j=0;j<y;j++) {
            scanf(" %c", &k);
            sum++;
            if (k == '.') {
                dotcount++;
            }
        }
    }
    printf("%f", dotcount/sum);
    return 0;
}
