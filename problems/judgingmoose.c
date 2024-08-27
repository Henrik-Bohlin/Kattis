#include <stdio.h>

int main () {
    int l,r;
    scanf("%d %d",&l, &r);
    if (l == r && r == 0) {
        printf("Not a moose");
    } else if (l == r && r !=0) {
        printf("Even %d", l+r);
    } else if (l>r) {
        printf("Odd %d",l*2);
    } else if (l<r) {
        printf("Odd %d",r*2);
    }
    return 0;
}
