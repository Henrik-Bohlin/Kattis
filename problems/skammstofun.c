#include <stdio.h>
#include <string.h>

int main () {
    int N, k=0;
    scanf("%d", &N);
    char text[1000000];
    char out[1000000];
    for(int i=0;i<N;i++) {
        int taken = 0;
        scanf("%s", text); 
        int length = strlen(text);
        if (text[0] > 64 && text[0] < 91 && taken==0) {
                out[k] = text[0];
                k++;
                taken = 1;
        }
    }
    for(int i=0;i<k;i++) {
        printf("%c", out[i]);
    }
    return 0;
}
