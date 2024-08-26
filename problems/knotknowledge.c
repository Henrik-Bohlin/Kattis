#include <stdio.h>

int main () {
    int N;
    int need[1000];
    int learned[1000];
    scanf("%d", &N);
    for(int i=0;i<N;i++) {
        scanf("%d", &need[i]);
    }
    for(int j=0;j<N-1;j++) {
        scanf("%d", &learned[j]);
    }
    for(int i=0;i<N;i++) {
        for(int j=0;j<N-1;j++) {
            if (need[i] == learned[j]) {
                need[i] = 0;
        }
        }
    }
    for(int i=0;i<N;i++) {
        if (need[i] != 0) {
            printf("%d", need[i]);
    }
    }
    return 0;
}
