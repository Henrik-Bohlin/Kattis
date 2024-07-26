#include <stdio.h>

int main () {
    char string[10];
    int n;
    scanf("%s\n%d", string, &n);
    for(int i=0;i<n;i++) {
        printf("%s", string);
    }
}
