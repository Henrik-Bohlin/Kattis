#include <stdio.h>

int main () {
    int G, T, N, item, itemsWeight = 0;
    scanf("%d %d %d", &G, &T, &N);
    for(int i=0;i<N;i++) {
        scanf("%d", &item);
        itemsWeight += item;
    }
    printf("%0.f", (G-T)*(0.9)-itemsWeight);
    return 0;
}
