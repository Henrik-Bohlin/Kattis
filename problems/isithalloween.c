#include <stdio.h>

int main () {
    int B;
    char month[4];
    scanf("%s %d",month, &B);
    if (B == 31 && month[0] == 'O') {
        printf("yup\n");
    } else if (B == 25 && month[0] == 'D') {
        printf("yup\n");
    } else {
        printf("nope\n");
    }
    
    return 0;
}
