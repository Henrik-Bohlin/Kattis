#include <stdio.h>

int main () {
    int N,M;
    int k=0;
    char A;
    char name[1000];
    scanf("%d %d", &N, &M);
    for(int i=0;i<=N;i++) {
        for(int j=0;j<=M;j++) {
            scanf("%c", &A);
            if (A > 96 && A < 123) {
                name[k] = A;
                k++;
            }
        }
    }
    printf("%s", name);
    return 0;
}
