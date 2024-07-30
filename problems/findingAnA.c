#include <stdio.h>
#include <string.h>

int main () {
    int a=0;
    char string [1000];
    scanf("%s", string);
    int length = strlen(string);
    for (int i=0;i<length;i++) {
        if (string[i] == 97) {
            a++;
        }
        if (a > 0) {
            printf("%c", string[i]);
        }
    }
}
