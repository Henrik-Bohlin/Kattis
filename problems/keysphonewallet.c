#include <stdio.h>
#include <string.h>
int main () {
    int N;
    int P = 0;
    int K = 0;
    int W = 0;
    char text[50];
    char phone[10] = "phone";
    char keys[10] = "keys";
    char wallet[10] = "wallet";
    scanf("%d", &N);
    for(int i=0; i<N;i++) {
        scanf("%s", text);
        if (strcmp(text, phone) == 0) {
            P = 1;
        } else if (strcmp(text, keys) == 0) {
            K = 1;
        } else if (strcmp(text, wallet) == 0) {
            W = 1;
    }
    }
    if (W == 1 && K == 1 && P == 1) {
        printf("ready");
    } if (K == 0) {
        printf("keys\n");
    } if (P == 0) {
        printf("phone\n");
    } if (W == 0) {
        printf("wallet\n");
    }
    return 0;
}
