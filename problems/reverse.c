#include <stdio.h>

int main () {
    int n,i;
    int tal[100000];
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &tal[i]);
    }
    for(i=n-1;i>=0;i--) {
        printf("%d\n", tal[i]);
    }
    return 0;
}
