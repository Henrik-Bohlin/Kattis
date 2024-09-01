#include <stdio.h>

int main () {
    
    int tot,N, score, rem;
    float max,min, sum=0;
    scanf("%d %d", &tot, &N);
    for (int i=0; i<N;i++) {
        scanf("%d", &score);
        sum += score;
    }
    rem = tot-N;
    max = (sum + 3*rem)/tot;
    min = (sum - 3*rem)/tot;
    printf("%.4f %.4f", min, max);
    
    return 0;
}
