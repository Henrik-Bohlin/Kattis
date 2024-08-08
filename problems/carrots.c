#include <stdio.h>

int main () {
    int N, P;
    char text[100];
    scanf("%d %d", &N, &P);
    for(int i=0; i<N; i++) {
        scanf("%s", text);
    } 
    printf("%d", P);
    return 0; 
}
