#include <stdio.h>

int main () {
    float C, L, W, H;
    float sum =0;
    scanf("%f\n%f", &C, &L);
    for (int i=0;i<L;i++) {
        scanf("%f %f", &W, &H);
        sum += W*H*C;
    }
    printf("%f", sum);
    return 0;
}
