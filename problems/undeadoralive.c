#include <stdio.h>
#include <string.h>

int main () {
    int alive=0,undead=0;
    char input[160];
    fgets(input, 160, stdin);
    int length = strlen(input);
    for(int i=0;i<length;i++) {
        if(input[i] == 58) {
            if(input[i+1] == 41) {
                alive++;
            } else if(input[i+1] == 40) {
                undead++;
            }
        }
    }
    if(alive > 0 && undead == 0) {
        printf("alive");
    } else if(alive == 0 && undead > 0) {
        printf("undead");
    } else if(alive > 0 && undead > 0) {
        printf("double agent");
    } else {
        printf("machine");
    }
    return 0;
}
