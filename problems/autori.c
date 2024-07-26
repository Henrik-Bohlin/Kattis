#include <stdio.h>
#include <string.h>

int main () {
    char string[1000];
    char output[100];
    int i, k=0;
    
    scanf("%s", string);
    int length = strlen(string);
    
    for(i=0;i<length;i++) {
        if (string[i] > 64 && string[i] < 91) {
            output[k] = string[i];
            k++;
        }
    }
    printf("%s", output);
}
