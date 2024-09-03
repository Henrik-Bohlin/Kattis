#include <stdio.h>

int main () {
    int N,M, i, j;
    int Ntal [100];
    int Mtal [100];
    scanf("%d %d", &N, &M);
    for(i=0;i<N;i++) {
        scanf("%d", &Ntal[i]);
    }
    for(j=0;j<M;j++) {
        scanf("%d", &Mtal[j]);
    }
    for(i=0;i<N;i++) {
        for(j=0;j<M;j++) {
            if (Ntal[i] == Mtal[j]) {
                printf("%d ", Ntal[i]);
            }
        }
    }
    return 0;
}
