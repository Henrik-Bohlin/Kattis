#include <stdio.h>

int main () {
    int N, price;
    scanf("%d", &N);
    if (N > 2020) {
        price = (N-2020)*100+1000;
    } else {
        price = 1000; 
    }
    printf("%d", price);
    return 0;
}
