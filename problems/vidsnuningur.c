#include <stdio.h>
#include <string.h>

int main () {
    
    char input[1001];
    scanf("%s", input);
    int length = strlen(input);
    for(int i = length-1;i>=0 ;i--) {
        printf("%c", input[i]);
    }
    return 0; 
}
