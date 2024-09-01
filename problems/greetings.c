#include <stdio.h>
#include <string.h>

int main () {
    int count = 0;
    char input[10001];
    scanf("%s", input);
    int length = strlen(input);
    for (int i=0;i<length;i++) {
        if (input[i] == 'e') {
            count++;
        }
    }
    char greeting[10001];
    for (int i=0; i<count*2;i++) {
        greeting[i] = 101;
    }
    printf("h%sy", greeting);
    return 0;
}
