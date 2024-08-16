#include <stdio.h>

int main () {
    int i,outx,outy;
    int x[1000];
    int y[1000];
    for (i=1;i<=3;i++) {
        scanf("%d %d", &x[i],&y[i]);
    }
    if (x[1]==x[2]) {
        outx = x[3];
    } else if (x[1]==x[3]) {
        outx = x[2];
    } else {
        outx= x[1];
    }
    if (y[1]==y[2]) {
        outy = y[3];
    } else if (y[1]==y[3]) {
        outy = y[2];
    } else {
        outy= y[1];
    }
    printf("%d %d", outx,outy);
    return 0;
}
