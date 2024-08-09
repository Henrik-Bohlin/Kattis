#include <stdio.h>
#include <string.h>

int main () {
    int hiss=0;
    char string [100];
    scanf("%s", string);
    int length = strlen(string);
    for (int i=0;i<length;i++) {
        if (string[i] == 's' && string[i+1] == 's') {
            hiss++; 
        }
    }
    if (hiss > 0) {
        printf("hiss\n");
    } else {
        printf("no hiss\n");
    }
    return 0;
}
