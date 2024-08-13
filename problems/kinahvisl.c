#include <stdio.h>
#include <string.h>

int main () {
    char first[1000001];
    char second[1000001];
    int amount = 0;
    scanf("%s", first);
    scanf("%s", second);
    int length = strlen(first);
    for (int i = 0; i<length;i++) {
        if(first[i] != second[i]) {
            amount++;
        }
    }
    printf("%d", amount+1);
    return 0;
