#include <stdio.h>

int main () {
    int N,B,sum=0;
    scanf("%d", &N);
    for (int i =0; i<N;i++) {
        scanf("%d", &B);
        sum += B; 
    } 
    printf("%d", sum);
    return 0;
}
