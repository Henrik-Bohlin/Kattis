#include <stdio.h>

int main () {
    int N, A; 
    int count = 0;
    float sum = 0;
    scanf("%d", &N);
    for(int i=0;i<N;i++) {
        scanf("%d", &A);
        if (A<0) {
            count++;
        } else if (A>0) {
            sum += A;
        }
    } 
    printf("%f", sum/(N-count));
    
    return 0;
}
