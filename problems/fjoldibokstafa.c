#include <stdio.h>
#include <string.h>

int main () {
    char input[100];
    scanf("%s", input);
    int letters = 0;
    int length = strlen(input);
    for (int i = 0; i<length; i++) {
        if (input[i] > 64 && input[i] < 91) {
            letters++;
        } else if (input[i] > 96 && input[i] < 123) {
            letters++;
        }
    }
    printf("%d", letters);
    return 0;
}
