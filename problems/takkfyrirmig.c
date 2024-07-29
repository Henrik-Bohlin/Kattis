#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    char string[100];
    for(int i=0;i<n;i++) {
        scanf("%s", string);
        printf("Takk %s\n", string);
    } 
}
