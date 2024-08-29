#include <stdio.h>
#include <limits.h>

int main () {
    int i,j,sum=0,A,person;
    int highest = INT_MIN;
    for(i=1;i<=5;i++) {
        for(j=1;j<=4;j++) {
            scanf(" %d", &A);
            sum += A;
            if (j==4) {
                if (sum > highest){
                    highest = sum;
                    person = i;
                }
                sum = 0;
            }
        }
    }
    printf("%d %d\n", person, highest);
    return 0;
}
