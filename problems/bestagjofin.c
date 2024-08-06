#include <stdio.h>
#include <limits.h>
#include <string.h>

int main () {
    int x, age;
    int oldest = INT_MIN;
    char name[100];
    char output[100];
    scanf("%d", &x);
    for (int i=0;i<x;i++) {
        scanf("%s %d", name, &age);
        if (age > oldest) {
            oldest = age;
            strcpy(output,name);
        }
    }
    printf("%s", output);
    return 0;
}
