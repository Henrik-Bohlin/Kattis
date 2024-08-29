#include <stdio.h>

int main () {
    int N,M, i, j, sum=0;
    char kar;
    scanf("%d %d", &N, &M);
    
    for(i=0;i<N;i++) {
        for(j=0;j<M+1;j++) {
            scanf("%c", &kar);
            if (kar == 46) {
                sum += 20;
            } else if (kar == 79) {
                sum += 10;
            } else if (kar == 92 || kar == 47) {
                sum += 25;
            } else if (kar == 65) {
                sum += 35;
            } else if (kar == '^' ) {
                sum += 5;
            } else if (kar == 'v' ) {
                sum += 22;
            }
        }
    }
    printf("%d", sum);
    return 0;
}
