#include <stdio.h>

int main () {
    int N,A;
    int coldcount = 0; 
    scanf("%d", &N); 
    for (int i=0;i<N;i++) {
    scanf("%d", &A);
    if ( A < 0) {
            coldcount++; 
        }
    }
    printf("%d\n", coldcount);
    return 0; 
}
