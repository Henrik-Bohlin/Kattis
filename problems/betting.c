#include <stdio.h>

int main () {
    float N,A,B;
    scanf("%f", &N);
    A = 100/N;
    B = 100/(100-N);
    printf("%f\n%f\n", A, B); 
    return 0;   
}
