#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main () {
    int i, vowels=0;
    char string [1000];
    fgets(string,1000,stdin);
    int length = strlen(string);
    for(i=0;i<length;i++) {
        char letter = toupper(string[i]);
        if (letter=='A' || letter=='E' || letter=='I' || letter=='O' || letter=='U') {
            vowels++;
        }
    }
    printf("%d", vowels);
    return 0;
}
