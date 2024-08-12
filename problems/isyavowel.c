#include <stdio.h>
#include <string.h>
int main () {
    char text[50];
    scanf("%s", text);
    int length = strlen(text);
    int count = 0;
    int y = 0;
    for (int i =0; i<length;i++) {
        if (text[i] == 'a' || text[i] == 'e'|| text[i] == 'i' || text[i] == 'o' || text[i] == 'u') {
            count++;
        } else if (text[i] == 'y') {
            count++;
            y++;
        } 
    }
    printf("%d %d", count-y, count); 
    return 0;
}
