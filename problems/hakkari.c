#include <stdio.h>

int main () {
    int n,m,i,j,mines=0;
    char car;
    scanf("%d %d", &n, &m);
    int numbers[10000][10000];
    int xpos[10000];
    int ypos[10000];
    for(i=1;i<=n;i++) {
        for(j=1;j<=m;j++) {
            scanf(" %c", &car);
            if (car == '*') {
                xpos[mines]=i;
                ypos[mines]=j;
                mines++;
            }
        }
    }
    printf("%d\n", mines);
    for(i=0;i<mines;i++) {
        printf("%d %d\n",xpos[i], ypos[i]);
    }
    return 0;
}
