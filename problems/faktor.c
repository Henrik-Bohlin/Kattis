#include <stdio.h>

int main () {
    
    int Articles, Impact; 
    scanf("%d %d", &Articles, &Impact);
    printf("%d\n", Articles * (Impact-1)+1 );
    return 0;
}
