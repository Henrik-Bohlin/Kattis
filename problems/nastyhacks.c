#include <stdio.h>

int main () {
    int N, R, E, C;
    int res[100];
    scanf("%d", &N);
    for(int i = 0;i<N;i++) {
        scanf("%d %d %d", &R, &E, &C);
        if (R < (E-C)) {
            res[i] = 1; 
        } else if ( R == (E-C)) {
            res[i] = 2; 
        } else if (R > (E-C)) {
            res[i] = 3; 
        }  
    }
    for(int i = 0;i<N;i++) {
        if (res[i] == 1) {
            printf("advertise\n");
        } else if (res[i] == 2) {
            printf("does not matter\n");
        } else if (res[i] == 3) {
            printf("do not advertise\n");
        }
    }
    return 0;
}
