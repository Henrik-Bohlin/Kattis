#include <stdio.h>

int main () {
    
    int K,Q,r,b,k,p; 
    scanf("%d %d %d %d %d %d", &K, &Q, &r, &b, &k, &p);
    printf("%d %d %d %d %d %d\n", 1-K, 1-Q, 2-r, 2-b, 2-k, 8-p);
    return 0;
}
