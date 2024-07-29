#include <stdio.h>

int main () {
    char string [100];
    int x;
    scanf("%s\n%d", string, &x);
    for (int i=0;i<x;i++) {
        printf("Hipp hipp hurra, %s!\n", string);
    }
}
