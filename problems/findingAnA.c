#include <stdio.h>
#include <string.h>

int main () {
    int i, foundA=0, k=0;
    char string[10000];
    char output[10000];
    scanf("%s", string);
    int length = strlen(string);
    for(i=0;i<length;i++) {
        if (string[i]== 'a') {
            foundA = 1;
        }
        if (foundA == 1) {
            output[k] = string[i];
            k++;
        }
    }
    printf("%s", output);
    return 0;
}
