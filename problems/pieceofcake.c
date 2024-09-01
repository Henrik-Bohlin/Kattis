#include <stdio.h>

int main () {
    int thick = 4;
    int N,H,V;
    int p1, p2, p3, p4;
    scanf("%d %d %d", &N, &H, &V);
    p1 = H*V*thick; 
    p2 = H*(N-V)*thick;
    p3 = (N-H)*V*thick;
    p4 = (N-H)*(N-V)*thick;
    if(p1 >= p2 && p1 >= p3 && p1 >= p4) {
        printf("%d", p1);
    } else if (p2 > p1 && p2 >= p3 && p2 >= p4) {
        printf("%d", p2);
    } else if (p3 > p1 && p3 > p2 && p3 >= p4) {
        printf("%d", p3);
    } else if (p4 > p1 && p4 > p2 && p4 > p3){
        printf("%d", p4);
    }
    return 0; 
}
