#include <stdio.h>
#include <string.h>

int main() {
    char string[100000];
    fgets(string, 100000, stdin);
    int length = strlen(string);

    if (string[length-1] == '\n') {
        string[length-1] = '\0';
        length--;
    }
    int j = 0; 
    for (int i = 0; i < length; i++) {
        if (string[i] != ' ') { 
            string[j] = string[i];
            j++;
        }
    }
    string[j] = '\0';
    printf("%s", string);
    return 0;
}
