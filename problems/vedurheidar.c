#include <stdio.h>

int main () {
    int ref,n,i;
    char string[10000];
    int tal;
    scanf("%d\n%d", &ref, &n);
    for(i=0;i<n;i++) {
        scanf("%s %d", string, &tal);
        if (tal < ref) {
            printf("%s lokud\n", string);
        } else {
            printf("%s opin\n", string);
        }
    }
    return 0;
}
