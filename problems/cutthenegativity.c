#include <stdio.h>

int main () {
    int N, i, j, tal, M = 0;
    int u[10000];
    int v[10000];
    int c[10000];
    scanf("%d", &N);
    for (i=1;i<=N;i++) {
        for(j=1;j<=N;j++) {
            scanf("%d", &tal);
            if (tal > 0) {
                u[M] = i;
                v[M] = j;
                c[M] = tal;
                M++;
            }
        }
    }
    printf("%d\n", M);
    for (int k=0;k<M;k++) {
        printf("%d %d %d\n", u[k], v[k], c[k]);
    }
    return 0;
}
