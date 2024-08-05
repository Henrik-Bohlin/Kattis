#include <stdio.h>

int main () {
    int N, ref, i, tal;
    scanf("%d %d", &N, &ref);
    for(i=1;i<=N;i++) {
        scanf("%d", &tal);
        if (tal == ref) {
            if (i == 1) {
                printf("fyrst");
            } else if (i == 2) {
                printf("naestfyrst");
            } else {
                printf("%d fyrst", i);
            }
        }
    }
    return 0;
}
