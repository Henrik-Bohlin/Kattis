#include <stdio.h>
#include <string.h>

int main () {
    char number[100];
    scanf("%s", number);
    if (number[0]== '5' && number[1]== '5' && number [2]== '5') {
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}
