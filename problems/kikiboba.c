#include <stdio.h>
#include <string.h>

int main () {
    int i,b=0,k=0;
    char string[100];
    scanf("%s", string);
    int length = strlen(string);
    for(i=0;i<length;i++) {
        if(string[i]== 'b') {
            b++;
        } else if (string[i]== 'k') {
            k++;
        } 
    }
    if (b == k && k > 0) {
        printf("boki");
    } else if (b > k) {
        printf("boba");
    } else if (b < k) {
        printf("kiki");
    } else {
        printf("none");
    }
    return 0;
}
