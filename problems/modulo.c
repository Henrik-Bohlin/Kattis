#include <stdio.h>

int main () {
    int i,a,diff=10,j;
    int number[100];
    for(i=0;i<10;i++) {
        scanf("%d", &a);
        number[i] = a % 42;
        for(j=0;j<i;j++) {
            if(number[i]==number[j]) {
                diff--;
                j = i;
            }
        }
    }
    printf("%d\n", diff);
    return 0;
}
