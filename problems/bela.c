#include <stdio.h>

int main () {
    int N, sum=0;
    char B, card[10];
    scanf("%d %c", &N, &B);
    int rounds = N*4;
    for (int i=0;i<rounds;i++) {
        scanf("%s", card);
        if (card[0] == 'A') {
            sum += 11;
        }else if (card[0] == 'K') {
            sum += 4;
        } else if (card[0] == 'Q') {
            sum += 3;
        } else if (card[0] == 'J') {
            if (card[1] == B) {
                sum += 20;
            } else {
                sum += 2;
            }
        } else if (card[0] == 'T') {
            sum += 10;
        } else if (card[0] == '9') {
            if (card[1] == B) {
                sum += 14;
            }
        }
    }
    printf("%d", sum);
   
    return 0;
}
